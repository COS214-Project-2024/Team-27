#ifndef BUILDINGDECORATOR_H
#define BUILDINGDECORATOR_H

#include <iostream>
using namespace std;

#include "Building.h"

class BuildingDecorator : public Building {
protected:
    Building* decoratedBuilding;
    bool hasBorehole = false;
    bool hasSolarPanel = false;

public:
    explicit BuildingDecorator(Building* building);
    virtual ~BuildingDecorator();

    void setSize(std::string size) override;
    virtual void displayInfo() =0;
    void setState(BuildingState* newState) override;
    BuildingState* getState() override;
    void getName() override;
    void construct() override;
    void operate() override;
    void closeDown() override;
    void damage() override;
    Building* clone() override;
    void useResources() override;
};

#endif