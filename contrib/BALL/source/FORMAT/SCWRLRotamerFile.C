// -*- Mode: C++; tab-width: 2; -*-
// vi: set ts=2:
//
// $Id: SCWRLRotamerFile.C,v 1.1.2.4 2007-08-07 09:27:20 toussaint Exp $
//

#include <BALL/FORMAT/SCWRLRotamerFile.h>
#include <BALL/STRUCTURE/rotamerLibrary.h>

using namespace std;

namespace BALL
{
		SCWRLRotamerFile::SCWRLRotamerFile() throw()
			:	LineBasedFile()
		{
		}

		SCWRLRotamerFile::SCWRLRotamerFile(const SCWRLRotamerFile& file) throw()
			: LineBasedFile(file)
		{
		}

		SCWRLRotamerFile::SCWRLRotamerFile(const String& name, File::OpenMode open_mode) throw()
			:	LineBasedFile(name, open_mode)
		{
		}

		SCWRLRotamerFile::~SCWRLRotamerFile() throw()
		{
		}

		const SCWRLRotamerFile& SCWRLRotamerFile::operator = (const SCWRLRotamerFile& file)
		{
			LineBasedFile::operator = (file);
			return *this;
		}

		void SCWRLRotamerFile::operator >> (RotamerLibrary& rotamer_library) throw()
		{
			// now we must decide wether this is a backbone dependent or not
			RegularExpression match_indep("[A-Z][A-Z][A-Z] [0-9] [0-9] [0-9] [0-9] *[0-9]* *[0-9]* *[0-9\\.]*");
			
			// if the expression matches at least one time, this might be a bb indep file
			while (readLine())
			{
				if (match_indep.match(line_))
				{
					rewind();
					readSCWRLBackboneIndependentLibraryFile_(rotamer_library);
					if (!rotamer_library.validate())
					{
						throw(Exception::ParseError(__FILE__, __LINE__, "The discretization of the backbone torsions are not correct!", ""));
					}
					clear();
					return;
				}
			}
			
			// if not matched this is much likely a backbone independent file
			rewind();
			readSCWRLBackboneDependentLibraryFile_(rotamer_library);
			if (!rotamer_library.validate())
			{
				throw(Exception::ParseError(__FILE__, __LINE__, "The discretization of the backbone torsions are not correct!", ""));
			}
			clear();
			return;
		}

		void SCWRLRotamerFile::readSCWRLBackboneDependentLibraryFile_(RotamerLibrary& rotamer_library) throw(Exception::ParseError)
		{
			rotamer_library.setBackboneDependent(true);

			String aa_name;
			Index phi(0);
			Index psi(0);
			double probability(0);
		
			while(readLine()) 
			{
				phi = line_.getField(1).toInt();
				psi = line_.getField(2).toInt();
				probability = line_.getField(8).toFloat();

				Size number_of_torsions(0);
				for (Size i = 4; i != 8; ++i)
				{
					if (line_.getField(i).toInt() != 0)
					{
						number_of_torsions++;
					}
					else
					{
						break;
					}
				}

				//Angle chi1, chi2, chi3, chi4;
	
				//chi1.set(line_.getField(9).toFloat(), false);
				//chi2.set(line_.getField(10).toFloat(), false);
				//chi3.set(line_.getField(11).toFloat(), false);
				//chi4.set(line_.getField(12).toFloat(), false);
	
				aa_name = line_.getField(0);

				rotamer_library.addRotamer(aa_name, Rotamer(probability, line_.getField(9).toFloat(), 
																																 line_.getField(10).toFloat(), 
																																 line_.getField(11).toFloat(), 
																																 line_.getField(12).toFloat()), number_of_torsions, phi, psi);
			}
	
			return;
		}

		void SCWRLRotamerFile::readSCWRLBackboneIndependentLibraryFile_(RotamerLibrary& rotamer_library) throw(Exception::ParseError)
		{
			rotamer_library.setBackboneDependent(false);

			// read the file into a vector of Strings to reparse
			// it faster. Since the SQWRL format is a pain in the ass
			// we have to identify relevant lines by a regular expression
			RegularExpression regexp("[A-Z][A-Z][A-Z] [0-9] [0-9] [0-9] [0-9] *[0-9]* *[0-9]* *[0-9\\.]*");
			String split[18];
			while (readLine())
			{
				if (regexp.match(line_))
				{
					String aa_name = line_(0, 3);	
					Size number_of_fields = line_.split(split, 18);

					float prob = line_.getField(7).toFloat() / 100.0;

					//Angle chi1, chi2, chi3, chi4;
					float chi1(0), chi2(0), chi3(0), chi4(0);
					//chi1.set(line_.getField(11).toFloat());
					chi1 = line_.getField(11).toFloat();
          Size number_of_torsions = 1;
          if (number_of_fields > 13)
          {
            //chi2.set(line_.getField(13).toFloat());
						chi2 = line_.getField(13).toFloat();
            number_of_torsions = 2;
          }
          if (number_of_fields > 15)
          {
            //chi3.set(line_.getField(15).toFloat());
						chi3 = line_.getField(15).toFloat();
            number_of_torsions = 3;
          }
          if (number_of_fields > 17)
          {
            //chi4.set(line_.getField(17).toFloat());
						chi4 = line_.getField(17).toFloat();
            number_of_torsions = 4;
          }

					rotamer_library.addRotamer(aa_name, Rotamer(prob, chi1, chi2, chi3, chi4), number_of_torsions);
				}
			}	
		}

} // namespace BALL

