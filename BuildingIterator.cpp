#include "BuildingIterator.h"


BuildingIterator::BuildingIterator(vector<Building*> buildings): buildings(buildings), currentindex(0) {}

  bool BuildingIterator::hasNext(){
     return currentindex < buildings.size();
  }
void BuildingIterator::Next() {
    if (hasNext()) {
    currentindex++;
    }
    else{
    std::cout<<"no more buildings "<<std::endl;
    }
     
}

bool BuildingIterator::isDone() {
    return currentindex >= buildings.size();
}
Building* BuildingIterator::buildingCurrentItem() {
    if (!isDone()) {
        return buildings[currentindex];
    }
    return NULL;  
}

