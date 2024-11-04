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
#include "Transport.h"
#include "Walk.h"
#include "Taxi.h"
#include "Cycle.h"
#include "Bus.h"
#include "BuildingMaterials.h"

#include "Governemnt.h"
#include <cstdlib>
#include <ctime>
using namespace std;

class CityFacade{
    private:
        vector<ApartmentBuilding*> apartmentBuildings;
        vector<House*> houses;
        vector<Landmark*> landmarks;
        vector<CommercialBuilding*> commercialBuildings;
        vector<Citizen*> citizens;
        BuildingMaterials* materials;
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
        void manageBuildingStates();

        void createCitizen();
        void createChild();
        void createAdult();
        void setCitizenDetails(Citizen* citizen, const std::string& name, int age, double income, int satisfaction, bool isEmployed); 
        void updateCitizens();

        void moveIn();
        void moveIntoHouse();
        void moveIntoApartment();

        void visitLandmark();
        void visitCommercialBuilding();

        void startUp();



        

};

#endif