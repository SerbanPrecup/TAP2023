#pragma once
#include <iostream>
using namespace std;

class Persoana
{
protected:
	string CNP, nume;
public:
	Persoana(string CNP, string nume);
	virtual string detalii()=0;
};

