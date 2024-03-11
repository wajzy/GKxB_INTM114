#include <iostream>
using namespace std;

double abszolut(double szam) {
  return szam<0. ? -szam : szam;
}

int main() {
  double v;
  cout << "Szam: "; cin >> v;
  cout << "Abszolut erteke: " << abszolut(v)
       << "\nabszolut(-3) == " << abszolut(-3)
       << "\nabszolut(v*3) == " << abszolut(v * 3)
       << "\nabszolut(abszolut(-3)) == " 
       << abszolut(abszolut(-3)) << endl;
  return 0; 
}
