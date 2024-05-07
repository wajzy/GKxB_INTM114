#include <iostream>
#include "Lista2.h"

// 'elozo' utan beszur egy uj elemet
Lista2 *beszur2(int adat, 
                Lista2 *elozo) {
  Lista2 *uj = new Lista2;
  if(uj) {
    uj->adat = adat;
    if(elozo) {
      uj->elozo = elozo;
      uj->kov = elozo->kov;
      elozo->kov = uj;
      if(uj->kov) uj->kov->elozo = uj;
    } else {
      uj->elozo = uj->kov = nullptr; 
    }
  }
  return uj;
}

// kiirja a lista osszes elemet
void kiir2(Lista2 *horgony) {
  for(Lista2* seged=horgony; seged; seged=seged->kov) {
    std::cout << seged->adat << '\t';
  }
  std::cout << std::endl;
}

// torli 'torlendo'-t, vissza: kov. elem
Lista2 *torol2(Lista2 *torlendo) {
  Lista2 *koveto = nullptr;
  if(torlendo) {
    koveto = torlendo->kov;
    if(torlendo->elozo) torlendo->elozo->kov = torlendo->kov;
    if(torlendo->kov) torlendo->kov->elozo = torlendo->elozo;
    delete torlendo; 
  }
  return koveto; 
}

// torli a teljes listat
void torolMindet2(Lista2 *horgony) {
  Lista2 *seged = horgony;
  while(seged) {
    seged = torol2(seged);
  }
}
