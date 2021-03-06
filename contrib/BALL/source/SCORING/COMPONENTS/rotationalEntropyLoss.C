// $Id: rotationalEntropyLoss.C,v 1.2 2006-05-21 18:15:29 anker Exp $
// Molecular Mechanics: SLICK rotational entropy loss

#include <BALL/SCORING/COMPONENTS/rotationalEntropyLoss.h>
#include <BALL/SCORING/TYPES/fresnoTypes.h>
#include <BALL/KERNEL/standardPredicates.h>
#include <BALL/KERNEL/atomIterator.h>
#include <BALL/KERNEL/bondIterator.h>
#include <BALL/KERNEL/forEach.h>
#include <BALL/KERNEL/PTE.h>
#include <BALL/STRUCTURE/geometricProperties.h>
#include <BALL/DATATYPE/stringHashMap.h>

#include <BALL/SYSTEM/timer.h>

using namespace std;

namespace BALL
{


	const char* RotationalEntropyLoss::Option::ROT_BIND_OFFSET 
		= "rot_bind_offset";
	const char* RotationalEntropyLoss::Option::ROT_GRID_SPACING 
		= "rot_grid_spacing";
	const char* RotationalEntropyLoss::Option::ROT_ALGORITHM 
		= "rot_algorithm";
	const char* RotationalEntropyLoss::Option::ROT_METHOD 
		= "rot_method";
	const char* RotationalEntropyLoss::Option::VERBOSITY
		= "verbosity";

	const float RotationalEntropyLoss::Default::ROT_BIND_OFFSET 
		= 0.5;
	const float RotationalEntropyLoss::Default::ROT_GRID_SPACING 
		= 5.0;
	const Size RotationalEntropyLoss::Default::ROT_ALGORITHM 
		= RotationalEntropyLoss::ALGORITHM__GUESS;
	const Size RotationalEntropyLoss::Default::ROT_METHOD
		= RotationalEntropyLoss::CALCULATION__ORIGINAL;
	const Size RotationalEntropyLoss::Default::VERBOSITY
		= 0;


	RotationalEntropyLoss::RotationalEntropyLoss()
		throw()
		:	ScoringComponent(),
			rotatable_bonds_(),
			glycosidic_bonds_(),
			N_rot_(0),
			is_frozen_(),
			algorithm_type_(0),
			heavy_atom_fractions_(),
			grid_(0),
			grid_spacing_(0.0),
			receptor_(0),
			bind_distance_offset_(0.0f),
			calculation_method_(0),
			fresno_types_(0)
	{
		// set component name
		setName("RotationalEntropyLoss");
	}


	RotationalEntropyLoss::RotationalEntropyLoss(ScoringFunction& sf)
		throw()
		:	ScoringComponent(sf),
			rotatable_bonds_(),
			glycosidic_bonds_(),
			N_rot_(0),
			is_frozen_(),
			algorithm_type_(0),
			heavy_atom_fractions_(),
			grid_(0),
			grid_spacing_(0.0),
			receptor_(0),
			bind_distance_offset_(0.0f),
			calculation_method_(0),
			fresno_types_(0)
	{
		// set component name
		setName("SLICK RotationalEntropyLoss");
	}


	RotationalEntropyLoss::RotationalEntropyLoss(const RotationalEntropyLoss& fr)
		throw()
		:	ScoringComponent(fr),
			rotatable_bonds_(fr.rotatable_bonds_),
			glycosidic_bonds_(fr.glycosidic_bonds_),
			N_rot_(fr.N_rot_),
			is_frozen_(fr.is_frozen_),
			algorithm_type_(fr.algorithm_type_),
			heavy_atom_fractions_(fr.heavy_atom_fractions_),
			grid_(fr.grid_),
			grid_spacing_(fr.grid_spacing_),
			receptor_(fr.receptor_),
			bind_distance_offset_(fr.bind_distance_offset_),
			calculation_method_(fr.calculation_method_),
			fresno_types_(fr.fresno_types_)
	{
	}


	RotationalEntropyLoss::~RotationalEntropyLoss()
		throw()
	{
		clear();
	}


