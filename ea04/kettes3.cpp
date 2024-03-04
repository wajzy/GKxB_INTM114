#include <iostream>
using namespace std;
int main() {
  string b; int d;
  cout << "Adjon meg egy tizes "
       << "szamrendszerbeli szamot!\n";
  for(cin>>d; d>0; d/=2) {
    b = char(d%2 + '0') + b;
  }
  cout << "Kettes szamrendszerben: " << b
       << endl;
  return 0;
}
