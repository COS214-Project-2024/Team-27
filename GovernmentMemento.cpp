#include "GovernmentMemento.h"

GovernmentMemento::GovernmentMemento(double b, double c,int population, int numBuildings, double econRate, vector<Building*> buildingsC, vector<Citizen*> CitizensC)
    : buildingTaxRate(b), citizenTaxRate(c), savedPopulation(population), savedNumberOfBuildings(numBuildings), savedEconomicGrowthRate(econRate),buildings(buildingsC), citizens(CitizensC){}


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
