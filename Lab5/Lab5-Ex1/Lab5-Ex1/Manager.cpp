#include "Manager.h"

Manager::Manager(double tarifOrar, int nrOre,int nrSubordonati) : Angajat(tarifOrar, nrOre),nrSubordonati(nrSubordonati) {}

double Manager::getSalar() {
	return Angajat::getSalar() * 1.5;
}
