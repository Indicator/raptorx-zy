// -*- Mode: C++; tab-width: 2; -*-
// vi: set ts=2:
//
// $Id: GAMESSDatFile.C,v 1.2 2005-10-05 10:08:20 anhi Exp $
//

#include <BALL/FORMAT/GAMESSDatFile.h>
#include <BALL/KERNEL/system.h>
#include <BALL/KERNEL/PTE.h>

// defined in the lexer (GAMESSDatParserLexer.l)
extern void GAMESSDatParser_initBuffer(const char* buf);
extern void GAMESSDatParser_delBuffer();
extern int  GAMESSDatParserparse();

/** TODO: POPULATION_ANALYSIS
 */
namespace BALL
{
	GAMESSDatFile::GAMESSDatFile()
		throw()
		: GenericMolFile(),
			molecule_(0),
			symmetry_group_("C1")
	{
	}

	/** Todo: What to do with the molecule_ **/
	GAMESSDatFile::GAMESSDatFile(const GAMESSDatFile& file)
		throw(Exception::FileNotFound)
		:	GenericMolFile(),
			molecule_(file.molecule_),
			current_block_(file.current_block_),
			blocks_(file.blocks_),
			symmetry_group_(file.symmetry_group_)
	{
		if (file.getName() != "")
		{
			try
			{	
				open(file.getName());
			}
			catch (Exception::FileNotFound)
			{
			}
		}
	}

	GAMESSDatFile::GAMESSDatFile(const String& name, File::OpenMode open_mode)
		throw(Exception::FileNotFound)
		: GenericMolFile(),
			molecule_(0),
			symmetry_group_("C1")
	{
		open(name, open_mode);
	}

	GAMESSDatFile::~GAMESSDatFile()
		throw()
	{
	}

	const GAMESSDatFile& GAMESSDatFile::operator = (const GAMESSDatFile& rhs)
		throw(Exception::FileNotFound)
	{
		GenericMolFile::operator = (rhs);

		molecule_ = rhs.molecule_;
		current_block_ = rhs.current_block_;
		blocks_ = rhs.blocks_;
		symmetry_group_ = rhs.symmetry_group_;

		return *this;
	}

	bool GAMESSDatFile::write(const Molecule& molecule)
		throw(File::CannotWrite)
	{
		System S;
		S.insert(*(Molecule*)molecule.create(true));
		return write(S);
	}

	/** ToDo: Implement! :-) **/
	bool GAMESSDatFile::write(const System& system)
		throw(File::CannotWrite)
	{
		if (!isOpen() || getOpenMode() != std::ios::out)
		{
			throw(File::CannotWrite(__FILE__, __LINE__, name_));
		}

		// Currently, we can only write out cartesian coordinates, so
		// we overwrite any possible different COORD definition.
		blocks_["$contrl"].data["coord"] = "cart";
		
		StringHashMap<block>::ConstIterator si;
		for (si = blocks_.begin(); si != blocks_.end(); si++)
		{
			si->second >> getFileStream();
		}
	
		/** Now that we have the headers, go on with the data **/
		getFileStream() << " $data" << std::endl;
		if (system.getName() != "")
			getFileStream() << system.getName() << std::endl;
		else if (system.beginMolecule()->getName() != "")
			getFileStream() << system.beginMolecule()->getName() << std::endl;
		else
			getFileStream() << "Unnamed molecule" << std::endl;

		// We do not compute symmetry groups here. So this will probably always be the default "C1"
		getFileStream() << symmetry_group_ << std::endl;

		// now write out the coordinate data
		AtomConstIterator atIt;
		for (atIt = system.beginAtom(); +atIt; ++atIt)
		{
			char line[255]; 
			sprintf(line, " %s %.1f % 8f % 8f % 8f",
										atIt->getElement().getSymbol().c_str(),
										(float)atIt->getElement().getAtomicNumber(),
										atIt->getPosition().x,
										atIt->getPosition().y,
										atIt->getPosition().z);

			getFileStream() << line << std::endl;
		}
		getFileStream() << "$end\n";
		
		return true;
	}