	void RotationalEntropyLoss::clear()
		throw()
	{
		rotatable_bonds_.clear();
		glycosidic_bonds_.clear();
		N_rot_ = 0;
		is_frozen_.clear();
		// ???? Set to default.
		algorithm_type_ = 0;
		heavy_atom_fractions_.clear();
		if (grid_ != 0)
		{
			grid_->clear();
			delete grid_;
		}
		grid_ = 0;
		grid_spacing_ = 0.0f;
		// We don't delete the receptor molecule here. It belongs to the
		// system.
		receptor_ = 0;
		// ????? Set to default.
		bind_distance_offset_ = 0.0f;
		// ????? Set to default.
		calculation_method_ = 0;
		// We cannot delete the fresno types from the force field.
		fresno_types_.clear();
		// ?????
		// ScoringComponent does not comply with the OCI
		// ScoringComponent::clear();
	}


	bool RotationalEntropyLoss::setup()
		throw()
	{

		Timer timer;
		timer.start();

		ScoringFunction* force_field = getScoringFunction();
		if (force_field == 0)
		{
			Log.error() << "RotationalEntropyLoss::setup(): "
				<< "component not bound to force field." << endl;
			return false;
		}

		FresnoTypes fresno_types_class(*this);
		fresno_types_ = fresno_types_class.getTypeMap();

		// clear the vector of lipophilic interactions
		rotatable_bonds_.clear();

		// clear the hash set containing glycosidic bonds
		glycosidic_bonds_.clear();

		// clear the grid that contains the receptor
		if (grid_ != 0)
		{
			grid_->clear();
		}

		receptor_ = getScoringFunction()->getReceptor();
		ligand_ = getScoringFunction()->getLigand();
		System system;
		system.insert(*receptor_);
		system.insert(*ligand_);
		
		BoundingBoxProcessor bb_proc;
		system.apply(bb_proc);

		Options& options = force_field->options;

		grid_spacing_ 
			= options.setDefaultReal(RotationalEntropyLoss::Option::ROT_GRID_SPACING,
					RotationalEntropyLoss::Default::ROT_GRID_SPACING);

		bind_distance_offset_
			= options.setDefaultReal(RotationalEntropyLoss::Option::ROT_BIND_OFFSET,
					RotationalEntropyLoss::Default::ROT_BIND_OFFSET);

		algorithm_type_
			= options.setDefaultInteger(RotationalEntropyLoss::Option::ROT_ALGORITHM,
					RotationalEntropyLoss::Default::ROT_ALGORITHM);

		calculation_method_ 
			= options.setDefaultInteger(RotationalEntropyLoss::Option::ROT_METHOD,
					RotationalEntropyLoss::Default::ROT_METHOD);

		Size verbosity
			= options.setDefaultInteger(RotationalEntropyLoss::Option::VERBOSITY,
					RotationalEntropyLoss::Default::VERBOSITY);

		// What do we calculate here?
		if (verbosity >= 1)
		{
			Log.info() << "Switching rotational term to ";
			switch (calculation_method_)
			{
				case CALCULATION__ORIGINAL:
					Log.info() << "original term" << endl;
					break;
				case CALCULATION__BOEHM:
					Log.info() << "Boehm term" << endl;
					break;
				case CALCULATION__GLYCOSIDIC_BONDS:
					Log.info() << "number of glycosidic bonds term" << endl;
					break;
				case CALCULATION__FROZEN_GLYCOSIDIC_BONDS:
					Log.info() << "number of frozen glycosidic bonds term" << endl;
					break;
				case CALCULATION__GLYCOSIDIC_CONTRIBUTION:
					Log.info() << "glycosidic contribution to the original term" << endl;
					break;
				default: 
					Log.info() << "UNKNOWN!" << endl;
					break;
			}
		}

		// create a grid for the receptor and insert all its atoms
		// this grid is needed to find out whether an atom of the ligand is
		// bound to the protein
		grid_ = new HashGrid3<const Atom*>
			(bb_proc.getLower() - Vector3(1.0),
			 bb_proc.getUpper() - bb_proc.getLower() + Vector3(1.0),
			 grid_spacing_);

		AtomConstIterator atom_it = system.beginAtom();
		for (; +atom_it; ++atom_it)
		{
			grid_->insert(atom_it->getPosition(), &*atom_it);
		}


		// define the bondlengths for the bond guessing algorithm

		StringHashMap< pair<float, float> > bondlengths;

		if (algorithm_type_ == ALGORITHM__GUESS)
		{
			// ?????
			// This is not nice and should be done using an INIFile
			pair<float, float> tmp;

			// we need shorter bondlenghts for C-C and C-N
			// tmp = pair<float, float>(1.54, 1.55);
			tmp = pair<float, float>(1.52, 1.55);
			bondlengths["C"] = tmp;
			// tmp = pair<float, float>(1.47, 1.48);
			tmp = pair<float, float>(1.44, 1.48);
			bondlengths["N"] = tmp;
			tmp = pair<float, float>(1.43, 1.47);
			bondlengths["O"] = tmp;
			// S is not taken into account by the original paper.
			// tmp = pair<float, float>(1.80, 1.84);
			// bondlengths["S"] = tmp;
		}

		Size guessed_bonds = 0;

		String sym1, sym2;
		StringHashMap< pair<float, float> >::ConstIterator hash_it;

		// define and initialize all variables we need for extracting the
		// cycles (or rings)
		HashSet<const Atom*> visited;
		HashSet<const Bond*> tree;
		stack<const Bond*> possible_cycle_bonds;
		HashSet<const Bond*> cycle_bonds;
		int cycle_count = 0;

		const Atom* atom1 = &*ligand_->beginAtom();
		const Atom* atom2;

		// initialize the hash map

		cycleDFS_(atom1, visited,
				tree, possible_cycle_bonds, cycle_bonds, cycle_count);

		if (verbosity >= 90) Log.info() << "Tree size: " << tree.size() << endl;

		// initialize the data structures for another dfs and count the heavy
		// atoms in the system 
		int heavy_atom_count = 0;
		int nonlip_heavy_atom_count = 0;
		HashSet<const Bond*>::ConstIterator tree_it = tree.begin();

		Sp2HybridizedPredicate isSp2;
		Sp3HybridizedPredicate isSp3;
		ConnectedToPredicate hasH3Group;
		hasH3Group.setArgument("(H)(H)(H)");
		ConnectedToPredicate hasH2Group;
		hasH2Group.setArgument("(H)(H)");
		ConnectedToPredicate hasF3Group;
		hasF3Group.setArgument("(F)(F)(F)");

		ElementPredicate isCarbon;
		isCarbon.setArgument("C");
		ElementPredicate isNitrogen;
		isNitrogen.setArgument("N");
		ConnectedToPredicate hasAromaticBondedOxygen;
		hasAromaticBondedOxygen.setArgument("(~O)");

		bool A_sp2;
		bool A_sp3;
		bool B_sp2;
		bool B_sp3;
		bool A_CO;
		bool B_CO;

		bool found_rotatable_bond = false;

		// a rotatable bond is *any* bond between sp2-sp3 or sp3-sp3 hybridized
		// atoms that are not in rings and not bonds to terminal NH3 or CH3

		// for every non-cylce bond in the tree find out whether it is
		// rotational and count the number of heavy atoms on either side of the
		// bond
		for (; +tree_it; ++tree_it)
		{
			atom1 = (*tree_it)->getFirstAtom();
			atom2 = (*tree_it)->getSecondAtom();

			if (!cycle_bonds.has(*tree_it))
			{

				if (verbosity >= 100)
				{
					Log.info() << atom1->getFullName() << "---" << atom2->getFullName()
						<< endl;
					Log.info() << "hasH3Group(*atom1) " << hasH3Group(*atom1) << endl;
					Log.info() << "hasH2Group(*atom1) " << hasH2Group(*atom1) << endl;
					Log.info() << "hasF3Group(*atom1) " << hasF3Group(*atom1) << endl;
					Log.info() << "isCarbon(*atom1) " << isCarbon(*atom1) << endl;
					Log.info() << "isNitrogen(*atom1) " << isNitrogen(*atom1) << endl;
					Log.info() << "hasH3Group(*atom2) " << hasH3Group(*atom2) << endl;
					Log.info() << "hasH2Group(*atom2) " << hasH2Group(*atom2) << endl;
					Log.info() << "hasF3Group(*atom2) " << hasF3Group(*atom2) << endl;
					Log.info() << "isCarbon(*atom2) " << isCarbon(*atom2) << endl;
					Log.info() << "isNitrogen(*atom2) " << isNitrogen(*atom2) << endl;
				}

				if (!((hasH3Group(*atom1) & (isCarbon(*atom1) | isNitrogen(*atom1)))
							| (hasH2Group(*atom1) & isNitrogen(*atom1))
							| (hasF3Group(*atom1) & isCarbon(*atom1))
							| (hasH3Group(*atom2) & (isCarbon(*atom2) | isNitrogen(*atom2)))
							| (hasH2Group(*atom2) & isNitrogen(*atom2))
							| (hasF3Group(*atom2) & isCarbon(*atom2))))
				{

					if (algorithm_type_ == ALGORITHM__GUESS)
					{
						float dist = (atom1->getPosition() - atom2->getPosition()).getLength();
						sym1 = atom1->getElement().getSymbol();
						sym2 = atom2->getElement().getSymbol();

						if (sym1 == "C")
						{
							if (bondlengths.has(sym2))
							{
								if (verbosity >= 100)
								{
									if (sym2 == "N")
									{
										Log.info() << atom1->getFullName() << "---" 
											<< atom2->getFullName() << endl;
										Log.info() << "length: " << dist << endl;
									}
								}
								float lower = bondlengths[sym2].first;
								float upper = bondlengths[sym2].second;
								if ((dist > (lower * 0.975)) && (dist <= (upper * 1.025)))
								{
									if (verbosity >= 90)
									{
										Log.info() << "found rotatable bond:" << endl;
										Log.info() << atom1->getFullName() << "---" 
											<< atom2->getFullName() << endl;
										Log.info() << "length: " << dist << endl;
									}
									found_rotatable_bond = true;
									guessed_bonds++;
								}
							}
						}
						else
						{
							if (sym2 == "C")
							{
								if (bondlengths.has(sym1))
								{
									if (verbosity >= 100)
									{
										if (sym2 == "N")
										{
											Log.info() << atom1->getFullName() << "---" 
												<< atom2->getFullName() << endl;
											Log.info() << "length: " << dist << endl;
										}
									}
									float lower = bondlengths[sym1].first;
									float upper = bondlengths[sym1].second;
									if ((dist > (lower * 0.975)) && (dist <= (upper * 1.025)))
									{
										if (verbosity >= 90)
										{
											Log.info() << "found rotatable bond:" << endl;
											Log.info() << atom1->getFullName() << "---" 
												<< atom2->getFullName() << endl;
											Log.info() << "length: " << dist << endl;
										}
										found_rotatable_bond = true;
										guessed_bonds++;
									}
								}
							}
						}
					}
					else
					{
						if (algorithm_type_ == ALGORITHM__DATABASE)
						{
							// ?????
							// make this more efficient
							A_sp2 = isSp2(*atom1);
							A_sp3 = isSp3(*atom1);
							B_sp2 = isSp2(*atom2);
							B_sp3 = isSp3(*atom2);
							A_CO = (isCarbon(*atom1) & hasAromaticBondedOxygen(*atom1));
							B_CO = (isCarbon(*atom2) & hasAromaticBondedOxygen(*atom2));

							if (verbosity >= 100)
							{
								Log.info() << "A SP2: " << A_sp2 << endl;
								Log.info() << "A SP3: " << A_sp3 << endl;
								Log.info() << "B SP2: " << B_sp2 << endl;
								Log.info() << "B SP3: " << B_sp3 << endl;
								Log.info() << "A CO: " << A_CO << endl;
								Log.info() << "B CO: " << B_CO << endl;
							}

							if (((A_sp2 & B_sp3) | (B_sp2 & A_sp3) | (A_sp3 & B_sp3))
									| ((A_CO & B_sp3 & isCarbon(*atom2)) 
										| (A_sp3 & B_CO & isCarbon(*atom1))) == true)
							{
								if (verbosity >= 100)
								{
									Log.info() << "found possible rotatable bond: " 
										<< atom1->getFullName() << "---" << atom2->getFullName()
										<< endl;
								}
								found_rotatable_bond = true;
							}
						}
						else
						{
							Log.error() << "Unknown algorithm type" << endl;
							return false;
						}
					}
				}
			}

			// Save rotatable bonds
			if (found_rotatable_bond == true)
			{
				found_rotatable_bond = false;
				rotatable_bonds_.push_back(*tree_it);

				// If this bond is a glycosidic bond, save it in the respective
				// hash set.

				Expression is_glycosidic("!inRing() AND ( ( element(O) AND ( connectedTo((R)(R)) OR connectedTo((R)(CR)) ) ) OR ( element(C) AND ( connectedTo((R)(R)) OR connectedTo((R)(OR)) ) ) )");

				const Bond* tmp = *tree_it;

				if (is_glycosidic(*(tmp->getFirstAtom())) ||
					is_glycosidic(*(tmp->getSecondAtom())))
				{
					glycosidic_bonds_.insert(*tree_it);
				}

				visited.clear();
				heavy_atom_count = 0;
				nonlip_heavy_atom_count = 0;
				heavyAtomsDFS_(atom1, &**tree_it, visited,
						heavy_atom_count, nonlip_heavy_atom_count);
				double first_fraction = (double) nonlip_heavy_atom_count / (double) heavy_atom_count;

				if (verbosity >= 90)
				{
					Log.info() << heavy_atom_count << " "
						<< first_fraction << " "
						<< atom1->getFullName() << ":" << atom2->getFullName() << " " ;
				}

				visited.clear();
				heavy_atom_count = 0;
				nonlip_heavy_atom_count = 0;
				heavyAtomsDFS_(atom2, &**tree_it, visited,
						heavy_atom_count, nonlip_heavy_atom_count);
				double second_fraction = (double) nonlip_heavy_atom_count / (double) heavy_atom_count;

				heavy_atom_fractions_.push_back
					(pair<double, double>(first_fraction, second_fraction));

				if (verbosity >= 90)
				{
					Log.info() << heavy_atom_count 
						<< " " << second_fraction << endl;
				}
			}
		}

		N_rot_ = rotatable_bonds_.size();
		is_frozen_.resize(rotatable_bonds_.size());

		switch(calculation_method_)
		{
			case CALCULATION__ORIGINAL:
				// The original term needs recalculation in updateEnergy().
				break;

			case CALCULATION__BOEHM:
				// Boehm's term is constant.
				score_ = N_rot_;
				break;

			case CALCULATION__GLYCOSIDIC_BONDS:
				// The number of glycosidic bonds is constant.
				score_ = glycosidic_bonds_.size();
				break;

			case CALCULATION__FROZEN_GLYCOSIDIC_BONDS:
				// We have to recalculate the number of *frozen* glycosidic bonds
				// in every updateEnergy() call.
				break;

			default:
			  break;
		}

		if (verbosity >= 9)
		{
			Log.info() << "RotationalEntropyLoss setup statistics:" << endl;
			Log.info() << "Found " << rotatable_bonds_.size() 
				<< " rotatable bonds" << endl << endl;
			Log.info() << "Found " << glycosidic_bonds_.size() 
				<< " glycosidic bonds" << endl << endl;
		}

		timer.stop();
		Log.info() << "RotationalEntropyLoss::setup(): " 
			<< timer.getCPUTime() << " s" << std::endl;

		return true;

	}


