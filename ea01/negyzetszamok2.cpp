#include<iostream>
using namespace std;
int main() {
  cout << "Termeszetes szamok negyzetei\n\n";
  int szam;
  szam = 1;
  while(szam <= 10) {
    cout << szam << '\t' << szam*szam << '\n';
    szam = szam + 1;
  }
  return 0;
}
