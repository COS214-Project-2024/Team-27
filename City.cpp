#include "City.h"

City::City(vector<Building *> buildings, vector<Citizen *> citizens)
{
    this->buildings=buildings;
    this->citizens=citizens;
}

void City::addCommand(Command *command)
{
commands.push_back(command);
}

void City::executeCommands()
{
    std::cout<<"Executing  commands"<<std::endl;
    for (Command* command:commands)
    {
        command->execute();
    
    }
    
}

void City::addBuilding(Building *b)
{
    buildings.push_back(b);
}

 CityIterator* City::createBuildingIterator()
{
   return new BuildingIterator(this->buildings);
  //return nullptr;
}

CityIterator *City::createCitizenIterator()
{
    return new CitizenIterator(this->citizens);
      //return nullptr;
}
