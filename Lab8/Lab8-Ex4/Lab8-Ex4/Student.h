#pragma once
#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
	string CNP;
	string nume[2];
	float notaLaborator, notaExamen;
	unsigned int nrAbsente;
	Student(string CNP, string nume[], float notaLaborator, float notaExamen, unsigned int nrAbsente) {
		this->CNP = CNP;
		this->nume[0] = nume[0];
		this->nume[1] = nume[1];
		this->notaLaborator = notaLaborator;
		this->notaExamen = notaExamen;
		this->nrAbsente = nrAbsente;
	}
	bool operator<(const Student& other) const;
	bool operator==(const Student& other) const;
	bool operator!=(const Student& other) const;

};