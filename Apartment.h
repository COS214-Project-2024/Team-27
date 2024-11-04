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
double Tamount;

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
  double totalAmount(); 
   virtual void sethasbool(bool b);
    virtual void sethasSolar(bool b);
       virtual bool gethasbool();
    virtual bool gethasSolar();


};

#endif
