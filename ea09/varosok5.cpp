#include <iostream>
#include <string>
using namespace std;

string* varosBe(int db) {
  string* vlista = new string[db];
  for(int i=0; i<db; i++) {
    cout << i+1 << ". varos neve: ";
    cin >> vlista[i];
  }
  return vlista;
}

int** tavokBe(const string* vlista, int db) {
  int** tavMtx = new int*[db-1];
  for(int honnan=1; honnan<db; honnan++) {
    tavMtx[honnan-1] = new int[honnan];
    for(int hova=0; hova<honnan; hova++) {
      cout << vlista[honnan] << " --> "
           << vlista[hova] << ": ";
      cin >> tavMtx[honnan-1][hova];
    }
  }
  return tavMtx;
}

int varosIdx(const string* vlista, int db) {
  string vnev;
  do {
    cin >> vnev;
    for(int i=0; i<db; i++) {
      if(vlista[i] == vnev) {
        return i;
      }
    }
    cout << "Nem letezo varos!\n";
  } while(true);
}

int tav(int** tavMtx, int honnan, int hova) {
  if(honnan == hova) return 0;
  if(honnan < hova) {
    int csere = honnan;
    honnan = hova;
    hova = csere;
  }
  return tavMtx[honnan-1][hova];
}

void tavokFelszab(int** tavMtx, int db) {
  for(int i=0; i<db-1; i++) {
    delete[] tavMtx[i];
  }
  delete[] tavMtx;
}

int main() {
  string* varosLista;
  int varosDb;
  int** varosTavok;
  int honnan, hova;
  cout << "Varosok kozotti tavolsag kiszamitasa\n"
       << "Varosok szama: ";
  cin >> varosDb;
  varosLista = varosBe(varosDb);
  cout << "Adja meg a varosok kozti tavokat!\n";
  varosTavok = tavokBe(varosLista, varosDb);
  cout << "Kilepes azonos varosok megadasaval.\n";
  do {
    cout << "Indulo varos: "; 
    honnan = varosIdx(varosLista, varosDb);
    cout << "Erkezesi varos: "; 
    hova = varosIdx(varosLista, varosDb);
    if(honnan != hova) {
      cout << "Tavolsag: " 
           << tav(varosTavok, honnan, hova) << "km\n";
    }
  } while(honnan != hova);
  tavokFelszab(varosTavok, varosDb);
  delete[] varosLista;
  return 0;
}
