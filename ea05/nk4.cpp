#include <iostream>
#include <climits>
using namespace std;

int beker(int max=INT_MAX) {
  int szam;
  bool hibas;
  do {
    cout << "Szam: ";
    cin >> szam;
    hibas = szam<1 or szam>max;
    if(hibas) cout << "Hibas adat!\n";
  } while(hibas);
  return szam;
}

unsigned long faktorialis(int n) {
  if(n < 2) return 1;
  return n * faktorialis(n-1);
}

unsigned long kombinacio(unsigned long n, unsigned long k) {
  return faktorialis(n) / (faktorialis(k)*faktorialis(n-k));
}

int main() {
  int n = beker();
  int k = beker(n);
  cout << kombinacio(n, k);
  return 0; 
}
