#include <iostream>
#define R 10 // A kor sugara
using namespace std;

int main() {
  int sor = -R; 
  while(sor <= R) {
    int oszlop = -R;
    while(oszlop <= R) {
      if(R*R >= sor*sor + oszlop*oszlop) cout << '*';
      else cout << ' ';
      oszlop++;
    }
    sor += 2; // Noveles kettovel
    cout << '\n';
  }
  return 0;
}
