#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int* lefoglal(int sorok, int oszlopok) {
  return new int[sorok*oszlopok];
}

void general(int* t, int sorok, int oszlopok) {
  for(int s=0; s<sorok; s++) {
    for(int o=0; o<oszlopok; o++) {
      t[s*oszlopok + o] = 10 + rand()%40;
    }
  }
}

void osszead(int* a, int* b, int* c, int sorok, int oszlopok) {
  for(int s=0; s<sorok; s++) {
    for(int o=0; o<oszlopok; o++) {
      c[s*oszlopok+o] = a[s*oszlopok+o] + b[s*oszlopok+o];
    }
  }
}

void megjelenit(int* a, int* b, int* c,
                int sorok, int oszlopok) {
  for(int s=0; s<sorok; s++) {
    for(int o=0; o<oszlopok; o++) {
      cout << a[s*oszlopok + o] << ' ';
    }
    cout << (s==sorok/2?"+ ":"  ");
    for(int o=0; o<oszlopok; o++) {
      cout << b[s*oszlopok + o] << ' ';
    }
    cout << (s==sorok/2?"= ":"  ");
    for(int o=0; o<oszlopok; o++) {
      cout << c[s*oszlopok + o] << ' ';
    }
    cout << endl;
  }
}

int main() {
  srand(time(NULL));
  int sorok = 1 + rand()%4;
  int oszlopok = 1 + rand()%4;
  int* a = lefoglal(sorok, oszlopok);
  int* b = lefoglal(sorok, oszlopok);
  int* c = lefoglal(sorok, oszlopok);
  general(a, sorok, oszlopok);
  general(b, sorok, oszlopok);
  osszead(a, b, c, sorok, oszlopok);
  megjelenit(a, b, c, sorok, oszlopok);
  delete[] a;
  delete[] b;
  delete[] c;
  return 0;
}
