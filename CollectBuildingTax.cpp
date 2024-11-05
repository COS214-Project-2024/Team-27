#include "CollectBuildingTax.h"
    
    
CollectBuildingTax::CollectBuildingTax(vector<ApartmentBuilding*> apartmentBuildings, vector<House*> houses, vector<Landmark*> landmarks, vector<CommercialBuilding*> commercialBuildings){
    this->apartmentBuildings = apartmentBuildings;
    this->houses = houses;
    this->landmarks = landmarks;
    this->commercialBuildings = commercialBuildings;
}

void CollectBuildingTax::execute(){
    
     City* myCity = new City(apartmentBuildings, houses, landmarks, commercialBuildings);

    BuildingIterator* myBuildingIterator = myCity->createBuildingIterator(apartmentBuildings, houses, landmarks, commercialBuildings);

    while (myBuildingIterator->hasNext()) {
        BuildingVariant building = myBuildingIterator->next("nothing");

        if (auto apartment = std::get_if<ApartmentBuilding*>(&building)) {
            std::cout << "Collecting tax from: ";
             (*apartment)->getName();
             cout<< std::endl;
        } else if (auto house = std::get_if<House*>(&building)) {
            std::cout << "Collecting tax from: ";
            (*house)->getName();
            cout << std::endl;
        } else if (auto landmark = std::get_if<Landmark*>(&building)) {
            std::cout << "Collecting tax from: ";
            (*landmark)->getName();
            cout << std::endl;
        } else if (auto commercial = std::get_if<CommercialBuilding*>(&building)) {
            std::cout << "Collecting tax from: ";
            (*commercial)->getName();
            cout << std::endl;
        } else {
            std::cout << "No more buildings available to collect tax from." << std::endl;
        }
    }
}

