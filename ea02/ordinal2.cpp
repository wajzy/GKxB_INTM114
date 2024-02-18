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
    else switch(szam%10) {
      case 1: cout << "st"; break;
      case 2: cout << "nd"; break;
      case 3: cout << "rd"; break;
      default: cout << "th";
    }
  }
}
