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
double Apartment::totalAmount() {
    this->Tamount = 20000.00;
    return this->Tamount;
}

void Apartment::sethasbool(bool b) {
    this->hasBorehole = b;
}

void Apartment::sethasSolar(bool b) {
    this->hasSolar = b;
}

bool Apartment::gethasbool()
{
    this->hasBorehole;
}

bool Apartment::gethasSolar()
{
    return this->hasSolar;
}
