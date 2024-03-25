#include <iostream>
using namespace std;

int main(void) {
  int i=3, *pi1, *pi2;
  pi1 = pi2 = &i; // OK
  double d=1.5;
  double* pd = &d; // inicializalas
  // pd = &12.34;
  // error: lvalue required as unary '&' operand
  // literalnak nincs memoriacime, ertelmetlen
  // pd = pi1; error: cannot convert 'int*'
  //           to 'double*' in assignment
  void *pv;
  pv = pi1; // OK
  // pi1 = pv; 
  // error: invalid conversion from 'void*' to 'int*'
  pi1 = (int*)pv; // Programozo felelossegere
  // cout << *pv;
  // error: 'void*' is not a pointer-to-object type
  // tipusinfo hianyaban nem tudja, hogyan kell feldolgozni
  pv = NULL; pv = nullptr;
  return 0;
}

