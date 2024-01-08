#ifndef ISOSCEL_H
#define ISOSCEL_H

#include "Triunghi.h"

class Isoscel : public Triunghi {
public:
    Isoscel(double lEgala, double lDif);
    double arie() override;
    double perimetru() override;
};

#endif
