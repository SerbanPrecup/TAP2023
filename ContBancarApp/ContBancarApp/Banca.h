#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Client.h"

using namespace std;

class Banca
{
private:
	string codBanca;
	unsigned int nrclienti;
	vector<Client> clienti;
public:
	Banca(string codBanca, unsigned int nrclienti, vector<Client> clienti);
	Banca(Banca& b);
	string getCodBanca();
	unsigned int getNrClienti();
	vector<Client> getClienti();
	void setCodBanca(string codBanca);
	void setNrClienti(unsigned int nrclienti);
	void setClienti(vector<Client>& clienti);
	void adaugaClient(Client client);
	void afisaredateBanca();
};

