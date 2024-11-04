#include "Government.h"

void Government::collectBuildingTax()
{
   return ;
}

void Government::collectCityTax()
{
     collectalltax = new CollectAllTax();
    
}


Government::Government(double  cRate, double bRate, double econGrowthRate, vector<Citizen*> initialCitizens, vector <Building*> initialBuildings) 
    : citizenTaxRate(cRate), buildingTaxRate(bRate), economicGrowthRate(econGrowthRate),citizens(initialCitizens), buildings(initialBuildings){
        cityGrowthManager = new CityGrowthManager(citizens.size(), buildings.size(), econGrowthRate);
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

void Government::collectCitizenTax() {

   int i=1;
   int j=1;

 for (Citizen* citizen : citizens) {
  
   if(citizen->getEmployment() && citizen->getincome()>=3000){
    double tax= citizen->getincome() * citizenTaxRate;
    CTotalTax+=tax;
          std::cout <<"( "<< i++<< ") Collected " << tax << " from citizen." << std::endl;
   }
   else{
    ///cout user does not qualiy to pay tax
   }
       
 }
 }
void Government::collectBuildingTax(){

}
 void Government::collectCityTax(){
    
 collectCitizenTax();
    collectBuildingTax();
    std::cout << "City tax collection complete." << std::endl;
 }
