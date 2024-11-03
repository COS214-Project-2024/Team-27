#ifndef CITYFACADE_H
#define CITYFACADE_H

#include <iostream>
#include "BuildingFactory.h"
#include "ApartmentFactory.h"
#include "CommercialFactory.h"
#include "HouseFactory.h"
#include "LandmarkFactory.h"
#include "Building.h"
#include "Apartment.h"
#include "ApartmentBuilding.h"
#include "Unit.h"
#include "House.h"
#include "Landmark.h"
#include "CommercialBuilding.h"
#include "ConcreteCitizenBuilder.h"
#include "Citizen.h"
#include "CitizenBuilder.h"
#include "CitizenDirector.h"
using namespace std;

class CityFacade{
    private:
        vector<ApartmentBuilding*> apartmentBuildings;
        vector<House*> houses;
        vector<Landmark*> landmarks;
        vector<CommercialBuilding*> commercialBuildings;
        vector<Citizen*> citizens;
    public:
        CityFacade();
        void showAllStats();
        void showBuildingStats();
        void showCitizenStats();
        void showUtilityStats();
        void showServicesStats();
        void showTaxStats();
        void showGrowthStats();
        void showUnits();

        void showBuildings(string type);
        void createAPBuilding();
        void createUnit();
        void createHouse();
        void createLandmark();
        void createCommercial();

        void showCitizens(string type);
        void createCitizen();
        void createChild();
        void createAdult();
        void setCitizenDetails(Citizen* citizen, const std::string& name, int age, double income, int satisfaction, bool isEmployed); 
        void updateCitizens();
        void moveIn();
        void moveIntoHouse();
        void moveIntoApartment();


        

};

#endif