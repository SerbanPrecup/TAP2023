#include "Echilateral.h"
#include <cmath>

Echilateral::Echilateral(double l) : Isoscel(l, l) {}

double Echilateral::arie() {
    return sqrt(3) / 4 * pow(l1, 2);
}

double Echilateral::perimetru() {
    return l1 + l2 + l3;
}
