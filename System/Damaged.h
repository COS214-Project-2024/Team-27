#ifndef DAMAGED_H
#define DAMAGED_H

#include <iostream>
#include "ClosedDown.h"
#include "UnderConstruction.h"
#include "Operational.h"
using namespace std;

class Damaged: public BuildingState{
    private:

    public:
    void construct(Building* building) override;
    void operate(Building* building) override;
    void closeDown(Building* building) override;
    void damage(Building* building) override;
};

#endif