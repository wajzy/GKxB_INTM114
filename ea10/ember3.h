#ifndef EMBER_H
#define EMBER_H

// Sofor adatok es muvelete

#include "datum3.h"

struct ember {
  string nev;
  datum szuletes;
};

bool elmult17(const ember* e, const datum* ma); // Elmult 17 eves?

#endif
