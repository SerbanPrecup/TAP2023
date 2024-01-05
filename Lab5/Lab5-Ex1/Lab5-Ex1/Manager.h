#pragma once
#include "Angajat.h"
class Manager: public Angajat
{
private:
	int nrSubordonati;
public:
	Manager(double tarifOrar, int nrOre,int nrSubordonati);

	double getSalar();

};

