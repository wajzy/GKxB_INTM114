#include <iostream>
using namespace std;

int main(void) {
  int i;
  cout << "Az i valtozo memoriacime: " << &i << '\n';
  struct koordinata { int x, y; } k;
  cout << "A k struktura memoriacime: " << &k
       << "\nk.x helye: " << &k.x << ", k.y helye: " << &k.y << '\n';
  double dt[2];
  cout << "A dt tomb memoriacime: " << &dt
       << "\ndt[0] helye: " << &dt[0] << ", dt[1] helye: " << &dt[1] << '\n';
  return 0;
}
