#include <iostream>
#include <cstddef> // nullptr mutato
#include "Lista1.h"

// 'elozo' utan beszur egy uj elemet
Lista1 *beszur1(int adat, Lista1 *elozo) {
  Lista1* uj = new Lista1;
  if(uj) { // if(uj != nullptr) { //...
    uj->adat = adat;
    if(elozo) {
      uj->kov = elozo->kov;
      elozo->kov = uj;
    } else {
      uj->kov = nullptr;
    }
  }
  return uj;
}

// kiirja a lista osszes elemet
void kiir1(Lista1 *horgony) {
  Lista1 *seged;
  for(seged=horgony; seged; 
      seged=seged->kov) {
    std::cout << seged->adat 
              << '\t';
  }
  std::cout << std::endl;
}

// torli a teljes listat
void torolMindet1(Lista1 *horgony) {
  while(horgony) {
    Lista1 *seged = horgony->kov;
    delete horgony;
    horgony = seged;
  }
}
