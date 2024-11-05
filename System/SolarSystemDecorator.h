#ifndef SOLARSYSTEMDECORATOR_H
#define SOLARSYSTEMDECORATOR_H

#include <iostream>
using namespace std;
#include "BuildingDecorator.h"

class SolarSystemDecorator : public BuildingDecorator{
public:
    explicit SolarSystemDecorator(Building* building);
    void displayInfo() override ;
};

#endif