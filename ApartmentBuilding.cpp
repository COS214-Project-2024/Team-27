#include "ApartmentBuilding.h"

void ApartmentBuilding::getName(){
    cout<<name;
}

int ApartmentBuilding::numUnits(){
    return units.size();
}

void ApartmentBuilding::printUnits(){
    for(int i = 1; i<=units.size();i++){
            cout<<i<<". ";
            units[i-1]->getName();
            cout<<endl;
        }
}

void ApartmentBuilding::addUnit(Unit* unit){
    if(unit){
        units.push_back(unit);
    } else{
        cout<<"Can't add null unit"<<endl;
    }
}

void ApartmentBuilding::setSize(string size){
    this->size = size;
}

void ApartmentBuilding::removeUnit(Unit* unit){
    if(unit){
        units.erase(std::remove(units.begin(), units.end(), unit), units.end());
    } else{
        cout<<"Can't remove null unit"<<endl;
    }
}

void ApartmentBuilding::useResources(){

}

void ApartmentBuilding::displayInfo(){
    cout<<"This is an Apartment Building called "<<name<<" with the following units: "<<endl;
    int i =0;
    for (const auto& unit : units) {
        if(unit){
            i++;
            cout<<i<<". ";
            unit->displayInfo();
            cout<<endl;
        }
    }
    cout<<"This Apartment Building has "<<i<<" units."<<endl;
}


ApartmentBuilding::ApartmentBuilding(string name){
    this->name = name;
    setState(new UnderConstruction);
}

ApartmentBuilding::ApartmentBuilding(string name, BuildingState* state){
    this->name = name;
    this->state = state;

}

void ApartmentBuilding::setState(BuildingState* newState){
    if(newState){
        state = newState;
    } else{
        cout<<"State can't be null"<<endl;
    }
}

BuildingState* ApartmentBuilding::getState(){
    return state;
}

void ApartmentBuilding::construct(){
    state->construct(this);
    cout<<"Apartment Building "<<name<<" is now under construction"<<endl;
}

void ApartmentBuilding::operate(){
    state->operate(this);
    cout<<"Apartment Building "<<name<<" is now operational"<<endl;
}

void ApartmentBuilding::closeDown(){
    state->closeDown(this);
    cout<<"Apartment Building "<<name<<" is now closed down"<<endl;
}

void ApartmentBuilding::damage(){
    state->closeDown(this);
    cout<<"Apartment Building "<<name<<" is now damaged"<<endl;
}

ApartmentBuilding* ApartmentBuilding::clone(){
    cout<<"A clone of Apartment Building "<<name<<" has been created"<<endl;
    return new ApartmentBuilding(this->name, this->state);
}

void Unit::useResources(){
    
}