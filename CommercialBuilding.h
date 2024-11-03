#ifndef COMMERCIALBUILDING_H
#define COMMERCIALBUILDING_H

#include <iostream>
#include "Building.h"
#include "Unit.h"
#include "BuildingState.h"
#include "UnderConstruction.h"
#include "Operational.h"
#include "ClosedDown.h"
#include "Damaged.h"
using namespace std;


class CommercialBuilding: public Building{
    private:
        string name;
        string size;
        BuildingState* state;
    public:
        CommercialBuilding(string name);
        CommercialBuilding(string name, string size, BuildingState* state);
        void setSize(string size);
        void displayInfo() override;
        void setState(BuildingState* newState) override;
        BuildingState* getState() override;
        void getName() override;
        void construct() override;
        void operate() override;
        void closeDown() override;
        void damage() override;
        CommercialBuilding* clone() override;
        void useResources() override;
};

#endif