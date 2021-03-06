// -*- Mode: C++; tab-width: 2; -*-
// vi: set ts=2:
//
// $Id: partialChargeBase.C,v 1.2.28.1 2007-03-16 00:06:47 bertsch Exp $
//

#include <BALL/QSAR/partialChargeBase.h>
#include <BALL/QSAR/partialChargeProcessor.h>
#include <BALL/KERNEL/bond.h>
#include <BALL/KERNEL/bondIterator.h>
#include <BALL/KERNEL/atomIterator.h>
#include <BALL/KERNEL/forEach.h>
#include <BALL/KERNEL/fragment.h>
#include <BALL/KERNEL/PTE.h>
#include <BALL/CONCEPT/timeStamp.h>

#include <utility>

using namespace std;

namespace BALL
{
	PartialChargeBase::PartialChargeBase()
		:	Descriptor()
	{
	}

	PartialChargeBase::PartialChargeBase(const PartialChargeBase& pcb)
		:	Descriptor(pcb)
	{
	}

	PartialChargeBase::PartialChargeBase(const String& name)
		:	Descriptor(name)
	{
	}

	PartialChargeBase::PartialChargeBase(const String& name, const String& unit)
		:	Descriptor(name, unit)
	{
	}

	PartialChargeBase::~PartialChargeBase()
	{
	}

	PartialChargeBase& PartialChargeBase::operator = (const PartialChargeBase& pcb)
	{
		this->setName(pcb.getName());
		this->setUnit(pcb.getUnit());
		return *this;
	}

  bool PartialChargeBase::isValid_(AtomContainer& ac)
  {
		static HashMap<Handle, PreciseTime> mod_times;
		PreciseTime last_mod = ac.getModificationTime();
		Handle mol_handle = ac.getHandle();
		if (mod_times.has(mol_handle))
		{
			if (mod_times[mol_handle] == last_mod)
			{
				return true;
			}
			else
			{
				mod_times[mol_handle] = last_mod;
				return false;
			}
		}
		else
		{
			mod_times.insert(std::make_pair(mol_handle, last_mod));
			return false;
		}
	}


	void PartialChargeBase::calculate_(AtomContainer& ac)
	{
		// sets partial charges;
		PartialChargeProcessor pcp;
		ac.apply(pcp);
	
		//HashMap<Atom*, double>::Iterator it = charges.begin();	
		AtomIterator it = ac.beginAtom();
		// assign the calculated values to the descriptors
		double tot_pos(0), tot_neg(0), rel_pos(0), rel_neg(0), max_charge(0), min_charge(0);	
		for (it=ac.beginAtom();it!=ac.endAtom();++it)
		{
			double charge = it->getProperty("PEOEPartialCharge").getDouble();
			if (charge > 0)
			{
				tot_pos += charge;
			} 
			else
			{
				tot_neg += charge;
			}
			if (charge > max_charge)
			{
				max_charge = charge;
			}
			if (charge < min_charge)
			{
				min_charge = charge;
			}
			// set partial charge as atom property
		}

		// this might be paranoid, but you never know
		if (max_charge > 0 && tot_pos > 0)
		{
			rel_pos = max_charge/tot_pos;
		}
		// this might be also paranoid, but you still never know
		if (min_charge < 0 && tot_neg < 0)
		{
			rel_neg = min_charge/tot_neg;
		}
		
		ac.setProperty("TotalPositivePartialCharge", tot_pos);
		ac.setProperty("TotalNegativePartialCharge", tot_neg);
		ac.setProperty("RelPositivePartialCharge", rel_pos);
		ac.setProperty("RelNegativePartialCharge", rel_neg);
	}

} // namespace BALL
