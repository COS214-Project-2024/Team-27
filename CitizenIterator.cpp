#include "CitizenIterator.h"

CitizenIterator::CitizenIterator(vector<Citizen*> citizens): citizens(citizens), currentindex(0) {}

  bool CitizenIterator::hasNext(){
     return currentindex < citizens.size();
  }



 void CitizenIterator::Next() {
    if (hasNext()) {
        currentindex++;
    }
    else{
    std::cout<<"no more citizens "<<std::endl;}
 
}

bool CitizenIterator::isDone() {
    return currentindex >= citizens.size();
}
Citizen* CitizenIterator::citizenCurrentItem() {
    if (!isDone()) {
        return citizens[currentindex];
    }
    return NULL;  
}  