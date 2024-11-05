#ifndef COMMERCIALFACTORY_H
#define COMMERCIALFACTORY_H

#include <iostream>
#include "BuildingFactory.h"
#include "Building.h"
#include "CommercialBuilding.h"
using namespace std;

class CommercialFactory: public BuildingFactory{
    private:

    public:
        CommercialBuilding* construct(string name) override;
};

#endif