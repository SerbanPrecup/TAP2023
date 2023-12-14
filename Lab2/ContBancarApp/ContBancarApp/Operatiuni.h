#pragma once
#include "ContBancar.h"

class Operatiuni {
public:
    static float calculDobandaRON(float suma);
    static float calculDobandaEUR(float suma);
    static void depunere(ContBancar& cont, float suma);
    static void extragere(ContBancar& cont, float suma);
    static void transfer(ContBancar& contSursa, ContBancar& contDestinatie, float suma);
};
