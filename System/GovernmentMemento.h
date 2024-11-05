#ifndef GOVERNMENTMEMENTO_H
#define GOVERNMENTMEMENTO_H

#include <vector>

#include "Citizen.h"
#include "Building.h"
#include "ApartmentBuilding.h"
#include "House.h"
#include "Landmark.h"
#include "CommercialBuilding.h"
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

        vector<ApartmentBuilding*> apartmentBuildings;
        vector<House*> houses;
        vector<Landmark*> landmarks;
        vector<CommercialBuilding*> commercialBuildings;
        

    public :
        GovernmentMemento(double b, double c,int population, int numBuildings, double econRate, vector<Building*> buildingsC, vector<Citizen*> CitizenC);
        GovernmentMemento(vector<Citizen*> citizens, vector<ApartmentBuilding*> apartmentBuildings, vector<House*> houses, vector<Landmark*> landmarks, vector<CommercialBuilding*> commercialBuildings);
        void getDetails();
        double getBuildingTaxRate() const ;
        double getCitizenTaxRate() const ;
        int getSavedPopulation() const ;
        int getSavedNumberOfBuildings() const ;
        double getSavedEconomicGrowthRate() const ;

        const vector<Citizen*>& getCitizens() const ;
        const vector<Building*>& getBuildings() const ;

        vector<ApartmentBuilding*> getAPBuildings();
        vector<House*> getHBuildings();
        vector<Landmark*> getLBuildings();
        vector<CommercialBuilding*> getComBuildings();
};


#endif
