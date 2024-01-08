#pragma once
#include "Persoana.h"
class Student: public Persoana
{
private:
	string email;
	float nota;
public:
	Student(string nume, string CNP, string email, float nota);
	float getNota();
	string detalii() override;
};