	double RotationalEntropyLoss::calculateScore()
		throw()
	{

		Timer timer;
		timer.start();

		// how loud  will we cry?
		Size verbosity
			= getScoringFunction()->options.getInteger(Option::VERBOSITY);

		switch (calculation_method_)
		{

			case CALCULATION__ORIGINAL:
			case CALCULATION__GLYCOSIDIC_CONTRIBUTION:

				// if there aren't any rotatable bonds we cannot freeze them.
				if (N_rot_ == 0)
				{
					score_ = 0.0;
					return score_;
				}
				else
				{

					score_ = 0.0;
					float val;

					updateFrozenBonds_();

					for (Size i = 0; i < rotatable_bonds_.size(); ++i)
					{
						if (is_frozen_[i] == true)
						{
							val = heavy_atom_fractions_[i].first + heavy_atom_fractions_[i].second;
							val /= 2.0;
							if (verbosity >= 90)
							{
								Log.info() << "ROT: adding score of " << val << endl;
							}
							if (calculation_method_ == CALCULATION__ORIGINAL)
							{
								score_ += val;
							}
							else
							{
								if (glycosidic_bonds_.has(rotatable_bonds_[i]))
								{
									score_ += val;
								}
							}
						}
					}

					score_ *= (1 - 1/N_rot_);
					score_ += 1.0;

				}

				break;

			case CALCULATION__BOEHM:
				// We already stored the number of bonds in score_, so we don't
				// need to do anything here.
				// PARANOIA
				score_ = N_rot_;
				// /PARANOIA
				break;

			case CALCULATION__GLYCOSIDIC_BONDS:
				// We already stored the number of bonds in score_, so we don't
				// need to do anything here.
				// PARANOIA
				score_ = glycosidic_bonds_.size();
				// /PARANOIA
				break;

			case CALCULATION__FROZEN_GLYCOSIDIC_BONDS:
				// Update frozen bonds...
				updateFrozenBonds_();
				score_ = 0;
				// ...and count them.
				for (Size i = 0; i < rotatable_bonds_.size(); ++i)
				{
					if ((is_frozen_[i] == true) 
						&& (glycosidic_bonds_.has(rotatable_bonds_[i])))
					{
						score_ += 1;
					}
				}
				break;

		}

		if (verbosity > 0)
		{
			Log.info() << "ROT: energy is " << score_ << endl;
		}

		timer.stop();
		Log.info() << "RotationalEntropyLoss::updateEnergy(): "
			<< timer.getCPUTime() << " s" << std::endl;

		return(score_);

	}


