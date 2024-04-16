#include "ember2.h"
#include "gepkocsi2.h"
#include "datum2.h"

int main() {
  ember e = { "Gizike", { 2000, 1, 2} };
  gepkocsi gk = { { 2017, 10, 3}, { 2023, 10, 7}, 2 };
  datum ma = { 2024, 4, 16 };
  
  if(elmult17(&e, &ma)) {
    datum erv = muszakiErvenyesseg(&gk);
    if(kulonbseg(&ma, &erv) >= 0) {
      cout << "Hajtsunk a naplementebe!\n";
    } else {
      cout << "Foglalkozni kell a verdaval.\n";
    }
  } else {
    cout << "Tul fiatal vagy meg a vezeteshez.\n";
  }
  
  return 0;
}
