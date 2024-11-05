#ifndef COLLECTALLTAX_H
#define COLLECTALLTAX_H
#include "Command.h"
#include "Government.h"
#include "BuildingIterator.h"
#include "CityIterator.h"
#include "CitizenIterator.h"
#include "ApartmentBuilding.h"
#include "House.h"
#include "Landmark.h"
#include "CommercialBuilding.h"

class CollectAllTax:public Command{
  private:
        BuildingIterator* iterator;
        vector<ApartmentBuilding*> apartmentBuildings;
        vector<House*> houses;
        vector<Landmark*> landmarks;
        vector<CommercialBuilding*> commercialBuildings;

        CityIterator* citerator;
        vector<Citizen*> citizens;
  public :
    CollectAllTax(vector<Citizen*> citizens, vector<ApartmentBuilding*> apartmentBuildings, vector<House*> houses, vector<Landmark*> landmarks, vector<CommercialBuilding*> commercialBuildings);
    virtual void execute();

};

#endif