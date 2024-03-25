#include <iostream>
using namespace std;

int main(void) {
  int i = 3;
  int* pi;
  pi = &i;
  *pi += 2; // i += 2;
  cout << "i = " << i << endl;
  return 0;
}

