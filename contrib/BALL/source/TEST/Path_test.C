// -*- Mode: C++; tab-width: 2; -*-
// vi: set ts=2:
//
// $Id: Path_test.C,v 1.12.30.3 2007-06-21 19:44:53 oliver Exp $

#include <BALL/CONCEPT/classTest.h>

///////////////////////////

#include <BALL/SYSTEM/path.h>

///////////////////////////

START_TEST(Path, "$Id: Path_test.C,v 1.12.30.3 2007-06-21 19:44:53 oliver Exp $")

/////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////

using namespace BALL;

CHECK(Path())
	Path* p = new Path();
	TEST_NOT_EQUAL(p, 0)
	delete p;
RESULT

Path p;
string data_suffix1("/data/");
string data_suffix2("/data/");
data_suffix2[0] = FileSystem::PATH_SEPARATOR;
data_suffix2[5] = FileSystem::PATH_SEPARATOR;

CHECK(string getDataPath())
	STATUS(p.getDataPath())
	TEST_EQUAL(String(p.getDataPath()).hasSuffix(data_suffix1)
	 		|| String(p.getDataPath()).hasSuffix(data_suffix2), true)
RESULT

CHECK(void setDataPath(const string& path))
	p.setDataPath("XXXXX/XXXXX");
	TEST_EQUAL(p.getDataPath(),"XXXXX/XXXXX")
RESULT

CHECK(void addDataPath(const string& path))
	p.addDataPath("XXXXX/XXXXX");
	STATUS(p.getDataPath())
	TEST_EQUAL(String(p.getDataPath()).hasSubstring("XXXXX/XXXXX"), true)
	TEST_EQUAL(String(p.getDataPath()).hasSuffix("XXXXX/XXXXX"), true)
RESULT

CHECK(string getDefaultDataPath())
	TEST_EQUAL(String(p.getDefaultDataPath()).hasSuffix(data_suffix1)
			|| String(p.getDefaultDataPath()).hasSuffix(data_suffix2), true)
RESULT

CHECK(string find(const string& name))
	Path p1;
	p1.reset();
	String file = String("fragments") + FileSystem::PATH_SEPARATOR + "Fragments.db";
	TEST_NOT_EQUAL(p1.find(file), "")
	file = "Fragments.db";
	TEST_EQUAL(p1.find(file), "")
	file = "Path_test.C";
	TEST_EQUAL(p1.find(file), "Path_test.C");
	file = String("TEST") + FileSystem::PATH_SEPARATOR + "Path_test.C";
	TEST_EQUAL(p1.find(file), "Path_test.C");	
	file = String("xxx") + FileSystem::PATH_SEPARATOR + "Path_test.C";
	TEST_EQUAL(p1.find(file), "Path_test.C");
	file = "Path_testX.C";
	TEST_EQUAL(p1.find(file), "");
RESULT

CHECK(string findStrict(const string& name))
	Path p1;
	TEST_NOT_EQUAL(p1.find("fragments/Fragments.db"), "")
	TEST_EQUAL(p1.find("Fragments.db"), "")
	TEST_EQUAL(String(p1.getDataPath()+"TEST/Path_test.C"), String(p1.getDataPath()+"TEST/Path_test.C"))
	TEST_EQUAL(p1.findStrict("Path_test.C"), "Path_test.C")
	TEST_EQUAL(p1.findStrict("/TEST/Path_test.C"), "");
	TEST_EQUAL(p1.findStrict("/xxx/Path_test.C"), "");
RESULT

CHECK([extra]Singleton)
	Path p1;
	Path p2;
	p1.reset();
	STATUS(p1.getDataPath())
	TEST_EQUAL(String(p1.getDataPath()).hasSuffix(data_suffix1)
	 		|| String(p1.getDataPath()).hasSuffix(data_suffix2), true)
	p1.setDataPath("XXXXX/XXXXX");
	TEST_EQUAL(p1.getDataPath(), "XXXXX/XXXXX")
	TEST_EQUAL(p2.getDataPath(), "XXXXX/XXXXX")
RESULT

/////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////
END_TEST
