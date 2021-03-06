// -*- Mode: C++; tab-width: 2; -*-
// vi: set ts=2:
//
// $Id: SCWRLRotamerFile_test.C,v 1.1.2.3 2007-08-07 09:51:19 toussaint Exp $
//

#include <BALL/CONCEPT/classTest.h>

///////////////////////////

#include <BALL/FORMAT/SCWRLRotamerFile.h>
#include <BALL/STRUCTURE/rotamerLibrary.h>

///////////////////////////

START_TEST(SCWRLRotamerFile, "$Id: SCWRLRotamerFile_test.C,v 1.1.2.3 2007-08-07 09:51:19 toussaint Exp $")

/////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////

using namespace BALL;
using namespace std;

SCWRLRotamerFile*	file_ptr = 0;
CHECK(SCWRLRotamerFile::SCWRLRotamerFile())
	file_ptr = new SCWRLRotamerFile;
	TEST_NOT_EQUAL(file_ptr, 0)
RESULT


CHECK(SCWRLRotamerFile::~SCWRLRotamerFile())
	delete file_ptr;
RESULT


CHECK(SCWRLRotamerFile::SCWRLRotamerFile(const String& filename, File::OpenMode open_mode))
	SCWRLRotamerFile* f = new SCWRLRotamerFile("data/SCWRLRotamerFile_test1.lib"); // bb dep file
	TEST_NOT_EQUAL(f, 0)
  delete f;
RESULT

CHECK(SCWRLRotamerFile::SCWRLRotamerFile(const SCWRLRotamerFile& file) throw())
  SCWRLRotamerFile f("data/SCWRLRotamerFile_test2.lib"); // bb indep file
  SCWRLRotamerFile copy_of_f(f);
  RotamerLibrary lib;
  copy_of_f >> lib;
  TEST_EQUAL(lib.getNumberOfRotamers(), 110);
RESULT

CHECK(void SCWRLRotamerFile::operator >> (RotamerLibrary& library) throw())
  SCWRLRotamerFile f("data/SCWRLRotamerFile_test1.lib"); // bb dep file
	RotamerLibrary lib;
  lib.clear();
	f >> lib;
	TEST_EQUAL(lib.getNumberOfRotamers(), 4107);
RESULT

CHECK(void SCWRLRotamerFile::operator >> (RotamerLibrary& library) throw())
  SCWRLRotamerFile f("data/SCWRLRotamerFile_test2.lib"); // bb indep file
  RotamerLibrary lib;
  f >> lib;
  TEST_EQUAL(lib.getNumberOfRotamers(), 110);
RESULT

CHECK(const SCWRLRotamerFile& SCWRLRotamerFile::operator = (const SCWRLRotamerFile& file))
  SCWRLRotamerFile f("data/SCWRLRotamerFile_test2.lib"); // bb indep file
  SCWRLRotamerFile copy_of_f;
  copy_of_f = f;
  RotamerLibrary lib;
  copy_of_f >> lib;
  TEST_EQUAL(lib.getNumberOfRotamers(), 110);
RESULT
/////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////
END_TEST
