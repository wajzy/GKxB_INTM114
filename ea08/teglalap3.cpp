#include <iostream>
using namespace std;
#define MINX 0
#define MAXX 79
#define MINY 0
#define MAXY 24

struct koordinata {
  int x, y;
};

struct teglalap {
  koordinata bf, ja;
  char c;
};

bool takarja(teglalap t, int s, int o) {
  return (t.bf.x<=o and t.ja.x>=o) and
         (t.bf.y<=s and t.ja.y>=s);
}

void rajzol(teglalap tt[], int db) {
  for(int s=MINY; s<=MAXY; s++) {
    for(int o=MINX; o<=MAXX; o++) {
      bool takarasban = false;
      for(int t=db-1; t>=0 and not takarasban; t--) {
        if(takarja(tt[t], s, o)) {
          cout << tt[t].c; takarasban = true;
        }
      }
      if(not takarasban) cout << ' ';
    }
    cout << endl;
  }
}

bool bekerBFX(int db, int min, int max, int* k) {
  bool folytat;
  do {
    cout << db << ". teglalap BF sarok X: [" << MINX 
         << ", " << MAXX-1 << "] (negativra vege) ";
    cin >> *k;
    folytat = *k>=0;
  } while(folytat && (*k<MINX or *k>MAXX-1));
  return folytat;
}

int beker(int db, string s, int min, int max) {
  int k;
  do {
    cout << db << ". teglalap " << s << '[' 
         << min << ", " << max << "] ";
    cin >> k;
  } while(k<min or k>max);
  return k; 
}

int bekeres(teglalap** tt) {
  int db=0, osszes = 2, bfx;
  bool folytat;
  *tt = new teglalap[osszes];
  do {
    cerr << "\t[Felhasznalva: " << db << ", elemszam: " 
         << osszes << "]\n";
    folytat = bekerBFX(db+1, MINX, MAXX-1, &bfx);
    if(folytat) {
      if(db == osszes) {
        cerr << "\t[Memoriafoglalas + mozgatas]\n";
        osszes += 2;
        teglalap* tt2 = new teglalap[osszes];
        for(int i=0; i<db; i++) {
          *(tt2+i) = *((*tt)+i); // tt2[i] = (*tt)[i];
        }
        delete[] *tt;
        *tt = tt2;
      }
      (*tt)[db].bf.x = bfx;
      (*tt)[db].bf.y = beker(db+1, "BF sarok Y", 
                          MINY, MAXY-1);
      (*tt)[db].ja.x = beker(db+1, "JA sarok X", 
                          (*tt)[db].bf.x+1, MAXX);
      (*tt)[db].ja.y = beker(db+1, "JA sarok Y", 
                          (*tt)[db].bf.y+1, MAXY);
      cout << db+1 << ". teglalap rajzoló karaktere: ";
      cin >> (*tt)[db].c;
      db++;
    }
  } while(folytat);
  return db;
}

int main() {
  teglalap* tt; int db;
  cout << "Rajzprogram - adja meg a téglalapok adatait!\n";
  db = bekeres(&tt);
  rajzol(tt, db);
  delete[] tt;
  return 0; 
}