	void RotationalEntropyLoss::cycleDFS_(const Atom* atom,
			HashSet<const Atom*>& visited,
			HashSet<const Bond*>& tree,
			stack<const Bond*>& possible_cycle_bonds,
			HashSet<const Bond*>& cycle_bonds,
			int& cycle_count)
		throw()
	{
		// mark this atom as visited
		visited.insert(atom);

		// iterate over all bonds of this atom (i. e. this node)
		AtomBondConstIterator it = atom->beginBond();
		for (; +it; ++it)
		{
			const Bond* bond = &*it;
			const Atom* partner = it->getPartner(*atom);

			// if our partner atom wasn't visited yet, start dfs() with it
			if (visited.has(partner) == false)
			{

				// save this bond as a candidate for a cycle bond
				possible_cycle_bonds.push(bond);

				// save this bond in the tree we are building
				tree.insert(bond);

				// apply dfs() to the partner atom
				cycleDFS_(partner, visited, tree,
						possible_cycle_bonds, cycle_bonds, cycle_count);

				// if the current bond wasn't pop()'d by the cycle recognizing
				// heuristic, remove it from the stack. We won't need it anymore
				if (possible_cycle_bonds.top() == bond) 
				{
					possible_cycle_bonds.pop();
				}
			}
			// if we already visited this atom and our bond is not in the tree, we
			// found a cycle. Let's look which bonds actually build the cycle.
			else
			{
				if (!tree.has(bond) && !cycle_bonds.has(bond))
				{
					cycle_count++;
					cycle_bonds.insert(bond);

					const Bond* tmp;
					bool keep_on_searching = true;

					do
					{
						// PARANOIA
						if (possible_cycle_bonds.empty())
						{
							cerr << "Something's wrong here, no possible bonds left" 
								<< endl;
						}
						else
						{
						// /PARANOIA

							tmp = possible_cycle_bonds.top();

							// PARANOIA
							if (tmp == 0)
							{
								cerr << "ERROR: got a NULL ptr." << endl;
								// ?????
								// exception
							}
							// /PARANOIA

							// if we found a bond that itself is part of a cycle, we found
							// two cycles that are sharing a bond. We needn't look further,
							if (cycle_bonds.has(tmp))
							{
								/*
								// PARANOIA
								HashSet<const Bond*>::ConstIterator set_it = cycle_bonds.begin();
								for (; +set_it; ++set_it)
								{
									if ((*set_it)->getFirstAtom() == partner)
									{
										if (((*set_it)->getSecondAtom() == tmp->getFirstAtom())
											|| ((*set_it)->getSecondAtom() == tmp->getSecondAtom()))
										{
											Log.info() << "found missing CYCLE bond: "
												<< (*set_it)->getFirstAtom()->getFullName() << ":" 
												<< (*set_it)->getSecondAtom()->getFullName() << endl;
										}
									}
									if ((*set_it)->getSecondAtom() == partner)
									{
										if (((*set_it)->getFirstAtom() == tmp->getFirstAtom())
											|| ((*set_it)->getFirstAtom() == tmp->getSecondAtom()))
										{
											Log.info() << "found missing CYCLE bond: "
												<< (*set_it)->getFirstAtom()->getFullName() << ":" 
												<< (*set_it)->getSecondAtom()->getFullName() << endl;
										}
									}
								}
								// /PARANOIA
								*/
								keep_on_searching = false;
							}
							else
							{
								possible_cycle_bonds.pop();
								cycle_bonds.insert(tmp);
							}
						}
					}
					while ((tmp->getFirstAtom() != partner) 
							&& (tmp->getSecondAtom() != partner)
							&& (!possible_cycle_bonds.empty())
							&& (keep_on_searching == true));

					possible_cycle_bonds.push(bond);
				}
			}
		}
	}


