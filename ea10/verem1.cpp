#include "verem1.h"
using namespace std;

// hatokor korlatozas a verem1.cpp-re
static string verem[VEREM_MAX];
static int n = 0;

bool berak(string s) {
  if(n < VEREM_MAX) {
    verem[n] = s;
    n++;
    return true;
  } else {
    return false;
  }
}

string kivesz() {
  if(n > 0) {
    n--;
    return verem[n];
  } else {
    return "";
  }
}

bool ures() {
  return n==0;
}
