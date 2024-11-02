#include "GovernmentMemento.h"

GovernmentMemento::GovernmentMemento(double b, double c, vector<Building*> buildingsC, vector<Citizen*> CitizensC)
    : buildingTaxRate(b), citizenTaxRate(c), buildings(buildingsC), citizens(CitizensC){}


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

// GovernmentMemento::~GovernmentMemento(){
//     for(Citizen* citizen : citizens){
//         delete citizen ;
//     }
    
// }