	void RotationalEntropyLoss::heavyAtomsDFS_(const Atom* atom, const Bond* bond,
			HashSet<const Atom*>& visited,
			int& heavy_atom_count, int& nonlip_heavy_atom_count)
		throw()
	{

		// mark this atom as visited
		visited.insert(atom);

		// if this is a heavy atom, count it
		if (atom->getElement().getSymbol() != "H") 
		{
			heavy_atom_count++;

			if ((fresno_types_)[atom] != FresnoTypes::LIPOPHILIC)
			{
				nonlip_heavy_atom_count++;
			}
		}

		// now iterate over all bonds of this atom (i. e. this node)
		AtomBondConstIterator it = atom->beginBond();
		for (; +it; ++it)
		{
			if (&*it != bond)
			{
				const Atom* partner = it->getPartner(*atom);

				// if our partner atom wasn't visited yet, start dfs() with it
				if (visited.has(partner) == 0)
				{
					// apply dfs() to the partner atom
					heavyAtomsDFS_(partner, bond, visited,
							heavy_atom_count, nonlip_heavy_atom_count); 
				}
			}
		}
	}	


	void RotationalEntropyLoss::updateFrozenBonds_()
		throw()
	{
		HashSet<const Atom*> visited;

		for (Size i = 0; i < rotatable_bonds_.size(); ++i)
		{
			const Bond* bond = rotatable_bonds_[i];

			bool result = false;

			visited.clear();
			visited.insert(bond->getSecondAtom());
			if (frozenBondsDFS_(bond->getFirstAtom(), visited))
			{
				visited.clear();
				visited.insert(bond->getFirstAtom());
				if (frozenBondsDFS_(bond->getSecondAtom(), visited))
				{
					result = true;
				}
			}

			if (result == true)
			{
				is_frozen_[i] = true;
			}
			else
			{
				is_frozen_[i] = false;
			}

		}
	}


