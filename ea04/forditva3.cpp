#include <iostream>
#define N 5
using namespace std;

int main() {
  cout << "Adjon meg " << N << " szamot, kiirjuk oket forditott sorrendben!\n\n";
  int szamok[N], db;
  for(db=0; db<N; db++) {
    cout << db+1 << ". szam: ";
    cin >> szamok[db];
  }
  cout << "\nMegforditva:\n";
  for(db=N-1; db>=0; db--) {
    cout << szamok[db] << '\t';
  }
  cout << endl;
  return 0;
}
