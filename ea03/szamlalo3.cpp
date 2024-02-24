#include <iostream>
#include <cstdio>
#define DB 10
using namespace std;

int main(void) {
  cout << "Szamjegyek, ures- es egyeb karakterek leszamlalasa\n"
       << "a bemeneten EOF-ig vagy Ctrl+D-ig.\n\n";
  int k, i, feher=0, egyeb=0;
  int szamjegy[DB] = {0}; // szamlalok nullazasa inicializalassal
  while((k=cin.get()) != EOF){
    if(k>='0' && k<='9') ++szamjegy[k-'0']; // szamlalok leptetese
    else if(k==' ' or k=='\n' or k=='\t') ++feher;
    else ++egyeb;
  }
  cout << "Szamjegyek:\n";
  i = 0;
  while(i < DB) {
    cout << i << '\t' << szamjegy[i] << " db\n"; i++;
  }
  cout << "Ures karakterek: " << feher << ", egyeb: " << egyeb << endl;
  return 0;
}
