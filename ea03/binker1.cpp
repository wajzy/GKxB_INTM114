#include <iostream>
#define N 10
using namespace std;
// Binaris kereses csak novekvoleg rendezett elemekkel hasznalhato!
int main() {     //  0    1  2  3  4   5   6   7   8   9
  int szamok[N] = {-23, -11, 0, 1, 7, 13, 14, 17, 21, 42};
  cout << "Mit keresunk? ";
  int szam;
  cin >> szam;                                    // szam == 1
  int also=0, felso=N-1, kozep;       // also == 0, felso == 9
  while(also<=felso) {
    kozep = (also+felso)/2;                      // kozep == 4
    if(szam < szamok[kozep]) felso = kozep-1;    // felso == 3
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

