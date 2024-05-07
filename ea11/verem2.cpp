#include <iostream>
#include "verem2.h"

static Lista1* horgony = nullptr;

bool berak(int adat) {
  Lista1* uj = new Lista1;
  if(uj != nullptr) {
    uj->adat = adat;
    uj->kov = horgony;
    horgony = uj;
    return true;
  } else {
    return false;
  }
}

int kivesz() {
  if(horgony == nullptr) {
    std::cerr<<"A verem ures.\n";
    return 0;
  } else {
    int adat = horgony->adat;
    Lista1* kov = horgony->kov;
    delete horgony;
    horgony = kov;
    return adat;
  }
}

bool ures() {
  return horgony == nullptr;
}
