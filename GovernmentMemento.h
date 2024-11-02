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
        int savedPopulation;
        int savedNumberOfBuildings ;
        int savedEconomicGrowthRate ;
        

    public :
        GovernmentMemento(double b, double c,int population, int numBuildings, double econRate, vector<Building*> buildingsC, vector<Citizen*> CitizenC);
        void getDetails();
        double getBuildingTaxRate() const ;
        double getCitizenTaxRate() const ;
        int getSavedPopulation() const ;
        int getSavedNumberOfBuildings() const ;
        double getSavedEconomicGrowthRate() const ;

        const vector<Citizen*>& getCitizens() const ;
        const vector<Building*>& getBuildings() const ;
};


#endif