	bool RotationalEntropyLoss::frozenBondsDFS_(const Atom* atom, 
			HashSet<const Atom*>& visited)
		throw()
	{

		Size verbosity 
			= getScoringFunction()->options.getInteger(Option::VERBOSITY);

		// mark this atom as visited
		visited.insert(atom);

		// Check, whether this atom is bound to an atom of the receptor
		// molecule.

		Vector3 position = atom->getPosition();
		float dist, bind_distance;

		HashGridBox3<const Atom*>* box = grid_->getBox(position);
		HashGridBox3<const Atom*>::ConstBoxIterator box_it;
		HashGridBox3<const Atom*>::ConstDataIterator data_it;

		if (box == 0)
		{
			Log.error() << "RotationalEntropyLoss::updateFrozenBonds_(): "
				<< "got an empty box for position " << position << endl;
		}
		else
		{
			for (box_it = box->beginBox(); +box_it; ++box_it)
			{
				for (data_it = box_it->beginData(); +data_it; ++data_it)
				{
					if ((*data_it)->getMolecule() == receptor_)
					{
						// Eldridge et al. says any two *heavy* atoms
						if ((*data_it)->getElement().getSymbol() != "H")
						{
							dist = (position - (*data_it)->getPosition()).getLength();
							bind_distance = atom->getRadius() + (*data_it)->getRadius() 
								+ bind_distance_offset_;
							if (dist < bind_distance)
							{
								if (verbosity >= 90)
								{
									Log.info() << "Found bound atom " << atom->getFullName() 
										<< ". dist: " << dist << " bind_distance: "
										<< bind_distance << endl;
								}
								return true;
							}
						}
					}
				}
			}
		}

		// now iterate over all bonds of this atom (i. e. this node)
		AtomBondConstIterator it = atom->beginBond();
		for (; +it; ++it)
		{
			const Atom* partner = it->getPartner(*atom);

			// if our partner atom wasn't visited yet, start dfs() with it
			if (visited.has(partner) == false)
			{

				// apply dfs() to the partner atom
				bool result = frozenBondsDFS_(partner, visited);

				if (result == true)
				{
					return true;
				}
			}
		}
		return false;
	}	

} // namespace BALL
