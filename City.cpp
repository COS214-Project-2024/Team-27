#include "City.h"

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
   return new BuildingIterator(buildings);
  //return nullptr;
}

CityIterator *City::createCitizenIterator()
{
    return new CitizenIterator(citizens);
}
