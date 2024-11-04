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
        vector<Command*> commands ;
        vector<Building*> buildings ;
        vector<Citizen*> citizens ;
    public :
        void addCommand(Command* command);
        void executeCommands();
        void addBuilding(Building* b);
        CityIterator* createBuildingIterator();
        CityIterator* createCitizenIterator();
};



#endif
