// Auto adatok és muvelete

#include "datum2.h"

struct gepkocsi {
	datum gyartas;
	datum utolsoMuszaki;
	int muszakiDb;
};

datum muszakiErvenyesseg(const gepkocsi* gk); // Meddig ervenyes a muszaki?
