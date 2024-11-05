#ifndef APARTMENTFACTORY_H
#define APARTMENTFACTORY_H

#include <iostream>
#include "Building.h"
#include "BuildingFactory.h"
#include "Unit.h"
#include "ApartmentBuilding.h"
using namespace std;

class ApartmentFactory: public BuildingFactory{
    private:

    public:
        Unit* createUnit(int unitNumber, string size);
        ApartmentBuilding* construct(string name) override;
};

#endif