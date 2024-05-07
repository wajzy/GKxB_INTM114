#include <iostream>
#include "sor2.h"
using namespace std;

int main() {
  berak(1); berak(2); berak(3); berak(4);
  cout << kivesz() << '\n';
  cout << kivesz() << '\n';
  berak(6);
  cout << kivesz() << '\n';
  cout << kivesz() << '\n';
  cout << kivesz() << '\n';
  // nincs mit kivenni
  cout << kivesz() << '\n';
  return 0;
}
