#pragma once
#ifndef DREAPTA_H
#define DREAPTA_H

#include "Punct.h"

class Punct;

class Dreapta
{
private:
	double m, n;
public:
	Dreapta(double m, double n);
	Dreapta(Dreapta& d);
	~Dreapta();

	bool estePeDreapta(const Punct &punct) ;
	bool esteInSemiplanPozitiv(const Punct &punct);
};

#endif

