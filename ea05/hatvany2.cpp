#include <iostream>
using namespace std;

long hatvany(int alap, unsigned kitevo) {
  long eredmeny;
  if(kitevo == 0) return 1;
  if(kitevo == 1) return alap;
  eredmeny = hatvany(alap, kitevo/2);
  eredmeny *= eredmeny; // nem hivjuk 2x!
  if(kitevo%2 == 1) eredmeny *= alap;
  return eredmeny; }

int main() {
  int a; unsigned k;
  cout << "Hatvanyozas\nAlap: "; cin >> a;
  cout << "Kitevo: "; cin >> k;
  cout << "Eredmeny: " << hatvany(a, k);
  return 0; }
