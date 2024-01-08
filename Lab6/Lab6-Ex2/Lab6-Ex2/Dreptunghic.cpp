#include "Dreptunghic.h"
#include <cmath>

Dreptunghic::Dreptunghic(double l1, double l2, double l3) : Triunghi(l1, l2, l3) {}

double Dreptunghic::arie() {
    double semiperimetru = (l1 + l2 + l3) / 2.0;
    return (l1 * l2) / 2.0;
}

double Dreptunghic::perimetru() {
    return l1 + l2 + l3;
}
