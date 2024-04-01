#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
#define SOROK 3
#define OSZLOPOK 4

void general(int t[][OSZLOPOK]) {
  for(int s=0; s<SOROK; s++) {
    for(int o=0; o<OSZLOPOK; o++) {
      t[s][o] = 10 + rand()%40;
    }
  }
}

void osszead(const int (*a)[OSZLOPOK], const int (*b)[OSZLOPOK], 
             int (*c)[OSZLOPOK]) {
  for(int s=0; s<SOROK; s++) {
    for(int o=0; o<OSZLOPOK; o++) {
      c[s][o] = *(a[s] + o) + *(*(b+s) + o);
    }
  }
}

void megjelenit(const int a[][OSZLOPOK],
                const int b[][OSZLOPOK],
                const int c[][OSZLOPOK]) {
  for(int s=0; s<SOROK; s++) {
    for(int o=0; o<OSZLOPOK; o++) {
      cout << a[s][o] << ' ';
    }
    cout << (s==SOROK/2?"+ ":"  ");
    for(int o=0; o<OSZLOPOK; o++) {
      cout << b[s][o] << ' ';
    }
    cout << (s==SOROK/2?"= ":"  ");
    for(int o=0; o<OSZLOPOK; o++) {
      cout << c[s][o] << ' ';
    }
    cout << endl;
  }
}

int main() {
  int a[SOROK][OSZLOPOK], b[SOROK][OSZLOPOK], 
      c[SOROK][OSZLOPOK];
  srand(time(NULL));
  general(a);
  general(b);
  osszead(a, b, c);
  megjelenit(a, b, c);
  return 0;
}
