#include <iostream>
#define OLDALSZAM 3
using namespace std;
int main() {
  int ot[OLDALSZAM], i;
  bool megszerkesztheto = false;
  char onev;       // aktualis oldal megnevezese
  cout << "Adja meg egy haromszog oldalhosszait!\n";
  do {
    i = 0; onev = 'A';
    while(i < OLDALSZAM) {
      do {
        cout << onev << " oldal hossza: "; /* oldal megnevezese */ cin >> ot[i];
      } while(ot[i] <= 0);
      i++; onev++; // kovetkezo oldal neve
    }
    if(ot[0]+ot[1]<=ot[2] or ot[1]+ot[2]<=ot[0] or ot[2]+ot[0]<=ot[1]) {
      cout << "Ez nem szerkesztheto meg!\n";
    } else {
      megszerkesztheto = true;
      cout << "Megszerkesztheto.\n";
    }
  } while(not megszerkesztheto);
  return 0; }
