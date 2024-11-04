#include "BuildingIterator.h"


BuildingIterator::BuildingIterator(vector<Building*> buildings): buildings(buildings), currentindex(0) {}

  bool BuildingIterator::hasNext(){
     return currentindex < buildings.size();
  }
Building* BuildingIterator::next() {
    if (hasNext()) {
        return buildings[currentindex++];
    }
    std::cout<<"no more buildings "<<std::endl;
    return NULL;  
}

bool BuildingIterator::isDone() {
    return currentindex >= buildings.size();
}
Building* BuildingIterator::currentItem() {
    if (!isDone()) {
        return buildings[currentindex];
    }
    return NULL;  
}