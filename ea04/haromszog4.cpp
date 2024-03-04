#include <iostream>
#define OLDALSZAM 3
using namespace std;
int main() {
  double ot[OLDALSZAM]; // racionalis szamok
  int i;
  bool megszerkesztheto = false;
  char onev;
  cout << "Adja meg egy haromszog oldalhosszait!\n";
  do {
    i = 0; onev = 'A';
    while(i < OLDALSZAM) {
      do {
        cout << onev << " oldal hossza: ";
        cin >> ot[i];
      } while(ot[i] <= 0.); // lebegőpontos konstans
      i++; onev++;
    }
    megszerkesztheto = (ot[0]+ot[1]>ot[2] and ot[1]+ot[2]>ot[0] and ot[2]+ot[0]>ot[1]);
    if(megszerkesztheto) cout << "Megszerkesztheto.\n";
    else cout << "Ez nem szerkesztheto meg!\n";
  } while(not megszerkesztheto);
  return 0; }
