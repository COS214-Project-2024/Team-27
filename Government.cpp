#include "Government.h"

Government::Government(double  cRate, double bRate, double econGrowthRate, vector<Citizen*> initialCitizens, vector <Building*> initialBuildings) 
    : citizenTaxRate(cRate), buildingTaxRate(bRate), economicGrowthRate(econGrowthRate),citizens(initialCitizens), buildings(initialBuildings){
        cityGrowthManager = new CityGrowthManager(citizens.size(), buildings.size(), econGrowthRate);
    }
Government::Government(double cRate, double bRate, double econGrowthRate)
    :  citizenTaxRate(cRate), buildingTaxRate(bRate), economicGrowthRate(econGrowthRate){
        cityGrowthManager = new CityGrowthManager(citizens.size(), buildings.size(), econGrowthRate);
    }
Government::Government(double cRate, double bRate, double economicGrowthRate,
                       vector<Citizen*> citizens,
                       vector<ApartmentBuilding*> apartmentBuildings,
                       vector<House*> houses,
                       vector<Landmark*> landmarks,
                       vector<CommercialBuilding*> commercialBuildings)
    : citizenTaxRate(cRate), buildingTaxRate(bRate), economicGrowthRate(economicGrowthRate),
      citizens(citizens) {
    for (auto* apartment : apartmentBuildings) {
        buildings.push_back(apartment);
    }
    for (auto* house : houses) {
        buildings.push_back(house);
    }
    for (auto* landmark : landmarks) {
        buildings.push_back(landmark);
    }
    for (auto* commercial : commercialBuildings) {
        buildings.push_back(commercial);
    }
}

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

void Government::addBuilding(Building* b){
    buildings.push_back(b);
}


void Government::UpdateApartment(vector<ApartmentBuilding*> a){
    apartmentBuildings = a ;
}

void Government::UpdateHouse(vector<House*> h){
    houses = h ;
}

void Government::UpdateLandMarks(vector<Landmark*> l){
    landmarks = l ;
}

void Government::UpdateCommercial(vector<CommercialBuilding*> c){
    commercialBuildings = c ;
}