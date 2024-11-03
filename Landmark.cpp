#include "Landmark.h"

Landmark::Landmark(string name){
    this->name = name;
    setState(new UnderConstruction);
}

Landmark::Landmark(string name, string size, BuildingState* state){
    this->size = size;
    this->state = state;
    this->name = name;
}

void Landmark::displayInfo(){
    cout<<"This is a "<<size<<" sized Landmark."<<endl;
}

void Landmark::setState(BuildingState* newState){
    if(newState){
        this->state = newState;
    } else{
        cout<<"State can't be null"<<endl;
    }
}

void Landmark::setSize(string size){
    this->size = size;
}

BuildingState* Landmark::getState(){
    return state;
}

void Landmark::getName(){
    cout<<name;
}

void Landmark::construct(){
    state->construct(this);
    cout<<"Landmark "<<name<<" is now under construction"<<endl;
}

void Landmark::operate(){
    state->operate(this);
    cout<<"Landmark "<<name<<" is now operational"<<endl;
}

void Landmark::closeDown(){
    state->closeDown(this);
    cout<<"Landmark "<<name<<" is now closed down"<<endl;
}

void Landmark::damage(){
    state->closeDown(this);
    cout<<"Landmark "<<name<<" is now damaged"<<endl;
}

Landmark* Landmark::clone(){
    cout<<"A clone of Landmark "<<name<<" has been created"<<endl;
    return new Landmark(this->name, this->size, this->state);
}

void Landmark::useResources(){
    
}