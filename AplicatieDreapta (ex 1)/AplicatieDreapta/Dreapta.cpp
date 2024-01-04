#include <iostream>
#include "Dreapta.h"
#include "Punct.h"

using namespace std;

Dreapta::Dreapta(double m, double n)
{
	this->m = m;
	this->n = n;
}
Dreapta::Dreapta(Dreapta& other) {
	this->m = other.m;
	this->n = other.n;
}
Dreapta::~Dreapta() {
	this->m = 0;
	this->n = 0;
}
bool Dreapta::estePeDreapta( const Punct &punct) {
	return punct.getY() == m * punct.getX() + n;
}
bool Dreapta::esteInSemiplanPozitiv(const Punct &punct)
{
	return punct.getY() > m * punct.getX() + n;
}
