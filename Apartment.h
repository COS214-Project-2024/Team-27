#ifndef APARTMENT_H
#define APARTMENT_H

#include <iostream>
#include "Building.h"
#include "BuildingState.h"
using namespace std;
class Building;
class BuildingState;
class Apartment: public Building{
    private:

    public:
        virtual ~Apartment() = default;
        virtual void displayInfo() ;
        virtual void useResources() ;
        virtual void setState(BuildingState* newState);
        virtual BuildingState* getState();
        virtual void getName();
        virtual void construct();
        virtual void operate();
        virtual void closeDown();
        virtual void damage();
        virtual Building* clone();
//     virtual double taxableAmount();
//    virtual void sethasbool(bool b);
//     virtual void sethasSolar(bool b);
};

#endif
