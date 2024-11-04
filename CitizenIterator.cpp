#include "CitizenIterator.h"

CitizenIterator::CitizenIterator(vector<Citizen*> citizens): citizens(citizens), currentindex(0) {}

  bool CitizenIterator::hasNext(){
     return currentindex < citizens.size();
  }

Citizen* CitizenIterator::next() {
    if (hasNext()) {
        return citizens[currentindex++];
    }
    std::cout<<"no more citizens "<<std::endl;
    return NULL;  
}

bool CitizenIterator::isDone() {
    return currentindex >= citizens.size();
}
Citizen* CitizenIterator::currentItem() {
    if (!isDone()) {
        return citizens[currentindex];
    }
    return NULL;  
}