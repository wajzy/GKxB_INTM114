#include <iostream>
using namespace std;

// Csak paratlan rendu matrixszal mukodik!
int** eloallit(int meret) {
  // Memoriafoglalas
  int** mtx = new int*[meret];
  for(int s=0; s<meret; s++) {
    mtx[s] = new int[meret];
    for(int o=0; o<meret; o++) {
      mtx[s][o] = 0;
    }
  }
  // Feltoltes
  int s=0, o=meret/2;
  for(int n=1; n<=meret*meret; n++) {
    mtx[s][o] = n;
    int i = s-1; if(i==-1) i=meret-1;
    int j = o+1; if(j==meret) j=0;
    if(mtx[i][j] != 0) {
      s++;
    } else { 
      s = i; 
      o = j; 
    } 
  } 
  return mtx;
}

void nyomtat(int** mtx, int meret) {
  for(int s=0; s<meret; s++) {
    for(int o=0; o<meret; o++) {
      cout << mtx[s][o] << '\t';
    } 
    cout << endl;
  }
}

void felszabadit(int** mtx, int meret) {
  for(int s=0; s<meret; s++) {
    delete[] mtx[s];    
  }
  delete[] mtx;
}

int main(void) {
  int meret;
  do {
    cout << "Buvos negyzet merete: ";
    cin >> meret;
  } while(meret%2 == 0);
  int** buvos = eloallit(meret);
  nyomtat(buvos, meret);
  felszabadit(buvos, meret);
  return 0;
}
