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
#include "Government.h"
using namespace std;

class CityFacade{
    private:
        vector<ApartmentBuilding*> apartmentBuildings;
        vector<House*> houses;
        vector<Landmark*> landmarks;
        vector<CommercialBuilding*> commercialBuildings;

        Government* government ;
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
        

};

#endif