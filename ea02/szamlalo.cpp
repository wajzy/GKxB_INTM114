#include <iostream>
#include <cstdio>
using namespace std;

int main(void) {
  int k, sorDb, szoDb, karDb;
  bool szoban = false;
  cout << "A bemenet karaktereinek, sorainak és szavainak leszámlálása\n"
       << "A bemenet vége: Ctrl+D vagy EOF.\n\n";
  sorDb = szoDb = karDb = 0;
  while((k=cin.get()) != EOF) {
    ++karDb;
    if(k == '\n') ++sorDb;
    if(k==' ' or k=='\n' or k=='\t') szoban = false;
    else if(not szoban) {
      szoban = true;
      ++szoDb;
    }
  }
  cout << "sor = " << sorDb << ", szo = " << szoDb << ", karakter = " << karDb << endl;
  return 0;
}
