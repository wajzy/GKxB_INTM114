#include <iostream>
#define N 5
using namespace std;

int main() {
  cout << "Adjon meg " << N << " szamot, kiirjuk oket forditott sorrendben!\n\n";
  int szamok[N], db=0;
  while(db < N) {
    cout << db+1 << ". szam: ";
    cin >> szamok[db++];
  }
  cout << "\nForditott sorrendben:\n";
  while(db--) {
    cout << szamok[db] << '\t';
  }
  cout << endl;
  return 0;
}
