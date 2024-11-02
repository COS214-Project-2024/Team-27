#ifndef GOVERNMENTMEMENTO_H
#define GOVERNMENTMEMENTO_H

#include <vector>
#include "Citizen.h"
#include "Building.h"
#include <iostream>

using namespace std ;

class GovernmentMemento{
    private :
        double buildingTaxRate;
        double citizenTaxRate ;
        vector<Citizen*> citizens ;
        vector<Building*> buildings ;

    public :
        GovernmentMemento(double b, double c,vector<Building*> buildingsC, vector<Citizen*> CitizenC);
        void getDetails();
        double getBuildingTaxRate() const ;
        double getCitizenTaxRate() const ;
        const vector<Citizen*>& getCitizens() const ;
        const vector<Building*>& getBuildings() const ;
};


#endif