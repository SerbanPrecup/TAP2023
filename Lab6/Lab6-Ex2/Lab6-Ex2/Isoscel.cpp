#include "Isoscel.h"
#include <cmath>

Isoscel::Isoscel(double lEgala, double lDif) : Triunghi(lEgala, lEgala, lDif) {}

double Isoscel::arie() {
    double inaltime = sqrt(pow(l1, 2) - pow(l3 / 2, 2)); 
    return (l3 * inaltime) / 2; 
}


double Isoscel::perimetru() {
    return l1 + l2 + l3;
}
