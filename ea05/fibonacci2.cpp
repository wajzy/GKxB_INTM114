#include <iostream>
using namespace std;

unsigned long fibonacci(unsigned ho) {
  if(ho < 2) return ho;
  return fibonacci(ho-1)+fibonacci(ho-2);
}

int main() {
  unsigned ho;
  cout << "Fibonacci-sorozat\nHonapok szama: ";
  cin >> ho; 
  cout << "Nyulparok szama: " << fibonacci(ho) << endl;
  return 0; 
}
