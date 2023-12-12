#include "Banca.h"

// Constructorul cu parametri
Banca::Banca(string codBanca, unsigned int nrclienti, vector<Client> clienti)
{
    this->codBanca = codBanca;
    this->nrclienti = nrclienti;
    this->clienti = clienti;
}

// Constructorul de copiere
Banca::Banca(Banca& b)
{
    this->codBanca = b.getCodBanca();
    this->nrclienti = b.getNrClienti();
    this->clienti = b.getClienti();
}

string Banca::getCodBanca() {
    return codBanca;
}

unsigned int Banca::getNrClienti() {
    return nrclienti;
}

vector<Client> Banca::getClienti() {
    return clienti;
}

void Banca::setCodBanca(string codBanca) {
    this->codBanca = codBanca;
}

void Banca::setNrClienti(unsigned int nrclienti) {
    this->nrclienti = nrclienti;
}

void Banca::setClienti(vector<Client>& clienti) {
    this->clienti = clienti;
}

void Banca::adaugaClient(Client client) {
    clienti.push_back(client);
}

void Banca::afisaredateBanca() {
    cout << "Cod banca: " << codBanca << ", Numar clienti: " << nrclienti << endl;
    for (auto& client : clienti) {
        client.afisaredateClient();
    }
}
