// -*- Mode: C++; tab-width: 2; -*-
// vi: set ts=2:
//
// $Id: system.sip,v 1.9.28.2 2007-05-16 15:56:31 aleru Exp $
//

class System
  : AtomContainer,
  	PropertyManager
{
%TypeHeaderCode
	#include <BALL/KERNEL/system.h>
	using namespace BALL;
%End
  public:
  System();
  System(const System& /system/, bool /deep/ = true);
  System(const String& /name/);
  ~System() throw();
  virtual void clear() throw();
  virtual void destroy() throw();
//  void persistentWrite(PersistenceManager& pm, const char* = 0) const;
//  void persistentRead(PersistenceManager& pm);
  void set(const System&, bool = true);
//  System& operator = (const System&);
  void get(System&, bool = true) const;
  void swap(System&);
  void setName(const String&);
  const String& getName() const;
  Size countMolecules() const;
  Size countFragments() const;
  Size countAtoms() const;
	Size countSecondaryStructures() const;
	Size countResidues() const;
  void prepend(Molecule& /Transfer/);
  void append(Molecule& /Transfer/);
  void insert(Molecule& /Transfer/);
  void insertBefore(Molecule& /Transfer/, Composite&);
  void insertAfter(Molecule& /Transfer/, Composite&);
  bool remove(Molecule&);
  void spliceBefore(System&);
  void spliceAfter(System&);
  void splice(System&);  
  void destroyBonds();
  virtual bool isValid() const throw();
	//  virtual void dump(ostream& s = cout, unsigned long depth = 0) const;
	//  virtual void read(istream& s);
	//  virtual void write(ostream& s) const;

	//  template <typename T>
	//  bool apply(UnaryProcessor<T>& processor)

	SIP_PYOBJECT __str__();
%MethodCode
	sipRes = PyString_FromString(String(String("System ") + sipCpp->getName() 
							+ " { " + String(sipCpp->countMolecules()) + " molecules,  " 
							+ String(sipCpp->countAtoms()) + " atoms }").c_str());
%End
};
