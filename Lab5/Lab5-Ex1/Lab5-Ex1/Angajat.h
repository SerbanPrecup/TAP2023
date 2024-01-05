#pragma once
#include <iostream>

using namespace std;
class Angajat
{
private:
	double tarifOrar;
	int nrOre;
public:

	Angajat(int nrOre);
	Angajat(double tarifOrar, int nrOre);
	Angajat(Angajat& other);
	~Angajat();
	
	Angajat& operator=(const Angajat& other);
	friend istream& operator>>(istream& is, Angajat& a);
	friend ostream& operator<<(ostream& os, const Angajat& a);

	double getSalar();
	double getTarifOrar();

};

