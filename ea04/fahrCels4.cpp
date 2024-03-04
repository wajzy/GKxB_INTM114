#include <iostream>
using namespace std;

int main() {
  cout << "Fahrenheit --> Celsius\n"
       << "Fahrenheit: ";
  double f;
  cin >> f;
  cout << "Celsius: " 
  // Nincs tipuskonverzio
       << (5./9.)*(f-32.) << endl;
  return 0;
}
