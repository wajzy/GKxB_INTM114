#include <iostream>
using namespace std;

int main() {
  cout << "Szam: ";
  int szam;
  cin >> szam;
  if(szam == 0) cout << '0';
  else {
    cout << szam;
    if(szam>10 and szam<21) cout << "th";
    else if(szam%10 == 1) cout << "st";
    else if(szam%10 == 2) cout << "nd";
    else if(szam%10 == 3) cout << "rd";
    else cout << "th";
  }
}
