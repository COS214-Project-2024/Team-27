#ifndef BOREHOLEDECORATOR_H
#define BOREHOLEDECORATOR_H

#include <iostream>
#include "Building.h"
#include "BuildingDecorator.h"
using namespace std;


class BoreholeDecorator: public BuildingDecorator{
public:
    explicit BoreholeDecorator(Building* building);
    void displayInfo() override ;
};

#endif