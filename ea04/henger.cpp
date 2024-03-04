#define _USE_MATH_DEFINES // regi rendszerekhez
#include <iostream>
#include <cmath> // vagy math.h
using namespace std;

int main() {
  double r, h;
  cout << "Adja meg egy henger\n\talapjanak sugarat! "; cin >> r;
  cout << "\tmagassagat! "; cin >> h;
  cout << "A henger\n\tterfogata: " << r*r*M_PI*h
       << "\n\tfelszine: " << 2.*r*M_PI*(r+h) << endl;
  return 0;
}
