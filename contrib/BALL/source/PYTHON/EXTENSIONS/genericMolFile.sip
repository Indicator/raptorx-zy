// -*- Mode: C++; tab-width: 2; -*-
// vi: set ts=2:
//
// $Id: genericMolFile.sip,v 1.11.18.1 2007-03-25 21:37:08 oliver Exp $
//

	class GenericMolFile
		: LineBasedFile
	{
%TypeHeaderCode
	#include <BALL/FORMAT/genericMolFile.h>
	using namespace BALL;
	using namespace BALL::Exception;
%End
		public:
		GenericMolFile() throw();
		GenericMolFile(const String& /filename/, OpenMode /open_mode/ = std::ios::in)
			throw(FileNotFound);
		GenericMolFile(const GenericMolFile& /file/)
			throw(FileNotFound);
		virtual ~GenericMolFile()	throw();

		// const GenericMolFile& operator = (const GenericMolFile& rhs)
		// 	throw(FileNotFound);
		virtual bool write(const System& /system/) throw(File::CannotWrite);
		virtual bool write(const Molecule& /molecule/) throw(File::CannotWrite);
		virtual bool read(System&	/system/) throw(ParseError);
		virtual Molecule* read() throw(ParseError);
		virtual GenericMolFile& operator >> (System& /system/) throw(ParseError);
		virtual GenericMolFile& operator << (const System& /system/) throw(File::CannotWrite);
		virtual GenericMolFile& operator >> (Molecule& /molecule/) throw(ParseError);
		virtual GenericMolFile& operator << (const Molecule& /molecule/) throw(File::CannotWrite);
	};
