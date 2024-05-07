#include <iostream>
#include "sor2.h"

static Lista2* eleje = nullptr;
static Lista2* vege  = nullptr;

bool berak(int adat) {
  Lista2* uj = new Lista2;
  if(uj != nullptr) {
    uj->adat = adat;
    uj->elozo = nullptr;
    uj->kov = eleje;
    if(eleje != nullptr) {
      eleje->elozo = uj;
    }
    eleje = uj;
    if(vege == nullptr) {
      vege = uj;
    }
    return true;
  } else {
    return false;
  }
}

int kivesz() {
  if(vege == nullptr) {
    std::cerr << "A sor ures.\n";
    return 0;
  } else {
    int adat = vege->adat;
    if(vege->elozo != nullptr) {
      vege->elozo->kov = nullptr;
    }
    Lista2* ujVege = vege->elozo;
    delete vege;
    vege = ujVege;
    if(vege == nullptr) eleje = nullptr;
    return adat;
  }
}

