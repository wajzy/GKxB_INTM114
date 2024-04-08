#include <iostream>
#include <string>
using namespace std;

#define VAROSOK 7
int varosIdx() {
  string vlista[VAROSOK] = {
    "Budapest", "Gyor", "Szeged",
    "Debrecen", "Veszprem",
    "Dunaujvaros", "Eger"
  };
  string vnev;
  do {
    cin >> vnev;
    for(int i=0; i<VAROSOK; i++) {
      if(vlista[i] == vnev) {
        return i;
      }
    }
    cout << "Nem letezo varos!\n";
  } while(true);
}

int tav(int honnan, int hova) {
  if(honnan == hova) return 0;
  int tavMtx[(VAROSOK*(VAROSOK-1))/2] = { 
    121,
    174, 287,
    231, 377, 218,
    115,  82, 278, 368,
     83, 176, 161, 320, 103,
    139, 285, 298, 131, 275, 228
  };
  if(honnan < hova) {
    int csere = honnan;
    honnan = hova;
    hova = csere;
  }
  return tavMtx[(honnan)*(honnan-1)/2 + hova];
}

int main() {
  int honnan, hova;
  cout << "Varosok kozotti tavolsag kiszamitasa\n"
       << "Kilepes azonos varosok megadasaval.\n";
  do {
    cout << "Indulo varos: "; honnan = varosIdx();
    cout << "Erkezesi varos: "; hova = varosIdx();
    if(honnan != hova) {
      cout << "Tavolsag: " 
           << tav(honnan, hova) << "km\n";
    }
  } while(honnan != hova);
  return 0;
}
