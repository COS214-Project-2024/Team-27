#include "City.h"

City::City(vector<ApartmentBuilding*> apartmentBuildings, vector<House*> houses, vector<Landmark*> landmarks, vector<CommercialBuilding*> commercialBuildings, vector<Citizen*> citizens)
{
    this->apartmentBuildings = apartmentBuildings;
    this->houses = houses;
    this->landmarks = landmarks;
    this->commercialBuildings = commercialBuildings;
    this->citizens=citizens;
}

City::City(vector<ApartmentBuilding*> apartmentBuildings, vector<House*> houses, vector<Landmark*> landmarks, vector<CommercialBuilding*> commercialBuildings)
{
    this->apartmentBuildings = apartmentBuildings;
    this->houses = houses;
    this->landmarks = landmarks;
    this->commercialBuildings = commercialBuildings;
}

City::City(vector<Citizen*> citizens)
{
    this->citizens=citizens;
}

// void City::addCommand(Command *command)
// {
// commands.push_back(command);
// }

// void City::executeCommands()
// {
//     std::cout<<"Executing  commands"<<std::endl;
//     for (Command* command:commands)
//     {
//         command->execute();
    
//     }
    
// }

// void City::addBuilding(Building *b)
// {
//     buildings.push_back(b);
// }

BuildingIterator* City::createBuildingIterator(vector<ApartmentBuilding*> apartmentBuildings, vector<House*> houses, vector<Landmark*> landmarks, vector<CommercialBuilding*> commercialBuildings)
{
   return new BuildingIterator(apartmentBuildings, houses, landmarks, commercialBuildings);
  //return nullptr;
}

CitizenIterator* City::createCitizenIterator(vector<Citizen*> citizens){
    return new CitizenIterator(citizens);
}

