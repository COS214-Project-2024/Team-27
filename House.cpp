#include "House.h"

House::House(string name){
    this->name = name;
    this->size = size;
    setState(new UnderConstruction);
    cout<<"House "<<name<<" is now under construction"<<endl;
}

void House::setSize(string size){
    this->size = size;
}

House::House(string name, string size, BuildingState* state){
    this->name = name;
    this->size = size;
    this->state = state;
}

void House::displayInfo(){
    cout<<"This is a "<<size<<" sized house."<<endl;
}

void House::setState(BuildingState* newState){
    if(newState){
        this->state = newState;
    } else{
        cout<<"State can't be null"<<endl;
    }
}

BuildingState* House::getState(){
    return state;
}

void House::getName(){
    cout<<name;
}

void House::construct(){
    state->construct(this);
    cout<<"House "<<name<<" is now under construction"<<endl;
}

void House::operate(){
    state->operate(this);
    cout<<"House "<<name<<" is now operational"<<endl;
}

void House::closeDown(){
    state->closeDown(this);
    cout<<"House "<<name<<" is now closed down"<<endl;
}

void House::damage(){
    state->closeDown(this);
    cout<<"House "<<name<<" is now damaged"<<endl;
}

House* House::clone(){
    cout<<"A clone of House "<<name<<" has been created"<<endl;
    return new House(this->name, this->size, this->state);
}

void House::useResources(){
    
}

void House::addResident(Citizen* citizen){
    citizens.push_back(citizen);
}