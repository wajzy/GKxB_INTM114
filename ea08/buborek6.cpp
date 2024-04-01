#include <iostream>
using namespace std;

int* beolvas(int* hasznal) {
  int uj, osszes = 2;
  int* szamok = new int[osszes];
  *hasznal = 0;
  do {
    cerr << "\t[Felhasznalva: " << *hasznal 
         << ", tombelemek szama: " << osszes << "]\n";
    cout << *hasznal + 1 << ". szam: "; cin >> uj;
    if(uj >= 0) {
      if(*hasznal == osszes) {
        cerr << "\t[Memoriafoglalas + mozgatas]\n";
        osszes *= 2;
        int* szamok2 = new int[osszes];
        for(int i=0; i<*hasznal; i++) {
          szamok2[i] = szamok[i];
        }
        delete[] szamok;
        szamok = szamok2;
      }
      szamok[*hasznal] = uj;
      (*hasznal)++;
    }
  } while(uj >= 0);
  return szamok;
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
  int* szamok; // Tomb cime
  cout << "Adjon meg nemnegativ szamokat!\n";
  szamok = beolvas(&hasznal);
  buborek(szamok, hasznal);
  cout << "Rendezes utan:\n";
  tombKiir(szamok, hasznal);
  delete[] szamok;
  return 0;
}
