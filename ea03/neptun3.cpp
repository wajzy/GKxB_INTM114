#include <iostream>
#include <cctype> // isalnum() miatt
using namespace std;
int main(void) {
  bool helytelen;
  string neptun;
  do {
    helytelen = false;
    cout << "Adja meg a Neptun kodjat: "; cin >> neptun;
    if(neptun.length() != 6) { // karakterlanc hosszanak lekerdezese
      cout << "Hat karakterbol kell allnia!\n"; helytelen = true;
    } else {
      unsigned i=0;
      while(not helytelen and i<neptun.length()) {
        if(not isalnum(neptun[i])) { // alfanumerikus karakter?
          cout << "Csak szamjegyeket es betuket tartalmazhat!\n";
          helytelen = true; }
        i++; } }
  } while(helytelen);
  cout << "Rendben.\n";
  return 0; }
