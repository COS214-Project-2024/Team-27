#ifndef LANDMARKFACTORY_H
#define LANDMARKFACTORY_H

#include <iostream>
#include "Building.h"
#include "BuildingFactory.h"
#include "Landmark.h"
using namespace std;

class LandmarkFactory: public BuildingFactory{
    private:

    public:
        Landmark* construct(string name) override;
};

#endif