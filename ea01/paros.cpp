#include<iostream>
using namespace std;
int main() {
  int szam;
  cout << "Adjon meg egy egeszet, amirol eldontjuk, "
       << "hogy paros-e vagy paratlan!" << endl;
  cin >> szam;
  if(szam%2 == 0) {
    cout << "A szam paros." << endl;
  } else {
    cout << "A szam paratlan." << endl;
  }
  return 0;
}
