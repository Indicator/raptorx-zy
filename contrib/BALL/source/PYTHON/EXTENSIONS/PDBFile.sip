// -*- Mode: C++; tab-width: 2; -*-
// vi: set ts=2:
//
// $Id: PDBFile.sip,v 1.12.18.1 2007-03-25 21:37:01 oliver Exp $
//

class PDBFile
{
%TypeHeaderCode
	#include <BALL/FORMAT/PDBFile.h>
  #include <BALL/COMMON/exception.h>
	using namespace BALL;
	using namespace BALL::Exception;
%End
  public:
  PDBFile();
	// default open mode: READ
  PDBFile(const String&, OpenMode /openmode/ = std::ios::in) throw(FileNotFound);
	~PDBFile() throw();
  virtual bool read(Protein& /protein/) throw (ParseError);
  virtual bool read(Molecule& /molecule/) throw (ParseError);
  virtual bool read(System& /system/) throw (ParseError);
  virtual bool write(const Protein& /protein/) throw(File::CannotWrite);
  virtual bool write(const Molecule& /protein/) throw(File::CannotWrite);
  virtual bool write(const System& /system/) throw(File::CannotWrite);
  void operator >> (Protein& /protein/);
  void operator >> (Molecule& /molecule/);
  void operator >> (System& /system/);
  void operator << (const Protein& /protein/);
  void operator << (const Molecule& /molecule/);
  void operator << (const System& /system/);
	void close();
};
