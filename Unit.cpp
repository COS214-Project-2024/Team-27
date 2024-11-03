#include "Unit.h"

Unit::Unit(int number, string size){
    this->unitNumber = number;
    this->size = size;
    setState(new UnderConstruction);
}

Unit::Unit(int number, string size, BuildingState* state){
    this->unitNumber = number;
    this->size = size;
    this->state = state;
}

void Unit::setSize(string size){
    this->size = size;
}

void Unit::displayInfo(){
    cout<<"This is a "<<size<<" sized Unit."<<endl;
}

void Unit::setState(BuildingState* newState){
    if(newState){
        this->state = newState;
    } else{
        cout<<"State can't be null"<<endl;
    }
}

BuildingState* Unit::getState(){
    return state;
}

void Unit::getName(){
    cout<<unitNumber;
}

void Unit::construct(){
    state->construct(this);
    cout<<"Unit "<<unitNumber<<" is now under construction"<<endl;
}

void Unit::operate(){
    state->operate(this);
    cout<<"Unit "<<unitNumber<<" is now operational"<<endl;
}

void Unit::closeDown(){
    state->closeDown(this);
    cout<<"Unit "<<unitNumber<<" is now closed down"<<endl;
}

void Unit::damage(){
    state->closeDown(this);
    cout<<"Unit "<<unitNumber<<" is now damaged"<<endl;
}

Unit* Unit::clone(){
    cout<<"A clone of Unit "<<unitNumber<<" has been created"<<endl;
    return new Unit(this->unitNumber, this->size, this->state);
}

void Unit::addResident(Citizen *citizen){
    citizens.push_back(citizen);
}