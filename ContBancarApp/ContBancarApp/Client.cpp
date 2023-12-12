#include "Client.h"

// Constructorul cu parametri
Client::Client(string nume, string prenume, string adresa,
    unsigned int nrconturi, vector<ContBancar> conturi)
{
    this->nume = nume;
    this->prenume = prenume;
    this->adresa = adresa;
    this->nrconturi = nrconturi;
    this->conturi = conturi;
}

// Constructorul de copiere
Client::Client(const Client& c) {
    this->nume = c.nume;
    this->prenume = c.prenume;
    this->adresa = c.adresa;
    this->nrconturi = c.nrconturi;
    this->conturi = c.conturi;
}

string Client::getNume() {
    return nume;
}

string Client::getPrenume() {
    return prenume;
}

string Client::getAdresa() {
    return adresa;
}

unsigned int Client::getNrConturi() {
    return nrconturi;
}

vector<ContBancar> Client::getConturi() {
    return conturi;
}

void Client::setNume(string nume) {
    this->nume = nume;
}

void Client::setPrenume(string prenume) {
    this->prenume = prenume;
}

void Client::setAdresa(string adresa) {
    this->adresa = adresa;
}

void Client::setNrConturi(unsigned int nrconturi) {
    this->nrconturi = nrconturi;
}

void Client::setConturi(vector<ContBancar> conturi) {
    this->conturi = conturi;
}

void Client::adaugaCont(ContBancar cont) {
    conturi.push_back(cont);
}

void Client::afisaredateClient() {
    cout << "Nume: " << nume << " " << prenume << ", Adresa: " << adresa << endl;
    for (auto& cont : conturi) {
        cont.afisaredateCont();
    }
}