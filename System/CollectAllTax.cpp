#include "CollectAllTax.h"

CollectAllTax::CollectAllTax(vector<Citizen*> citizens, vector<ApartmentBuilding*> apartmentBuildings, vector<House*> houses, vector<Landmark*> landmarks, vector<CommercialBuilding*> commercialBuildings){
    this->apartmentBuildings = apartmentBuildings;
    this->houses = houses;
    this->landmarks = landmarks;
    this->commercialBuildings = commercialBuildings;
    this->citizens = citizens;
}

void CollectAllTax::execute(){
    CollectBuildingTax* bTaxCommand = new CollectBuildingTax(apartmentBuildings, houses, landmarks, commercialBuildings);
    bTaxCommand->execute();

    CollectCitizenTax* cTaxCommand = new CollectCitizenTax(citizens);
    cTaxCommand->execute();

    cout<<"All tax collected"<<endl;
}
