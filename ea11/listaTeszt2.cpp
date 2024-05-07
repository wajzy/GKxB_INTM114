#include <iostream>
#include "Lista2.h"
using namespace std;

int main() {
  Lista2 *horgony=nullptr, *seged=nullptr, *kozepe;
  for(int i=0; i<7; i++) {
    seged = beszur2(i, seged);
    if(horgony == nullptr) {
      horgony = seged;
    }
    if(i == 3) {
      kozepe = seged;
    }
  }
  kiir2(horgony);
  kozepe = beszur2(666, kozepe);
  kiir2(horgony);
  torol2(kozepe);
  horgony = torol2(horgony);
  kiir2(horgony);
  torolMindet2(horgony);
  return 0;
}
