#ifndef BUILDINGSTATE_H
#define BUILDINGSTATE_H

#include <iostream>
#include "Building.h"
using namespace std;

class Building;
class BuildingState{
    private:

    public:
    virtual void construct(Building* building) = 0;
    virtual void operate(Building* building) = 0;
    virtual void closeDown(Building* building) = 0;
    virtual void damage(Building* building) = 0;
};

#endif