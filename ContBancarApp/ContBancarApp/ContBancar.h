#pragma once
#include <iostream>
#include <string>

using namespace std;

class ContBancar
{
private:
	string numarCont;
	float suma;
	string moneda;
public:
	ContBancar(string numarCont, float suma, string moneda);
	ContBancar(const ContBancar& c);
	string getNumarCont();
	float getSuma();
	string getMoneda();
	void setNumarCont(string numarCont);
	void setSuma(float suma);
	void setMoneda(string moneda);
	void transfer(ContBancar& contDest, float suma);
	void extragere(float suma);
	void afisaredateCont();

};

