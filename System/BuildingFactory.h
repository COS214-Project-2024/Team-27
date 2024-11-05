#ifndef BUILDINGFACTORY_H
#define BUILDINGFACTORY_H

#include <iostream>
#include "Building.h"
using namespace std;

class Building;
class BuildingFactory{
    private:

    public:
        virtual Building* construct(string name) =0;
};

#endif