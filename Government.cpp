#include "Government.h"

GovernmentMemento* Government::saveState(){
    vector<Citizen*> citizenPointers ;
    vector<Building*> buildingPointers ;

    for(auto& citizen : citizens){
        citizenPointers.push_back(&citizen);
    }

    for(auto& building : buildings){
        buildingPointers.push_back(&building);
    }

    return new GovernmentMemento(buildingTaxRate, citizenTaxRate, buildingPointers, citizenPointers);
}

void Government::restoreState(GovernmentMemento* memento){
    if(memento == nullptr){
        std::cerr << "No memento provided to restore state ." <<  endl ;
        return ;
    }

    buildingTaxRate = memento->getBuildingTaxRate();
    citizenTaxRate = memento->getCitizenTaxRate();

    buildings.clear();
    for(auto* buildingPtr : memento->getBuildings()){
        buildings.push_back(*buildingPtr);
    }
    citizens.clear();
    for(auto* citizenPtr : memento->getCitizens()){
        citizens.push_back(*citizenPtr);
    }

    std::cout << "Government state has been restored from memento ." << endl ;
}

void Government::displayState(){
    std::cout << "Government State :" << std::endl ;
    std::cout << "Building Tax Rate :" << buildingTaxRate << std::endl ;
    std::cout << "Citizen Tax Rate :" << citizenTaxRate << std::endl ;

    std::cout << "Number of Citizens :" << citizens.size() << std::endl ;
    std::cout << "Number of Buildings :" << buildings.size() << std::endl ;
}