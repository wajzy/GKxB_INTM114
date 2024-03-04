#include <iostream>
using namespace std;

int main() {
  string s = "abc";
  int i=0;
  while(i < s.length()) {
    cout << s[i++];
  }
  return 0;
}
