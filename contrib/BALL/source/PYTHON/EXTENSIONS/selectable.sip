// -*- Mode: C++; tab-width: 2; -*-
// vi: set ts=2:
//
// $Id: selectable.sip,v 1.4 2003-11-01 09:27:40 oliver Exp $
//

class Selectable
{
%TypeHeaderCode
#include <BALL/CONCEPT/selectable.h>
using namespace BALL;
%End
  public:
  Selectable() throw();
  Selectable(const Selectable&, bool = true) throw();
  ~Selectable() throw();
  void clear() throw();
 	void set(const Selectable&, bool = true) throw();
  // Selectable& operator = (const Selectable&);
  void get(Selectable&, bool = true) const throw();
  void swap(Selectable&) throw();
  virtual void select() throw();
  virtual void deselect() throw();
  bool isSelected() const throw();
  // friend ::std::ostream& operator << (::std::ostream& s, const Selectable& selectable);
  // friend ::std::istream& operator >> (::std::istream& s, Selectable& selectable);
  // void write(PersistenceManager& pm) const;
  // bool read(PersistenceManager& pm);
  // virtual void dump(::std::ostream& s = std::cout, unsigned long depth = 0L) const;
};
