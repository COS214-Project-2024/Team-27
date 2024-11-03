#include "Government.h"

GovernmentMemento* Government::saveState(){
    vector<Citizen*> citizenPointers ;
    vector<Building*> buildingPointers ;

    for(Citizen* citizen : citizens){
        citizenPointers.push_back(citizen);
    }

    for(Building* building : buildings){
        buildingPointers.push_back(building);
    }

    return new GovernmentMemento(buildingTaxRate, citizenTaxRate, citizens.size(), buildings.size(), economicGrowthRate, buildingPointers, citizenPointers);
}

void Government::restoreState(GovernmentMemento* memento){
    if(memento == nullptr){
        std::cerr << "No memento provided to restore state ." <<  endl ;
        return ;
    }

    buildingTaxRate = memento->getBuildingTaxRate();
    citizenTaxRate = memento->getCitizenTaxRate();
    economicGrowthRate = memento->getSavedEconomicGrowthRate();

    buildings.clear();
    for(Building* buildingPtr : memento->getBuildings()){
        buildings.push_back(buildingPtr);
    }
    citizens.clear();
    for(Citizen* citizenPtr : memento->getCitizens()){
        citizens.push_back(citizenPtr);
    }

    std::cout << "Government state has been restored from memento ." << endl ;
}

void Government::displayState(){
    std::cout << "Government State :" << std::endl ;
    std::cout << "Building Tax Rate :" << buildingTaxRate << std::endl ;
    std::cout << "Citizen Tax Rate :" << citizenTaxRate << std::endl ;
    std::cout << "Economic Growth Rate :" << economicGrowthRate << std::endl ;

    std::cout << "Number of Citizens :" << citizens.size() << std::endl ;
    std::cout << "Number of Buildings :" << buildings.size() << std::endl ;
}