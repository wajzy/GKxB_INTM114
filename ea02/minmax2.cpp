#include <iostream>
using namespace std;

int main() {
  cout << "Adjon meg nem negativ egesz szamokat, megkeressuk kozottuk a "
       << "minimalisat es a maximalisat.\nKilepes negativ szam megadasaval.\n";
  int db=0, akt; // akt-nak nem kell kezdoertek
  int min, max;
  cout << "Kovetkezo szam: "; // kod elso elofordulasa
  cin >> akt;
  min = max = akt;
  while(akt >= 0) {
    if(akt > max) max = akt; // innen viszont eltuntek feltetelek
    else if(akt < min) min = akt;
    db++;
    cout << "Kovetkezo szam: "; // kod masodik elofordulasa
    cin >> akt;
  }
  if(db > 0) cout <<   "A minimum: " << min << "\nA maximum: " << max << '\n';  
  else cout << "Nem adott meg adatokat.\n";
  return 0;
}
