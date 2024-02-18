#include <iostream>
using namespace std;

int main() {
  int a, b, c;
  cout << "Adja meg egy haromszog oldalhosszait novekvo sorrendben!\n";
  do {
    cout << "A oldal hossza: ";
    cin >> a;
  } while(a <= 0);
  do {
    cout << "B oldal hossza: ";
    cin >> b; 
  } while(b < a);
  do {
    cout << "C oldal hossza: ";
    cin >> c; 
  } while(c<b or a+b<=c);
  return 0;
}
