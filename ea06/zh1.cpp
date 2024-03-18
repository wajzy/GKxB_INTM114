#include <iostream>
#define MAXLETSZAM 1000
using namespace std;

int main(void) {
  string nevek[MAXLETSZAM];
  int pontszamok[MAXLETSZAM];
  int letszam, maxPont = 0;
  cout << "Legeredmenyesebb hallgatok kikeresese\n"
       << "Osztalyletszam: ";
  cin >> letszam;
  for(int i=0; i<letszam; i++) {
    cout << (i+1) << ". hallgató neve: "; cin >> nevek[i];
    cout << "ZH-n elert pontszam: "; cin >> pontszamok[i];
    if(pontszamok[i] > maxPont) maxPont = pontszamok[i];
  }
  cout << "Legmagasabb pontszam: " << maxPont
       << ", akik elertek:\n";
  for(int i=0; i<letszam; i++) {
    if(pontszamok[i] == maxPont) {
      cout << nevek[i] << '\n';
    }
  }
  return 0;
}
