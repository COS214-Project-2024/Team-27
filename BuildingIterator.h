#ifndef BUILDINGITERATOR_H
#define BUILDINGITERATOR_H

#include <iostream>
#include <variant>
#include <vector>
#include "Building.h"
#include "CityIterator.h"
#include "ApartmentBuilding.h"
#include "House.h"
#include "Landmark.h"
#include "CommercialBuilding.h"

using namespace std;

class BuildingIterator: public CityIterator{
    private :
        vector<ApartmentBuilding*> apartmentBuildings;
        vector<House*> houses;
        vector<Landmark*> landmarks;
        vector<CommercialBuilding*> commercialBuildings;
        int currentindexAP;
        int currentindexH;
        int currentindexL;
        int currentindexCB;
    public:
    using BuildingVariant = std::variant<ApartmentBuilding*, House*, Landmark*, CommercialBuilding*, std::nullptr_t>;
    BuildingIterator(vector<ApartmentBuilding*> apartmentBuildings, vector<House*> houses, vector<Landmark*> landmarks, vector<CommercialBuilding*> commercialBuildings);

    BuildingVariant next(string nothing) {
        nothing = "";
        if (apartmentHasNext()) {
            return APnext();
        } 
        if (houseHasNext()) {
            return Hnext();
        } 
        if (landmarkHasNext()) {
            return Lnext();
        } 
        if (commercialHasNext()) {
            return CBnext();
        }

        return nullptr; // No more buildings to iterate
    }

    virtual bool hasNext();
     virtual bool apartmentHasNext();
     virtual bool houseHasNext();
     virtual bool landmarkHasNext();
     virtual bool commercialHasNext();

    Building* next();
     ApartmentBuilding* APnext();
     House* Hnext();
     Landmark* Lnext();
     CommercialBuilding* CBnext();

    virtual bool isDone();
    virtual bool APisDone();
    virtual bool HisDone();
    virtual bool LisDone();
    virtual bool CBisDone();

    Building* currentItem();
    ApartmentBuilding* APcurrentItem();
    House* HcurrentItem();
    Landmark* LcurrentItem();
    CommercialBuilding* CBcurrentItem();
      
};

#endif
