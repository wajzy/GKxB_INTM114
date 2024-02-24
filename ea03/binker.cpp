#include <iostream>
#define N 10
using namespace std;

int main() {
  int szamok[N] = {-23, -11, 0, 1, 7, 13, 14, 17, 21, 42};
  cout << "Mit keresunk? ";
  int szam;
  cin >> szam;
  int also=0, felso=N-1, kozep;
  while(also<=felso) {
    kozep = (also+felso)/2;
    if(szam < szamok[kozep]) felso = kozep-1;
    else if(szam > szamok[kozep]) also = kozep+1;
    else {
      cout << "Megtalaltuk a(z) " << kozep << " indexu helyen.\n";
      return 0;
    }
  }
  cout << "Nem talaltuk meg, de a(z) " << also << " indexu elemben "
       << "lenne a helye.\n";
  return 0;
}

