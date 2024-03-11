#include <iostream>
using namespace std;

int keres(string miben, char mit) {
  for(size_t i=0; i<miben.length(); i++) {
    if(miben[i] == mit) return i;
  }
  return -1;
}

int main() {
  string szo; char betu; int hely;
  cout << "Betu keresese szoban\nSzo: "; cin >> szo;
  cout << "Keresendo betu: ";           cin >> betu;
  hely = keres(szo, betu);
  if(hely == -1) {
    cout << "Nem talaltuk meg.\n";
  } else {
    cout << "Megtalaltuk a " << hely << " indexu helyen.\n";
  }
  return 0; 
}
