#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
  char* pc = new char[10]; // Tomb foglalasa
  // Futasidoben kiszamolt meret sem okoz gondot
  srand(time(NULL));
  int* pi = new int[rand()%50]; 
  double* pd = new double[100];
  
  // Beepitett tipusokbol allo tomb 
  // nem inicializalhato :(
  
  delete[] pc; // Felszabaditas
  delete[] pi;
  delete[] pd;
  
  return 0;
}
