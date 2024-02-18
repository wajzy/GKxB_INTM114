#include <iostream>
using namespace std;

int main() {
  int sor = -5; // A kor sugara 5
  while(sor <= 5) {
    int oszlop = -5;
    while(oszlop <= 5) {
      if(5*5 >= sor*sor + oszlop*oszlop) cout << '*';
      else cout << ' ';
      oszlop++;
    }
    sor++;
    cout << '\n';
  }
  return 0;
}
