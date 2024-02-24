#include <iostream>
using namespace std;
int main() {
  int a, b, c;
  bool megszerkesztheto = false;
  cout << "Adja meg egy haromszog oldalhosszait!\n";
  do {
    do { // hatultesztelo ciklus eleje...
      cout << "A oldal hossza: "; cin >> a;
    } while(a <= 0); // ...es vege
    do {
      cout << "B oldal hossza: "; cin >> b; 
    } while(b <= 0);
    do {
      cout << "C oldal hossza: "; cin >> c; 
    } while(c <= 0);
    if(a+b<=c or b+c<=a or c+a<=b) {
      cout << "Ez nem szerkesztheto meg!\n";
    } else {
      megszerkesztheto = true;
      cout << "Megszerkesztheto.\n";
    }
  } while(not megszerkesztheto);
  return 0; }
