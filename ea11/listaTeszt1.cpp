#include <iostream>
#include "Lista1.h"
using namespace std;

int main() {
  cout << "Adjon meg egeszeket, leallas negativ szamra!\n";
  Lista1 *horgony=nullptr, *seged=nullptr;
  int szam;
  while(cin>>szam, szam>=0) {
    seged = beszur1(szam, seged);
    if(horgony == nullptr) horgony = seged;
  }
  cout << "Ezeket adta meg:\n";
  kiir1(horgony);
  torolMindet1(horgony);
  return 0;
}
