#include <iostream>
#include "verem2.h"
using namespace std;

#define N 5
int main() {
  cout << N << " egesz verembe rakasa: ";
  for(int i=0; i<N; i++) {
    cout << i << '\t';
    berak(i);
  }
  cout << "\nVisszaolvasva:\t\t";
  while(not ures()) {
    cout << kivesz() << '\t';
  }
  cout << endl;
  return 0;
}
