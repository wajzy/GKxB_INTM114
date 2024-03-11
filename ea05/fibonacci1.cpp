#include <iostream>
using namespace std;

unsigned long fibonacci(unsigned ho) {
  unsigned long i=0, j=1, k;
  if(ho < 2) return ho;
  for(unsigned n=1; n<ho; n++) {
    k = i+j;
    i = j;
    j = k;
  }
  return k;
}

int main() {
  unsigned ho;
  cout << "Fibonacci-sorozat\nHonapok szama: ";
  cin >> ho; 
  cout << "Nyulparok szama: " << fibonacci(ho) << endl;
  return 0; 
}