	bool GAMESSDatFile::read(System& system)
		throw(Exception::ParseError)
	{
		return GenericMolFile::read(system);
	}

	Molecule* GAMESSDatFile::read()
		throw(Exception::ParseError)
	{
		if (!isValid())
		{
//			Log.error() << "Trying to read from invalid GAMESSDatFile '" << getName() << "'" << std::endl;
			return false;
		}

		/** Let the parser do the hard work **/
		try {
			state.current_parser = this;
			GAMESSDatParserparse();
		}
		catch (Exception::ParseError& e)
		{
			delete molecule_;
			molecule_ = 0;
		}

		return molecule_;
	}

	void GAMESSDatFile::initRead_()
	{
	}

	void GAMESSDatFile::newMolecule()
		throw()
	{
		molecule_ = new Molecule;
	}

	void GAMESSDatFile::setMoleculeName(char* name)
		throw()
	{
		if (molecule_)
			molecule_->setName(name);
	}

	void GAMESSDatFile::insertAtom(char* element, float charge, float x, float y, float z)
		throw()
	{
		Atom *a = new Atom;
		molecule_->insert(*a);
	
		a->setName(element);
		
		if (PTE[element] != Element::UNKNOWN)
		{
			a->setElement(PTE[element]);
			a->setRadius(PTE[element].getVanDerWaalsRadius());
		}

		/** What to do with the charge given by GAMESSDat??? **/
		// a->setCharge(charge);
		a->setPosition(Vector3(x, y, z));

	}
		
	void GAMESSDatFile::insertBond(Index a1, Index a2)
		throw()
	{
		Atom* at1 = molecule_->getAtom(a1);
		Atom* at2 = molecule_->getAtom(a2);

		at1->createBond(*at2);
	}
	
	void GAMESSDatFile::inBlock(const char* blockname)
		throw()
	{
		current_block_ = String(blockname);
		// This simplifies comparing and searching for keys and sections significantly
		current_block_.toLower();
		blocks_[current_block_].blockname = current_block_;
	}

	void GAMESSDatFile::insertBlockedData(const char* key, const char* value)
		throw()
	{
		// This simplifies comparing and searching for keys and sections significantly
		String new_key(key);
		new_key.toLower();
		blocks_[current_block_].data[new_key] = value;
	}
	
	void GAMESSDatFile::insertBlockedData(const String& key, const String& value)
		throw()
	{
		// This simplifies comparing and searching for keys and sections significantly
		String new_key(key);
		new_key.toLower();
		blocks_[current_block_].data[new_key] = value;
	}

	String& GAMESSDatFile::getBlockedData(const String& blockname, const String& key)
		throw()
	{
		String new_blockname(blockname);
		new_blockname.toLower();
		String new_key(key);
		new_key.toLower();
		return blocks_[new_blockname].data[new_key];
	}

	const String& GAMESSDatFile::getBlockedData(const String& blockname, const String& key) const
		throw()
	{
		String new_blockname(blockname);
		new_blockname.toLower();
		String new_key(key);
		new_key.toLower();
		return blocks_[new_blockname].data[new_key];
	}	

	void GAMESSDatFile::block::operator >> (ostream& os) const
		throw()
	{
		String result = " " + blockname + " ";

		StringHashMap<String>::ConstIterator si;
		for (si = data.begin(); si != data.end(); si++)
		{
			String tmp = si->first + "=" + si->second + " ";

			// keep the lines small so that GAMESS does not complain
			if (result.size() + tmp.size() > 66) // with the $end that makes 70 :-)
			{
				result += "$end\n "+blockname+" ";
			}
			result += tmp;
		}
		result += "$end\n";

		os << result;
	}

	void GAMESSDatFile::clearParameters()
		throw()
	{
		blocks_.clear();
		current_block_ = "";
		symmetry_group_ = "C1";
	}
	
	struct GAMESSDatFile::State GAMESSDatFile::state;
}
