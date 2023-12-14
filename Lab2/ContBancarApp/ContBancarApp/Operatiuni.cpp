#include "Operatiuni.h"

// Metoda pentru calcularea dob�nzii pentru conturile �n RON
float Operatiuni::calculDobandaRON(float suma) {
    if (suma < 500)
        return suma * 0.003; // Dob�nd? de 0.3% pentru sume sub 500 RON
    else
        return suma * 0.008; // Dob�nd? de 0.8% pentru sume >= 500 RON
}

// Metoda pentru calcularea dob�nzii pentru conturile �n EUR
float Operatiuni::calculDobandaEUR(float suma) {
    return suma * 0.001; // Dob�nd? de 0.1% pentru euro
}

// Metoda pentru depunere �n cont
void Operatiuni::depunere(ContBancar& cont, float suma) {
    cont.setSuma(cont.getSuma() + suma);
}

// Metoda pentru extragere din cont
void Operatiuni::extragere(ContBancar& cont, float suma) {
    if (cont.getSuma() >= suma) {
        cont.setSuma(cont.getSuma() - suma);
    }
    else {
        cout << "Fonduri insuficiente!" << endl;
    }
}

// Metoda pentru transfer �ntre conturi
void Operatiuni::transfer(ContBancar& contSursa, ContBancar& contDestinatie, float suma) {
    if (contSursa.getMoneda() == "RON" && contDestinatie.getMoneda() == "RON") {
        if (contSursa.getSuma() >= suma) {
            contSursa.setSuma(contSursa.getSuma() - suma);
            contDestinatie.setSuma(contDestinatie.getSuma() + suma);
        }
        else {
            cout << "Fonduri insuficiente pentru transfer!" << endl;
        }
    }
    else {
        cout << "Transferul se poate face doar �ntre conturi �n RON!" << endl;
    }
}
