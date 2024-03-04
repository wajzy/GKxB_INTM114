#include <iostream>
#include <cstdio>
#define DB 10
using namespace std;

int main() {
  cout << "Szamjegyek, ures- es egyeb karakterek leszamlalasa\n"
       << "a bemeneten EOF-ig vagy Ctrl+D-ig.\n\n";
  int i, k, feher=0, egyeb=0;
  int szamjegy[DB];  // 10 elemu tomb a tiz szamjegynek
  i = 0;
  while(i < DB) {
    szamjegy[i] = 0; // Szamlalok nullazasa
    i++;
  }
  while((k=cin.get()) != EOF){
    if(k>='0' and k<='9') {
      i = k - '0';     // Karakter atalakitasa szamma,
      szamjegy[i]++;   // amit indexkent hasznalunk
    } else if(k==' ' or k=='\n' or k=='\t') feher++;
    else egyeb++;
  }
  cout << "Szamjegyek:\n";
  i = 0;               // Eredmenyek kijelzese
  while(i < DB) {
    cout << i << '\t' << szamjegy[i] << " db\n";
    i++;
  }
  cout << "Ures karakterek: " << feher << ", egyeb: " << egyeb << endl;
  return 0;
}
