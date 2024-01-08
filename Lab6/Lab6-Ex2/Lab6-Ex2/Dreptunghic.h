#ifndef DREPTUNGHIC_H
#define DREPTUNGHIC_H

#include "Triunghi.h"

class Dreptunghic : public Triunghi {
public:
    Dreptunghic(double l1, double l2, double l3);
    double arie() override;
    double perimetru() override;
};

#endif
