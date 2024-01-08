#include "DreptunghicIsoscel.h"
#include <cmath>

DreptunghicIsoscel::DreptunghicIsoscel(double lEgala ,double lDif) : Dreptunghic(lEgala, lEgala, lDif), Isoscel(lEgala, lDif) {}

double DreptunghicIsoscel::arie() {
    double s = (Triunghi::l1 + Triunghi::l2 + Triunghi::l3) / 2;
    return sqrt(s * (s - Triunghi::l1) * (s - Triunghi::l2) * (s - Triunghi::l3));
}

double DreptunghicIsoscel::perimetru() {
    return Triunghi::l1 + Triunghi::l2 + Triunghi::l3;
}
