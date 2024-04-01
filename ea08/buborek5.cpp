#include <iostream>
using namespace std;
#define OSSZES 5

void beolvas(int* szamok, int* hasznal) {
  int uj;
  *hasznal = 0;
  do {
    cout << *hasznal + 1 << ". szam: ";
    cin >> uj;
    if(uj>=0 and *hasznal<OSSZES) {
      *(szamok + *hasznal) = uj;
      (*hasznal)++;
    }
  } while(uj>=0 and *hasznal<OSSZES);
}

void buborek(int* t, int n) {
  for(int i=n-1; i>=1; i--) {
    for(int k=0; k<i; k++) {
      if(t[k] > t[k+1]) {
        int csere = t[k];
        t[k] = t[k+1];
        t[k+1] = csere;
      }
    }
  }
}

void tombKiir(const int* t, int n) {
  for(const int* vege=t+n; t<vege; t++) {
    cout << *t << '\t';
  }
  cout << endl;
}

int main() {
  int hasznal; // Ennyi elemet hasznalunk eppen
  int szamok[OSSZES];
  cout << "Adjon meg nemnegativ szamokat!\n";
  beolvas(szamok, &hasznal);
  buborek(szamok, hasznal);
  cout << "Rendezes utan:\n";
  tombKiir(szamok, hasznal);
  return 0;
}
