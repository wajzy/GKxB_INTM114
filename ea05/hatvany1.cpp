#include <iostream>
using namespace std;

long hatvany(int alap, unsigned kitevo) {
  long eredmeny = 1;
  unsigned i;
  for(i=0; i<kitevo; i++) {
    eredmeny *= alap; }
  return eredmeny; }

int main() {
  int a; unsigned k;
  cout << "Hatvanyozas\nAlap: "; cin >> a;
  cout << "Kitevo: "; cin >> k;
  cout << "Eredmeny: " << hatvany(a, k);
  return 0; }
