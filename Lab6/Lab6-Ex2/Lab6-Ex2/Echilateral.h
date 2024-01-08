#ifndef ECHILATERAL_H
#define ECHILATERAL_H

#include "Isoscel.h"

class Echilateral : public Isoscel {
public:
    Echilateral(double l);
    double arie() override;
    double perimetru() override;
};

#endif
