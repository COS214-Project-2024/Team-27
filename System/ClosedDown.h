#ifndef CLOSEDDOWN_H
#define CLOSEDDOWN_H

#include <iostream>
#include "BuildingState.h"
#include "Building.h"
#include "Operational.h"
#include "UnderConstruction.h"
#include "Damaged.h"
using namespace std;

class ClosedDown: public BuildingState{
    private:

    public:
    void construct(Building* building) override;
    void operate(Building* building) override;
    void closeDown(Building* building) override;
    void damage(Building* building) override;
};

#endif