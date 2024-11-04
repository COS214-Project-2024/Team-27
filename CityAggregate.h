#ifndef CITYAGGREGATE_H
#define CITYAGGREGATE_H

#include <iostream>
using namespace std;
#include "CitizenIterator.h"

class CityAggregate{
    private:

    public:
    virtual CityIterator* createBuildingIterator(vector<ApartmentBuilding*> apartmentBuildings, vector<House*> houses, vector<Landmark*> landmarks, vector<CommercialBuilding*> commercialBuildings)=0;
    virtual CityIterator* createCitizenIterator(vector<Citizen*> citizens)=0;
};

#endif