#include <iostream>
using namespace std;

int main() {
  cout << "Adjon meg egy szot! ";
  string szo;
  cin >> szo;
  int eleje, vege;
  
  eleje = 0; vege = szo.length()-1;
  while(eleje < vege) {
    char csere = szo[eleje];
    szo[eleje] = szo[vege];
    szo[vege] = csere;
    eleje++; vege--;
  }
  
  cout << "Megforditva: " 
       << szo << endl;
  return 0;
}
