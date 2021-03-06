// -*- Mode: C++; tab-width: 2; -*-
// vi: set ts=2:
//
// $Id: SurfaceModel_test.C,v 1.1.2.4 2007-05-14 08:18:07 amoll Exp $
//
// Author:
//   Andreas Moll
//

#include <BALL/CONCEPT/classTest.h>
#include <BALL/FORMAT/PDBFile.h>
#include <BALL/KERNEL/forEach.h>
#include <BALL/KERNEL/bond.h>
#include <BALL/VIEW/PRIMITIVES/mesh.h>

///////////////////////////
#include <BALL/VIEW/MODELS/surfaceModel.h>
///////////////////////////

using namespace BALL;
using namespace BALL::VIEW;

START_TEST(AddSurfaceModel, "$Id: SurfaceModel_test.C,v 1.1.2.4 2007-05-14 08:18:07 amoll Exp $")

CHECK(CSTR)
	AddSurfaceModel();
RESULT

CHECK(AddSurfaceModel::BALL_CREATE(AddSurfaceModel))
  //BAUSTELLE
RESULT


CHECK(AddSurfaceModel::setProbeRadius(float radius))
	AddSurfaceModel bs;
	bs.setProbeRadius(0.12);
RESULT


CHECK(AddSurfaceModel::getProbeRadius() const  throw())
	AddSurfaceModel bs;
	bs.setProbeRadius(0.12);
	TEST_REAL_EQUAL(bs.getProbeRadius(), 0.12)
RESULT


PDBFile pdb("data/1BNA.pdb");
System system;
pdb >> system;

CHECK(AddSurfaceModel::Processor::Result operator() (Composite& composite))
	AddSurfaceModel bs;
	bool result = bs.operator() (system);
	TEST_EQUAL(result, true)
RESULT

CHECK(AddSurfaceModel::createGeometricObjects() throw())
	AddSurfaceModel bs;
	bs.setProbeRadius(1);
	system.apply(bs);
	bs.createGeometricObjects();
	TEST_EQUAL(bs.getGeometricObjects().size(), 1)
	Mesh* m = dynamic_cast<Mesh*>(*bs.getGeometricObjects().begin());
	TEST_NOT_EQUAL(m, 0)
	PRECISION(0.0001)
	TEST_EQUAL(m->vertex.size() > 30000, true)
	TEST_EQUAL(m->triangle.size() > 60000, true)
	TEST_EQUAL(m->normal.size() > 30000, true)
	TEST_EQUAL(m->normal.size(), m->vertex.size())
RESULT


/////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////
END_TEST
