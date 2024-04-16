#ifndef DATUM_H
#define DATUM_H

// Datum struktura es muveletek

#include <iostream>
#include <iomanip>

using namespace std;

struct datum {
  int ev, ho, nap;
};

bool szoko(int ev); // szokoev megallapitas
int napok(int ev, int ho); // honap napjainak szamat adja vissza adott evben
bool ellenoriz(const datum* d); // datum tartalmi ellenorzese
int evNapja(const datum* d); // ev napjanak meghatarozasa ev, ho, napbol
string hetNapja(const datum* d); // het napjanak szamitasa
int bazis(const datum* d, int bazisEv); // bazisEv.01.01 ota eltelt napok szama 
int kulonbseg(const datum* tol, const datum* ig); // ket datum kozott eltelt napok szama
datum hoEsNap(int ev, int evNapja); // nap even beluli szamabol ho es nap szamolasa
void nyomtat(const datum* d); // formazott nyomtatas

#endif
