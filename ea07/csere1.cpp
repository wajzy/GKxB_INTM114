#include <iostream>
using namespace std;

void nyomtat(int a, int b) {
  cout << "a = " << a << ", b = " << b << '\n';
}

void csere1(int a, int b) {
  int cs = a;
  a = b;
  b = cs;
}

struct ketszam { int a, b; };

ketszam csere2(int a, int b) {
  ketszam cs = {b, a};
  return cs;
}

void csere3(int* a, int* b) {
  int cs = *a;
  *a = *b;
  *b = cs;
}

int main(void) {
  int a = 1, b = 2;
  cout << "eredeti ertekek:\t"; nyomtat(a, b);
  csere1(a, b); cout << "csere1 utan:\t\t"; nyomtat(a, b);
  ketszam ksz = csere2(a, b); a = ksz.a; b = ksz.b;
  cout << "csere2 utan:\t\t"; nyomtat(a, b);
  csere3(&a, &b); cout << "csere3 utan:\t\t"; nyomtat(a, b);
  return 0;
}

