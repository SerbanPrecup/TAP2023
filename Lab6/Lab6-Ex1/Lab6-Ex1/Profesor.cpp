#include <iostream>
#include <string>
#include "Profesor.h"

using namespace std;

Profesor::Profesor(string nume, string CNP, string email, string materie) : Persoana(CNP, nume), email(email), materie(materie) {}

string Profesor::detalii() {
	return "Profesorul " + this->nume + " preda " + this->materie + ".\n";
}

string Profesor::getMaterie() {
	return this->materie;
}