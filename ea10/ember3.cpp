#include "ember3.h"

bool elmult17(const ember* e, const datum* ma) { // Elmult 17 eves?
  datum eppen17 = e->szuletes;
  eppen17.ev += 17;
  return kulonbseg(&eppen17, ma) >= 0;
}
