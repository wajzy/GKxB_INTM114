#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int** lefoglal(int sorok, int oszlopok) {
  int** t = new int*[sorok];
  for(int s=0; s<sorok; s++) {
    t[s] = new int[oszlopok];
  }
  return t;
}

void general(int** t, int sorok, int oszlopok) {
  for(int s=0; s<sorok; s++) {
    for(int o=0; o<oszlopok; o++) {
      t[s][o] = 10 + rand()%40;
    }
  }
}

void osszead(int** a, int** b, int** c, 
             int sorok, int oszlopok) {
  for(int s=0; s<sorok; s++) {
    for(int o=0; o<oszlopok; o++) {
      c[s][o] = *(a[s] + o) + *(*(b+s) + o);
    }
  }
}

void megjelenit(int** a, int** b, int** c,
                int sorok, int oszlopok) {
  for(int s=0; s<sorok; s++) {
    for(int o=0; o<oszlopok; o++) {
      cout << a[s][o] << ' ';
    }
    cout << (s==sorok/2?"+ ":"  ");
    for(int o=0; o<oszlopok; o++) {
      cout << b[s][o] << ' ';
    }
    cout << (s==sorok/2?"= ":"  ");
    for(int o=0; o<oszlopok; o++) {
      cout << c[s][o] << ' ';
    }
    cout << endl;
  }
}

void felszabadit(int** t, int sorok) {
  for(int s=0; s<sorok; s++) {
    delete[] t[s];
  }
  delete[] t;
}

int main() {
  srand(time(NULL));
  int sorok = 1 + rand()%4;
  int oszlopok = 1 + rand()%4;
  int** a = lefoglal(sorok, oszlopok);
  int** b = lefoglal(sorok, oszlopok);
  int** c = lefoglal(sorok, oszlopok);
  general(a, sorok, oszlopok);
  general(b, sorok, oszlopok);
  osszead(a, b, c, sorok, oszlopok);
  megjelenit(a, b, c, sorok, oszlopok);
  felszabadit(a, sorok);
  felszabadit(b, sorok);
  felszabadit(c, sorok);
  return 0; }
