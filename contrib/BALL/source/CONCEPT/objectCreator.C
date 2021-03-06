// -*- Mode: C++; tab-width: 2; -*-
// vi: set ts=2:
//
// $Id: objectCreator.C,v 1.1.4.1 2007-03-25 22:00:06 oliver Exp $

#include <BALL/CONCEPT/objectCreator.h>

using namespace std;

namespace BALL
{
  
	ObjectCreator::ObjectCreator()
			throw()
		:
		init_(false),
		pm_()
	{
	}

	ObjectCreator::~ObjectCreator()
			throw()
	{
		#ifdef BALL_DEBUG
			cout << "Destructing object " << (void *)this 
				<< " of class " << RTTI::getName<ObjectCreator>() << endl;
		#endif 
	}

	void ObjectCreator::clear()
			throw()
	{
	}


	void ObjectCreator::initPersistenceManager(TextPersistenceManager & /* pm */)
			throw()
	{
	}

	Composite *ObjectCreator::convertObject(PersistentObject & /* po */)
			throw()
	{
		return (Composite *)0;
	}

	Composite *ObjectCreator::operator() (IOStreamSocket &iostream_socket)
			throw()
	{
		// initialize the PersistenceManager only one times
		if (init_ == false)
		{
			init_ = true;

			initPersistenceManager(pm_);
		}

		// read persistent object from stream
		pm_.setIstream(iostream_socket);
		PersistentObject*	po = pm_.readObject();
		
		// convert the object
		return convertObject(*po);
	}

} // namespace BALL
