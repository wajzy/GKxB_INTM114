#include "gepkocsi3.h"

datum muszakiErvenyesseg(const gepkocsi* gk) { // Meddig ervenyes a muszaki?
  datum lejar = gk->utolsoMuszaki;
  if(gk->muszakiDb > 1) {
    lejar.ev += 2;
  } else {
    lejar.ev += 4;
  }
  return lejar;
}
