#include <iostream>
#define OLDALSZAM 3
using namespace std;
int main() {
  double ot[OLDALSZAM];
  bool megszerkesztheto = false;
  cout << "Adja meg egy haromszog oldalhosszait!\n";
  do {
    int i = 0; // Nincs kulon valtozoja az oldal nevenek
    while(i < OLDALSZAM) {
      do {
        cout << 'A'+i << " oldal hossza: "; // Osszeg tipusa?
        cin >> ot[i];
      } while(ot[i] <= 0.);
      i++;
    }
    megszerkesztheto = (ot[0]+ot[1]>ot[2] and ot[1]+ot[2]>ot[0] and ot[2]+ot[0]>ot[1]);
    if(megszerkesztheto) cout << "Megszerkesztheto.\n";
    else cout << "Ez nem szerkesztheto meg!\n";
  } while(not megszerkesztheto);
  return 0; }
