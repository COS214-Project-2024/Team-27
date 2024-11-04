#ifndef BUILDINGITERATOR_H
#define BUILDINGITERATOR_H

#include <iostream>
#include <vector>
#include "Building.h"
#include "CityIterator.h"

using namespace std;

class BuildingIterator: public CityIterator{
    private :
 vector<Building*> buildings;
int currentindex;
    public:
BuildingIterator(vector<Building*> buildings);
     virtual bool hasNext();
     Building* next();
    virtual bool isDone();
 Building* currentItem();
      
};

#endif
