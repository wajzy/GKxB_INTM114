#include <iostream>
using namespace std;

int main() {
  int szamok[] = {12, 3, 54, -4, 56, 4, 7, 3};
  int n = sizeof(szamok)/sizeof(szamok[0]); // Tomb elemszam szamolasa
  int i=n-1, k;
  while(i>=1) {
    k = 0;
    while(k<i) {
      if(szamok[k]>szamok[k+1]) {
        int csere = szamok[k]; szamok[k] = szamok[k+1]; szamok[k+1] = csere;
      }
      k++;
    }
    i--;
  }
  cout << "Rendezes utan:\n"; i = 0;
  while(i < n) {
    cout << szamok[i] << '\t'; i++;
  }
  cout << endl;
  return 0;
}
