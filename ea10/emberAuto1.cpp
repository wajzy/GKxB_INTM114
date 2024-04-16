#include <iostream>
#include <iomanip>
using namespace std;

// Datum struktura es muveletek

struct datum {
  int ev, ho, nap;
};

bool szoko(int ev) { // szokoev megallapitas
  return (ev%4==0 and ev%100!=0) or ev%400==0;
}

int napok(int ev, int ho) { // honap napjainak szamat 
  int nt[12] =              // adja vissza adott evben
    { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
  if(ho == 2) {
    if(szoko(ev)) return 29; else return 28;
  } else {
    return nt[ho-1];
  }
}

bool ellenoriz(const datum* d) {     // datum tartalmi ellenorzese
  if(d->ho<1 or d->ho>12) return false;
  int n = napok(d->ev, d->ho);
  if(d->nap<1 or d->nap>n) return false;
  return true;
}

int evNapja(const datum* d) {  // ev napjanak meghatarozasa
  int n = d->nap;              // ev, ho, napbol
  for(int h=1; h<d->ho; h++) {
    n += napok(d->ev, h);
  }
  return n;
}

string hetNapja(const datum* d) { // het napjanak 
  int hn;                         // szamitasa
  char seged[12] = { 6, 2, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };
  string napNev[7] = { "hetfo", "kedd", "szerda", 
    "csutortok", "pentek", "szombat", "vasarnap" };
  hn = d->ev*1.25 + d->nap;
  hn += seged[d->ho-1];
  if ((d->ev%4==0) and d->ho<3) hn--;
  while (hn > 7) hn -= 7;
  return napNev[hn==1 ? 6 : hn-2];
}

int bazis(const datum* d, int bazisEv=0) { // bazisEv.01.01 ota eltelt napok szama 
  int b = 0;
  for(int e=bazisEv; e<d->ev; e++) {
    b += 365 + szoko(e);
  }
  for(int h=1; h<d->ho; h++) {
    b += napok(d->ev, h);
  }
  b += d->nap;
  return b;
}

int kulonbseg(const datum* tol, const datum* ig) {
  int bazisEv = tol->ev < ig->ev ? tol->ev : ig->ev;
  return bazis(ig, bazisEv)-bazis(tol, bazisEv); // ket datum kozott
}                                                // eltelt napok szama

datum hoEsNap(int ev, int evNapja) { // nap even beluli 
  datum d = { ev, 0, evNapja };      // szamabol ho es 
  int h, n;                          // nap szamolasa
  for(h=1; d.nap>(n=napok(ev, h)); h++) {
    d.nap -= n;
  }
  d.ho = h;
  return d;
}

void nyomtat(const datum* d) { // formazott nyomtatas
	cout << setw(2) << setfill('0') << d->ev << '.' 
	     << setw(2) << setfill('0') << d->ho << '.' 
	     << setw(2) << setfill('0') << d->nap;
}

// Sofor adatok es muvelete

struct ember {
  string nev;
  datum szuletes;
};

bool elmult17(const ember* e, const datum* ma) {
  datum eppen17 = e->szuletes;
  eppen17.ev += 17;
  return kulonbseg(&eppen17, ma) >= 0;
}

// Auto adatok és muvelete

struct gepkocsi {
  datum gyartas;
  datum utolsoMuszaki;
  int muszakiDb;
};

datum muszakiErvenyesseg(const gepkocsi* gk) {
  datum lejar = gk->utolsoMuszaki;
  if(gk->muszakiDb > 1) {
    lejar.ev += 2;
  } else {
    lejar.ev += 4;
  }
  return lejar;
}

// Foprogram

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
