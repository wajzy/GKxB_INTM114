#include <iostream>
using namespace std;

int main() {
  double v, abs;
  cout << "Szam: "; cin >> v;
  cout << "Abszolut erteke: ";
  
  abs = v<0. ? -v : v;
  
  
  cout << abs;
  return 0; 
}
