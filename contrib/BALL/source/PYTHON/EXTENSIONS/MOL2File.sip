// -*- Mode: C++; tab-width: 2; -*-
// vi: set ts=2:
//
// $Id: MOL2File.sip,v 1.10 2005-12-23 17:02:46 amoll Exp $
//

class MOL2File
  : File
{
%TypeHeaderCode
	#include <BALL/FORMAT/MOL2File.h>
	using namespace BALL;
	using namespace BALL::Exception;
%End
  public:
  MOL2File();
  MOL2File(const String&, OpenMode /openmode/ = std::ios::in)
		throw(FileNotFound);
  ~MOL2File()
		throw();
  virtual bool write(const System& /system/) throw(File::CannotWrite);
  virtual bool read(System& /system/)	throw(ParseError);
};
