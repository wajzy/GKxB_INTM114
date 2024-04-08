#include <iostream>
#include <string>
using namespace std;

#define VAROSOK 7
int varosIdx() {
  string vlista[VAROSOK] = {
    "Budapest", "Gyor", "Szeged", "Debrecen", 
    "Veszprem", "Dunaujvaros", "Eger"
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
  int tavMtx[VAROSOK][VAROSOK] = {
    {   0, 121, 174, 231, 115,  83, 139 },
    { 121,   0, 287, 377,  82, 176, 285 },
    { 174, 287,   0, 218, 278, 161, 298 },
    { 231, 377, 218,   0, 368, 320, 131 },
    { 115,  82, 278, 368,   0, 103, 275 },
    {  83, 176, 161, 320, 103,   0, 228 },
    { 139, 285, 298, 131, 275, 228,   0 }
  };
  return tavMtx[honnan][hova];
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
