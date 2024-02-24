#include <iostream>
using namespace std;
int main() {
  string b; char c; int d;
  cout << "Adjon meg egy tizes szamrendszerbeli szamot!\n";
  cin >> d;
  while(d > 0) {
    c = d%2 + '0'; b = c + b; d /= 2;
  }
  cout << "Kettes szamrendszerben: " << b << endl;
  return 0;
}
