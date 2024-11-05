#include "GovernmentMemento.h"

GovernmentMemento::GovernmentMemento(double b, double c,int population, int numBuildings, double econRate, vector<Building*> buildingsC, vector<Citizen*> CitizensC)
    : buildingTaxRate(b), citizenTaxRate(c), savedPopulation(population), savedNumberOfBuildings(numBuildings), savedEconomicGrowthRate(econRate),buildings(buildingsC), citizens(CitizensC){}

GovernmentMemento::GovernmentMemento(vector<Citizen*> citizens, vector<ApartmentBuilding*> apartmentBuildings, vector<House*> houses, vector<Landmark*> landmarks, vector<CommercialBuilding*> commercialBuildings){
    this->citizens = citizens;
    this->apartmentBuildings = apartmentBuildings;
    this->houses = houses;
    this->landmarks = landmarks;
    this->commercialBuildings = commercialBuildings;
}


void GovernmentMemento::getDetails(){
    cout << " Building Tax Rate: " << buildingTaxRate << endl ;
    cout << " Citizen Tax Rate: " << citizenTaxRate << endl ;
    cout << " Number of Buildings: " << buildings.size() << endl ;
    cout << " Number of Citizens: "<< citizens.size() << endl ;
}

double GovernmentMemento::getBuildingTaxRate() const {
    return buildingTaxRate ;
}

double GovernmentMemento::getCitizenTaxRate() const {
    return citizenTaxRate ;
}

const vector<Citizen*>& GovernmentMemento::getCitizens() const {
    return citizens ;
}

const vector<Building*>& GovernmentMemento::getBuildings() const {
    return buildings ;
}
int GovernmentMemento::getSavedPopulation() const { return savedPopulation; }
int GovernmentMemento::getSavedNumberOfBuildings() const { return savedNumberOfBuildings; }

double GovernmentMemento::getSavedEconomicGrowthRate() const { return savedEconomicGrowthRate; }

vector<ApartmentBuilding*> GovernmentMemento::getAPBuildings(){
    return apartmentBuildings;
}

vector<House*> GovernmentMemento::getHBuildings(){
    return houses;
}

vector<Landmark*> GovernmentMemento::getLBuildings(){
    return landmarks;
}

vector<CommercialBuilding*> GovernmentMemento::getComBuildings(){
    return commercialBuildings;
}
