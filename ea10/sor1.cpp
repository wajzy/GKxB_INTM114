#include "sor1.h"

static int sor[SOR_MAX];
static int eleje=0, vege=0, db=0;

bool berak(int adat) {
  if(db < SOR_MAX) {
    sor[vege] = adat;
    db++;
    vege++;
    if(vege == SOR_MAX) {
      vege = 0;
    }
    return true;
  } else {
    std::cerr << "A sor megtelt.\n";
    return false;
  }
}

int kivesz() {
  if(db > 0) {
    int adat = sor[eleje];
    db--;
    eleje++;
    if(eleje == SOR_MAX) {
      eleje = 0;
    }
    return adat;
  } else {
    std::cerr << "A sor ures.\n";
    return 0;
  }
}
