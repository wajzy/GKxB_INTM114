#include "datum2.h"

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
