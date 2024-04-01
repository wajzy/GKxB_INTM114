#include <iostream>
using namespace std;

int main() {
  char *pc; // deklaraciok
  int* pi;
  double* pd;
  
  pc = new char('X');  // memoriafoglalasok
  pi = new int(42);    // inicializaciok
  pd = new double(3.14);
      
  delete pc;  // memoria felszabaditas
  delete pi;
  delete pd;
  
  return 0;
}
