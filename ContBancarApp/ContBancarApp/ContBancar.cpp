#include "ContBancar.h"

// Constructorul cu parametri
ContBancar::ContBancar(string numarCont, float suma, string moneda) {
    this->numarCont = numarCont;
    this->suma = suma;
    this->moneda = moneda;
}

// Constructorul de copiere
ContBancar::ContBancar(const ContBancar& c) {
    this->numarCont = c.numarCont;
    this->suma = c.suma;
    this->moneda = c.moneda;
}

string ContBancar::getNumarCont() {
    return numarCont;
}

float ContBancar::getSuma() {
    return suma;
}

string ContBancar::getMoneda() {
    return moneda;
}

void ContBancar::setNumarCont(string numarCont) {
    this->numarCont = numarCont;
}

void ContBancar::setSuma(float suma) {
    this->suma = suma;
}

void ContBancar::setMoneda(string moneda) {
    this->moneda = moneda;
}

void ContBancar::transfer(ContBancar& contDest, float suma) {
    // implementarea metodei transfer
}

void ContBancar::extragere(float suma) {
    // implementarea metodei extragere
}

void ContBancar::afisaredateCont() {
    cout << "Numar cont: " << numarCont << ", Suma: " << suma << " " << moneda << endl;
}
