#include <iostream>
#include <cstdio>
using namespace std;
int main() {
  cout << "Szamjegyek, ures- es egyeb karakterek leszamlalasa\n"
       << "a bemeneten EOF-ig vagy Ctrl+D-ig.\n\n";
  int k, feher=0, egyeb=0;
  int nulla=0, egy=0, ketto=0, harom=0, negy=0, ot=0, hat=0, het=0, nyolc=0, kilenc=0; // :(
  while((k=cin.get()) != EOF){
    switch(k) {                    // Ronda, mint egy loharapas!
      case '0': nulla++; break;
      case '1': egy++; break;
      case '2': ketto++; break;
      case '3': harom++; break;
      case '4': negy++; break;
      case '5': ot++; break;
      case '6': hat++; break;
      case '7': het++; break;
      case '8': nyolc++; break;
      case '9': kilenc++; break;
      case ' ': case '\n': case '\t': feher++; break;
      default: egyeb++; break;
    }
  }
  cout << "Szamjegyek:\n";
  cout << "Nulla:\t" << nulla << " db\n"; // Uram irgalmazz!
  cout << "Egy:\t" << egy << " db\n";
  cout << "Ketto:\t" << ketto << " db\n";
  cout << "Harom:\t" << harom << " db\n";
  cout << "Negy:\t" << negy << " db\n";
  cout << "Ot:\t" << ot << " db\n";
  cout << "Hat:\t" << hat << " db\n";
  cout << "Het:\t" << het << " db\n";
  cout << "Nyolc:\t" << nyolc << " db\n";
  cout << "Kilenc:\t" << kilenc << " db\n";
  cout << "Ures karakterek: " << feher << ", egyeb: " << egyeb << endl;
  return 0;
}
