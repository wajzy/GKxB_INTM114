#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
#define SOROK 3
#define OSZLOPOK 4

int main() {
  // deklaracio, inicializacio
  int a[SOROK][OSZLOPOK] = {
    { 11, 12, 13, 14 },
    { 21, 22, 23, 24 },
    { 31, 32, 33, 34 }
  };
  int b[SOROK][OSZLOPOK], c[SOROK][OSZLOPOK];
  srand(time(NULL));
  for(int s=0; s<SOROK; s++) { // mtx. feltoltese
    for(int o=0; o<OSZLOPOK; o++) {
      b[s][o] = 10 + rand()%40;
    }
  }
  for(int s=0; s<SOROK; s++) { // mtx.-ek osszeadasa
    for(int o=0; o<OSZLOPOK; o++) {
      c[s][o] = a[s][o] + b[s][o];
    }
  }
  for(int s=0; s<SOROK; s++) { // megjelenites
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
  return 0; }
