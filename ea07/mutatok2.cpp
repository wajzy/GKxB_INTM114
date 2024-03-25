#include <iostream>
using namespace std;

int main(void) {
  int t[] = { 100, 200, 300 };
  int* pi = t;
  cout << "Elso elem erteke (cime):\t" << pi[0] << " (" << t 
       << ")\nMasodik elem erteke (cime):\t";
  pi++;
  cout << *pi << " (" << pi 
       << ")\nHarmadik elem erteke (cime):\t" << *(t+2)
       << " (" << t+2 << ")\n";
  return 0;
}

