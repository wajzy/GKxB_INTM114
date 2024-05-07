#ifndef LISTA2
#define LISTA2

struct Lista2 {
  int adat;
  Lista2 *elozo, *kov;
};

Lista2 *beszur2(int adat, Lista2 *elozo);
void kiir2(Lista2 *horgony);
Lista2* torol2(Lista2 *torlendo);
void torolMindet2(Lista2 *horgony);

#endif
