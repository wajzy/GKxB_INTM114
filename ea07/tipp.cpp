#include <iostream>
#include <cstdlib>
#include <ctime>
#define MIN 1
#define MAX 100
using namespace std;

int main() {
  srand(time(NULL));
  int tipp, szam = MIN + rand()%(MAX-MIN+1);
  cout << "Talald ki a " << MIN << " es " << MAX << " kozotti szamot!\n";
  do {
    cout << "Tipp: "; cin >> tipp;
    if(tipp < szam) cout << "Nagyobbra gondoltam.\n";
    else if(tipp > szam) cout << "Kisebbre gondoltam.\n";
  } while(tipp != szam);
  cout << "Eltalaltad!\n";
  return 0; }
