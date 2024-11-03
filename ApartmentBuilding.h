#ifndef APARTMENTBUILDING_H
#define APARTMENTBUILDING_H

#include <iostream>
#include <algorithm>
#include <vector>
#include "Apartment.h"
#include "Unit.h"
#include "BuildingState.h"
#include "Building.h"
#include "UnderConstruction.h"
#include "Operational.h"
#include "ClosedDown.h"
#include "Damaged.h"
using namespace std;

class Building;
class ApartmentBuilding: public Apartment{
    private:
        vector<Unit*> units;
        string name;
        string size;
        BuildingState* state;
    public:
        int numUnits();
        void printUnits();
        ApartmentBuilding(string name);
        ApartmentBuilding(string name, BuildingState* state);
        virtual ~ApartmentBuilding() = default;
        void addUnit(Unit* unit);
        void removeUnit(Unit* unit);
        void displayInfo() override;
        void setState(BuildingState* newState) override;
        BuildingState* getState() override;
        void getName() override;
        void construct() override;
        void operate() override;
        void closeDown() override;
        void damage() override;
        ApartmentBuilding* clone() override;
        void useResources() override;
        void setSize(string size);
};

#endif