#ifndef DREPTUNGHICSOSCEL_H
#define DREPTUNGHICSOSCEL_H

#include "Dreptunghic.h"
#include "Isoscel.h"

class DreptunghicIsoscel : public Dreptunghic, public Isoscel {
public:
    DreptunghicIsoscel(double lEgala, double lDif);
    double arie() override;
    double perimetru() override;
};

#endif
