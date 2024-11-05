#ifndef OPERATIONAL_H
#define OPERATIONAL_H

#include <iostream>
#include "ClosedDown.h"
#include "Damaged.h"
#include "UnderConstruction.h"
using namespace std;

class Operational: public BuildingState{
    private:

    public:
    void construct(Building* building) override;
    void operate(Building* building) override;
    void closeDown(Building* building) override;
    void damage(Building* building) override;
};

#endif