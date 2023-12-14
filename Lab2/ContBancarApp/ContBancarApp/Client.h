#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "ContBancar.h"
#include "Operatiuni.h"

using namespace std;

class Client : Operatiuni
{
private:
	string nume;
	string prenume;
	string adresa;
	unsigned int nrconturi;
	vector<ContBancar> conturi;
public:
	Client(string nume, string prenume, string adresa, unsigned int nrconturi, vector<ContBancar> conturi);
	Client(const Client& c);
	string getNume();
	string getPrenume();
	string getAdresa();
	unsigned int getNrConturi();
	vector <ContBancar> getConturi();
	void setNume(string nume);
	void setPrenume(string prenume);
	void setAdresa(string adresa);
	void setNrConturi(unsigned int nrconturi);
	void setConturi(vector<ContBancar> conturi);
	void adaugaCont(ContBancar cont);
	void afisaredateClient();
};

