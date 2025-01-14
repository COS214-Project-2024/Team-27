#ifndef CITY_H
#define CITY_H

#include "Command.h"
#include "Citizen.h"
#include "CityIterator.h"
#include "BuildingIterator.h"
#include "CityAggregate.h"
#include "Building.h"
#include "ApartmentBuilding.h"
#include "House.h"
#include "Landmark.h"
#include "CommercialBuilding.h"


#include <vector>
#include <iostream>
using namespace std ;


class City: public CityAggregate{
    private :
        vector<Command*> commands;
        vector<ApartmentBuilding*> apartmentBuildings;
        vector<House*> houses;
        vector<Landmark*> landmarks;
        vector<CommercialBuilding*> commercialBuildings;
        vector<Citizen*> citizens;
    public :
        City(vector<ApartmentBuilding*> apartmentBuildings, vector<House*> houses, vector<Landmark*> landmarks, vector<CommercialBuilding*> commercialBuildings, vector<Citizen*> citizens);
        City(vector<ApartmentBuilding*> apartmentBuildings, vector<House*> houses, vector<Landmark*> landmarks, vector<CommercialBuilding*> commercialBuildings);
        City(vector<Citizen*> citizens);

        // void addCommand(Command* command);
        // void executeCommands();
        

        BuildingIterator* createBuildingIterator(vector<ApartmentBuilding*> apartmentBuildings, vector<House*> houses, vector<Landmark*> landmarks, vector<CommercialBuilding*> commercialBuildings);
        CitizenIterator* createCitizenIterator(vector<Citizen*> citizens);
};



#endif
