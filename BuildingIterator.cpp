#include "BuildingIterator.h"


BuildingIterator::BuildingIterator(vector<ApartmentBuilding*> apartmentBuildings, vector<House*> houses, vector<Landmark*> landmarks, vector<CommercialBuilding*> commercialBuildings){
    this->apartmentBuildings = apartmentBuildings;
    this->houses = houses;
    this->landmarks = landmarks;
    this->commercialBuildings = commercialBuildings;
    currentindexAP=0;
    currentindexH=0;
    currentindexL=0;
    currentindexCB=0;
}

  bool BuildingIterator::hasNext(){
     return apartmentHasNext() || houseHasNext() || landmarkHasNext() || commercialHasNext();
  }

    bool BuildingIterator::apartmentHasNext(){
    return currentindexAP < apartmentBuildings.size();
    }

bool BuildingIterator::houseHasNext(){
    return currentindexH < houses.size();
}

bool BuildingIterator::landmarkHasNext(){
    return currentindexL < landmarks.size();
}

bool BuildingIterator::commercialHasNext(){
    return currentindexCB < commercialBuildings.size();
}

Building* BuildingIterator::next() {
    
    return NULL;  
}

    ApartmentBuilding* BuildingIterator::APnext(){
        if (apartmentHasNext()) {
        return apartmentBuildings[currentindexAP++];
    }
    std::cout<<"no more apartment buildings "<<std::endl;
    return NULL;  
    }

     House* BuildingIterator::Hnext(){
        if (houseHasNext()) {
            return houses[currentindexH++];
        }
        std::cout<<"no more houses "<<std::endl;
        return NULL;  
     }

     Landmark* BuildingIterator::Lnext(){
        if (landmarkHasNext()) {
            return landmarks[currentindexL++];
        }
        std::cout<<"no more landmarks "<<std::endl;
        return NULL;  
     }

     CommercialBuilding* BuildingIterator::CBnext(){
        if (commercialHasNext()) {
            return commercialBuildings[currentindexCB++];
        }
        std::cout<<"no more commercial buildings "<<std::endl;
        return NULL;  
     }

bool BuildingIterator::isDone() {
    return false;
}

bool BuildingIterator::APisDone() {
    return currentindexAP >= apartmentBuildings.size();
}

bool BuildingIterator::HisDone() {
    return currentindexH >= houses.size();
}

bool BuildingIterator::LisDone() {
    return currentindexL >= landmarks.size();
}

bool BuildingIterator::CBisDone() {
    return currentindexCB >= commercialBuildings.size();
}

Building* BuildingIterator::currentItem() {
    
    return NULL;  
}

ApartmentBuilding* BuildingIterator::APcurrentItem() {
    if (!isDone()) {
        return apartmentBuildings[currentindexAP];
    }
    return NULL;  
}

House* BuildingIterator::HcurrentItem() {
    if (!isDone()) {
        return houses[currentindexH];
    }
    return NULL;  
}

Landmark* BuildingIterator::LcurrentItem() {
    if (!isDone()) {
        return landmarks[currentindexL];
    }
    return NULL;  
}

CommercialBuilding* BuildingIterator::CBcurrentItem() {
    if (!isDone()) {
        return commercialBuildings[currentindexCB];
    }
    return NULL;  
}