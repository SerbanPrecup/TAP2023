#pragma once
#include "Persoana.h"
class Angajat : public Persoana
{
private:
	string email, departament;
public:
	Angajat(string nume, string CNP, string email, string departament);
	string detalii() override;
	string getDepartament();
};

