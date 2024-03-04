#include <iostream>
#include <cmath> // sqrt() miatt
using namespace std;

int main() {
  double a, b, c;
  cout << "Az ax^2+bx+c = 0 egyenlet megoldasa\n";
  cout << "a erteke: "; cin >> a;
  if(a == 0.) {
    cout << "Az egyenlet nem masodfoku!\n";
  } else {
    cout << "b erteke: "; cin >> b;
    cout << "c erteke: "; cin >> c;
    double d = b*b - 4.*a*c;
    if(d < 0.) {
      cout << "Nincs valos gyok!\n";
    } else {
      cout <<   "x1 = " << (-b + sqrt(d)) / (2.*a)
           << "\nx2 = " << (-b - sqrt(d)) / (2.*a) << endl;
    }
  }
  return 0;
}
