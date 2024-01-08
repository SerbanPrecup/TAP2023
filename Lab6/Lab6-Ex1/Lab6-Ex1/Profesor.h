#pragma once
#include "Persoana.h"
class Profesor : public Persoana
{
private:
	string email,materie;
public:
	Profesor (string nume, string CNP, string email, string materie);
	string detalii() override;
	string getMaterie();
};

