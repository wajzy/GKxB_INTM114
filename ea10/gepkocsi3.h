#ifndef GEPKOCSI_H
#define GEPKOCSI_H

// Auto adatok és muvelete

#include "datum3.h"

struct gepkocsi {
	datum gyartas;
	datum utolsoMuszaki;
	int muszakiDb;
};

datum muszakiErvenyesseg(const gepkocsi* gk); // Meddig ervenyes a muszaki?

#endif
