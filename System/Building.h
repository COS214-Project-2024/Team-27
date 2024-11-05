#ifndef BUILDING_H
#define BUILDING_H

#include <iostream>
#include "BuildingState.h"
#include "Utility.h"
#include <memory>
#include <map>
using namespace std;

class BuildingState;
class Building{
    protected:
        BuildingState* state;
        map<string, unique_ptr<Utility>> utilities;
    public:
    virtual ~Building() = default;
    virtual void setState(BuildingState* newState)=0;
    virtual void setSize(string size) =0;
    virtual BuildingState* getState()=0;
    virtual void getName()=0;
    virtual void getUtilitystats()=0;
    virtual bool fullutilies() = 0;
    virtual void construct()=0;
    virtual void operate()=0;
    virtual void closeDown()=0;
    virtual void damage()=0;
    virtual void displayInfo()=0;
    virtual Building* clone()=0;
    virtual void useResources()=0;
    virtual void addUtility(const string& name, unique_ptr<Utility> util) = 0;
    virtual void removeUtility(const string& name) = 0;
    virtual void notify() = 0;
    virtual void collectwaste(double kg) = 0;
    virtual void usepower(double wt) = 0;
    virtual void usewater(double cm3) = 0;
};

#endif
