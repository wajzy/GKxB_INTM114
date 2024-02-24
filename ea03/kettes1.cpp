#include <iostream>
using namespace std;

int main() {
  string b;
  unsigned d, i;
  cout << "Adjon meg egy kettes szamrendszerbeli szamot!\n";
  cin >> b;
  d = i = 0;
  while(i < b.length()) {
    d = d*2 + b[i]-'0'; i++;
  }
  cout << "Tizes szamrendszerben: " << d << endl;
  return 0;
}
