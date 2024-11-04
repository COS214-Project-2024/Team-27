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
         bool fullutilies();
        void construct() override;
        void operate() override;
        void closeDown() override;
        void getUtilitystats() override;
        void damage() override;
        CommercialBuilding* clone() override;
        void useResources() override;
        string getComName();
    void addUtility(const string &name, unique_ptr<Utility> util) override;
    void removeUtility(const string &name) override;
    void notify() override;
    void collectwaste(double kg) override;
    void usepower(double wt) override;
    void usewater(double cm3) override;
};

#endif