#include <iostream>
#define OLDALSZAM 3
using namespace std;
int main() {
  double ot[OLDALSZAM];
  bool megszerkesztheto = false;
  cout << "Adja meg egy haromszog oldalhosszait!\n";
  do {
    int i = 0;
    while(i < OLDALSZAM) {
      do {
        cout << char('A'+i) << " oldal hossza: ";
        //cout << (char)('A'+i) << " oldal hossza: ";
        cin >> ot[i];
      } while(ot[i] <= 0.);
      i++;
    }
    megszerkesztheto = (ot[0]+ot[1]>ot[2] and ot[1]+ot[2]>ot[0] and ot[2]+ot[0]>ot[1]);
    cout << (megszerkesztheto ? "Megszerkesztheto.\n" : "Ez nem szerkesztheto meg!\n");
  } while(not megszerkesztheto);
  return 0; }
