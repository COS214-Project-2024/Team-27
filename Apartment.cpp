#include "Apartment.h"

void Apartment::displayInfo(){

}

void Apartment::useResources() {
    
}

void Apartment::setState(BuildingState* newState){
    
}

BuildingState* Apartment::getState(){
    return nullptr;
}

void Apartment::getName(){
    
}

void Apartment::construct(){
    
}

void Apartment::operate(){
    
}

void Apartment::closeDown(){
    
}

void Apartment::damage(){
    
}

Building* Apartment::clone(){
    return nullptr;
}
  double taxableAmount(){
          double taxableAmount=10000.00;
   if(hasSolar ||hasBorehole){
taxableAmount-=500.00;
   }
   else if (hasSolar &&hasBorehole)
   {
   taxableAmount-=1000.00;
   }
     
    return taxableAmount;
  }
void sethasbool(bool b){
    this->hasBorehole=b;
}
    virtual void sethasSolar(bool b){
this->hasSolar=b;
        
    }

