#include <iostream>
#define A 5 // Fel nagytengely (fel fotengely)
#define B 9 // Fel kistengely
using namespace std;

int main() {
  int sor = -A; 
  while(sor <= A) {
    int oszlop = -B;
    while(oszlop <= B) {
      if((sor*sor)/double(A*A) + (oszlop*oszlop)/double(B*B) <= 1.) cout << '*';
      else cout << ' ';
      oszlop++;
    }
    sor++;
    cout << '\n';
  }
  return 0;
}
