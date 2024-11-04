#ifndef CITY_H
#define CITY_H

#include "Command.h"
#include "Citizen.h"
#include "CityIterator.h"
#include "BuildingIterator.h"
#include "CityAggregate.h"
#include "Building.h"


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

        void addCommand(Command* command);
        void executeCommands();
        void addBuilding(Building* b);

        CityIterator* createBuildingIterator(vector<ApartmentBuilding*> apartmentBuildings, vector<House*> houses, vector<Landmark*> landmarks, vector<CommercialBuilding*> commercialBuildings);
        CityIterator* createCitizenIterator(vector<Citizen*> citizens);
};



#endif
