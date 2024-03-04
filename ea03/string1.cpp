#include <iostream>
using namespace std;

int main() {
  string s1;
  string s2 = " es Bolka";              // inicializalas
  cout << "s1: " << s1 << '\n';          // ures string!
  s1 = "Lolka";      // literal ertekul adhato stringnek
  s1 += s2;                   // stringek osszefuzhetoek
  cout << s1 << "\nAdjon meg egy szot! ";
  cin >> s2;                  // Szo beolvasasa stringbe
  cout << "A szo hossza: " << s2.length() << '\n';
  // stringek osszehasonlithatoak relacios operatorokkal
  if(s2 == "Frakk") cout << "Megint a regi mese\n";
  cout << s2 << " elso betuje: " << s2[0] << endl;
  return 0;
}
