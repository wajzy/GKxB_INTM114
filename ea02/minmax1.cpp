#include <iostream>
using namespace std;

int main() {
  cout << "Adjon meg nem negativ egesz szamokat, megkeressuk kozottuk a "
       << "minimalisat es a maximalisat.\nKilepes negativ szam megadasaval.\n";
  int db=0, akt=1; // inicializacio
  int min, max;
  while(akt >= 0) {
    cout << "Kovetkezo szam: ";
    cin >> akt;
    if(akt >= 0) {
      if(db == 0) min = max = akt; // tobbszoros hozzarendeles
      else if(akt > max) max = akt;
      else if(akt < min) min = akt;
      db++; // noveles eggyel
    }
  }
  if(db > 0) cout <<   "A minimum: " << min << "\nA maximum: " << max << '\n';
  else cout << "Nem adott meg adatokat.\n";
  return 0;
}
