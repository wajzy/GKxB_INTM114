#include <iostream>
using namespace std;

struct hallgato {
  string nev;
  int eletkor;
};

int main() {
  hallgato h = { "Gizi", 19 }; // Lokalis valtozo
  hallgato* ph1 = new hallgato; // Memoria foglalas
  ph1->nev = "Mari"; // Ertekadasok
  ph1->eletkor = 20;
  // Mar lezeto strukturaval inicializalhato
  hallgato* ph2 = new hallgato(h); 
  hallgato* ph3 = new hallgato(*ph1); 
  hallgato* ph4 = new hallgato{ "Lili", 21 }; // C++11
  
  delete ph1;
  delete ph2;
  delete ph3;
  delete ph4;
  
  return 0;
}
