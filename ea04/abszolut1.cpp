#include <iostream>
using namespace std;

int main() {
  double v, abs;
  cout << "Szam: "; cin >> v;
  cout << "Abszolut erteke: ";
  
  if(v < 0.) abs = -v;
  else abs = v;
  
  cout << abs;
  return 0;
}
