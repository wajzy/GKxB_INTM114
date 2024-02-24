#include <iostream>
using namespace std;
int main(void) {
  bool helytelen;
  string neptun;       // karakterlanc tarolasara szolgalo C++ tipus
  do {
    helytelen = false;
    cout << "Adja meg a Neptun kodjat: "; cin >> neptun;
    if(neptun.length() != 6) { // karakterlanc hosszanak lekerdezese
      cout << "Hat karakterbol kell allnia!\n"; helytelen = true;
    } else {
      unsigned i=0;
      while(not helytelen and i<neptun.length()) {
        char k = neptun[i];
        bool szamjegy = k>='0' and k<='9';
        bool nagybetu = k>='A' and k<='Z';
        bool kisbetu  = k>='a' and k<='z';
        if(not szamjegy and not nagybetu and not kisbetu) {
          cout << "Csak szamjegyeket es betuket tartalmazhat!\n";
          helytelen = true; }
        i++; } }
  } while(helytelen);
  cout << "Rendben.\n";
  return 0; }
