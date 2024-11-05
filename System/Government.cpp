#include "Government.h"

void Government::collectBuildingTax()
{
   return ;
}


Government::Government(double  cRate, double bRate, double econGrowthRate, vector<Citizen*> initialCitizens, vector <Building*> initialBuildings) 
    : citizenTaxRate(cRate), buildingTaxRate(bRate), economicGrowthRate(econGrowthRate),citizens(initialCitizens), buildings(initialBuildings){
        cityGrowthManager = new CityGrowthManager(citizens.size(), buildings.size(), econGrowthRate);
    }
Government::Government(double cRate, double bRate, double econGrowthRate)
    :  citizenTaxRate(cRate), buildingTaxRate(bRate), economicGrowthRate(econGrowthRate){
        cityGrowthManager = new CityGrowthManager(0, 0, econGrowthRate);
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

Government::Government(vector<Citizen*> citizens, vector<ApartmentBuilding*> apartmentBuildings,
               vector<House*> houses, vector<Landmark*> landmarks,
               vector<CommercialBuilding*> commercialBuildings){
                this->citizens = citizens;
                this->apartmentBuildings = apartmentBuildings;
                this->houses = houses;
                this->landmarks = landmarks;
                this->commercialBuildings = commercialBuildings;
               }

GovernmentMemento* Government::saveState(vector<Citizen*> citizens, vector<ApartmentBuilding*> apartmentBuildings, vector<House*> houses, vector<Landmark*> landmarks, vector<CommercialBuilding*> commercialBuildings){
    this->citizens = citizens;
    this->apartmentBuildings = apartmentBuildings;
    this->houses = houses;
    this->landmarks = landmarks;
    this->commercialBuildings = commercialBuildings;

    
    state = new GovernmentMemento(citizens, apartmentBuildings, houses, landmarks, commercialBuildings);
    return state;
}

void Government::restoreState(GovernmentMemento* memento){
    if(memento == nullptr){
        std::cerr << "No memento provided to restore state ." <<  endl ;
        return ;
    }

    // buildingTaxRate = memento->getBuildingTaxRate();
    // citizenTaxRate = memento->getCitizenTaxRate();
    // economicGrowthRate = memento->getSavedEconomicGrowthRate();

    apartmentBuildings.clear();
    for(ApartmentBuilding* buildingPtr : memento->getAPBuildings()){
        apartmentBuildings.push_back(buildingPtr);
    }

    houses.clear();
    for(House* buildingPtr : memento->getHBuildings()){
        houses.push_back(buildingPtr);
    }

    landmarks.clear();
    for(Landmark* buildingPtr : memento->getLBuildings()){
        landmarks.push_back(buildingPtr);
    }

    commercialBuildings.clear();
    for(CommercialBuilding* buildingPtr : memento->getComBuildings()){
        commercialBuildings.push_back(buildingPtr);
    }

    citizens.clear();
    for(Citizen* citizenPtr : memento->getCitizens()){
        citizens.push_back(citizenPtr);
    }

    if(state){
        state = new GovernmentMemento(citizens, apartmentBuildings, houses, landmarks, commercialBuildings);
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
void Government::collectCitizenTax() {

      int i=1;
      int j=1;
    
    for (Citizen* citizen : citizens) {
    
      if(citizen->getEmployment() && citizen->getIncome()>=3000){
       double tax= citizen->getIncome() * citizenTaxRate;
       CTotalTax+=tax;
             std::cout <<"( "<< i++<< ") Collected " << tax << " from citizen." << std::endl;
      }
      else{
            cout << " Citizen " << citizen->getName() << " Doesnt qualify to pay Tax ." << endl ;
      }
          
    }
 }

 void Government::collectCityTax(){
    
    collectCitizenTax();
    collectBuildingTax();
    std::cout << "City tax collection complete." << std::endl;
 }

