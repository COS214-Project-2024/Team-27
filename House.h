#ifndef HOUSE_H
#define HOUSE_H

#include <iostream>
#include <vector>
#include "Building.h"
#include "BuildingState.h"
#include "UnderConstruction.h"
#include "Operational.h"
#include "ClosedDown.h"
#include "Damaged.h"
#include "Citizen.h"
using namespace std;

class BuidlingState;
class House: public Building{
    private:
        string name;
        string size;
        BuildingState* state;
        vector<Citizen*> citizens;
    public:
    virtual ~House() = default;
    House(string name);
    House(string name, string size, BuildingState* state);
    void setSize(string size);
    void displayInfo() override;
    void setState(BuildingState* newState) override;
    BuildingState* getState() override;
    void getName() override;
    void construct() override;
    void operate() override;
    void closeDown() override;
    void damage() override;
    House* clone() override;
    void useResources() override;
    void addResident(Citizen* citizen);
    double getPayableTax();
};

#endif
