#include "Angajat.h"

#include <iostream>

using namespace std;

Angajat::Angajat(double tarifOrar, int nrOre):tarifOrar(tarifOrar),nrOre(nrOre) {}
Angajat::Angajat(int nrOre) : tarifOrar(5.5), nrOre(nrOre) {}
Angajat::Angajat(Angajat& other) {
	this->tarifOrar = other.tarifOrar;
	this->nrOre = other.nrOre;
}
Angajat::~Angajat() {
	this->nrOre = 0;
	this->tarifOrar = 5.5;
}

double Angajat::getSalar() {
	return nrOre * tarifOrar;
}
double Angajat::getTarifOrar() {
	return tarifOrar;
}

Angajat& Angajat::operator=(const Angajat& other) {
	if (this != &other) 
	{ 
		tarifOrar = other.tarifOrar;
		nrOre = other.nrOre;
	}
	return *this;
}


std::istream& operator>>(std::istream& is, Angajat& angajat) {
	is >> angajat.tarifOrar >> angajat.nrOre;
	return is;
}

std::ostream& operator<<(std::ostream& os, const Angajat& angajat) {
	os << angajat.tarifOrar << "$. Nr Ore: " << angajat.nrOre;
	return os;
}