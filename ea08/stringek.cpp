#include <iostream>
#include <string>
#include <cstring> // strlen, strcopy, strcat
using namespace std;

void kiir(const char* cstr) {
  const char* ment = cstr;
  cout << "ASCII:\t"; 
  cstr--;
  do {
    cstr++;
    cout << int(*cstr) << '\t'; 
  } while(*cstr!='\0');
  cout << "\nOlv.:\t";
  for(cstr=ment; *cstr!='\0'; cstr++) {
    cout << *cstr << '\t'; 
  }
  cout << endl;
}

int main() {
  kiir("");
  kiir("C");
  kiir("C-stilus");
  string h = "Hello";
  kiir(h.c_str());
  char v[] = " vilag!\n";
  char* cs = new char[h.length() + strlen(v) + 1];
  strcpy(cs, h.c_str());
  strcat(cs, v);
  cout << cs;
  delete[] cs;
  return 0;
}
