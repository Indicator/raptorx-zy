// -*- Mode: C++; tab-width: 2; -*-
// vi: set ts=2:
//
// $Id: SCWRLRotamerFile.h,v 1.1.2.2 2007-08-07 07:28:37 toussaint Exp $
//

#ifndef BALL_FORMAT_SCWRLROTAMERFILE_H
#define BALL_FORMAT_SCWRLROTAMERFILE_H

#include <BALL/FORMAT/lineBasedFile.h>

namespace BALL
{
	/// forward declaration
	class RotamerLibrary;
	/** @brief Reads Dunbrack/SCWRL rotamer library files 
	 
			This class is able to read the rotamer library files from Dunbrack including
      the one used in SCWRL3.0 .
      It decides if the file contains backbone dependent or 
			backbone independent rotamers. Currently only files with the same format
			as <b>bbdep02.May.lib</b> or <b>bbind02.May.lib</b> are supported. 
	*/
	class BALL_EXPORT SCWRLRotamerFile : public LineBasedFile
	{

		public:

		/** @name Constructors and Destructor
		*/
		//@{
		/// Default constructor
		SCWRLRotamerFile() throw();

		/// Copy constructor
		SCWRLRotamerFile(const SCWRLRotamerFile& file) throw();

		/// Detailed constructor
		SCWRLRotamerFile(const String& name, File::OpenMode open_mode = std::ios::in) throw();

		/// Destructor
		virtual ~SCWRLRotamerFile() throw();
		//@}


		/** @name Assignment
		*/
		//@{
		/// Assignment operator
		const SCWRLRotamerFile& operator = (const SCWRLRotamerFile& file);

		/// input operator
		void operator >> (RotamerLibrary& rotamer_library) throw();

		// TODO output operator????
		//@}


		protected:

			// backbone dependent read method
			void readSCWRLBackboneDependentLibraryFile_(RotamerLibrary& library) throw(Exception::ParseError);

			// backbone independent read method
			void readSCWRLBackboneIndependentLibraryFile_(RotamerLibrary& library) throw(Exception::ParseError);

	};
} // namespace BALL

#endif // BALL_FORMAT_SCWRLROTAMERFILE_H
