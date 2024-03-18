#include <iostream>
#define MAXLETSZAM 1000
using namespace std;

struct hallgato {
  string nev;
  int pontszam;
};

int main(void) {
  hallgato hg[MAXLETSZAM];
  int letszam, maxPont = 0;
  cout << "Legeredmenyesebb hallgatok kikeresese\n"
       << "Osztalyletszam: ";
  cin >> letszam;
  for(int i=0; i<letszam; i++) {
    cout << (i+1) << ". hallgató neve: "; cin >> hg[i].nev;
    cout << "ZH-n elert pontszam: "; cin >> hg[i].pontszam;
    if(hg[i].pontszam > maxPont) maxPont = hg[i].pontszam;
  }
  cout << "Legmagasabb pontszam: " << maxPont << ", akik elertek:\n";
  for(int i=0; i<letszam; i++) {
    if(hg[i].pontszam == maxPont) {
      cout << hg[i].nev << '\n';
    }
  }
  return 0;
}
