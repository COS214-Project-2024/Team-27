#ifndef BUILDING_H
#define BUILDING_H

#include <iostream>
#include "BuildingState.h"
using namespace std;

class BuildingState;
class Building{
    private:
        BuildingState* state;
        double revenue;
    public:
    virtual ~Building() = default;
    virtual void setState(BuildingState* newState)=0;
    virtual void setSize(string size) =0;
    virtual BuildingState* getState()=0;
    virtual void getName()=0;
    virtual void construct()=0;
    virtual void operate()=0;
    virtual void closeDown()=0;
    virtual void damage()=0;
    virtual void displayInfo()=0;
    virtual Building* clone()=0;
    virtual void useResources()=0;
    virtual double getRevenue()=0;
};

#endif