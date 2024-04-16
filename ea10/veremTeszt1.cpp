#include <iostream>
#include "verem1.h"

using namespace std;

int main() {
  berak("alma");
  berak("barack");
  berak("citrom");

  while(not ures()) {
    cout << kivesz() << endl;
  }
}
