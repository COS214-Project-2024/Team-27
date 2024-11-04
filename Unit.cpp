#include "Unit.h"

Unit::Unit(int number, string size){
    this->unitNumber = number;
    this->size = size;
    construct();
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

Building* Unit::clone(){
    cout<<"A clone of Unit "<<unitNumber<<" has been created"<<endl;
    return new Unit(this->unitNumber, this->size, this->state);
}

void Unit::addUtility(const string& name, unique_ptr<Utility> util)
{
    utilities[name] = std::move(util);
    cout << "Utility added: " << name << endl;
}

void Unit::removeUtility(const string& name)
{
     if (utilities.erase(name)) {
        cout << "Utility removed: " << name << endl;
    } else {
        cout << "Utility not found: " << name << endl;
    }
}

void Unit::notify()
{
     cout << "Notifying all utilities:" << endl;
    for (auto it = utilities.begin(); it != utilities.end(); ++it) {
        cout << "Notifying utility: " << it->first << endl;
        if (it->second->flag()== false)
        {
            it->second->update(); 
        }
    }
}

void Unit::collectwaste(double kg)
{
    if (utilities.find("waste") != utilities.end()) {
       
        cout << "waste utility found; proceeding with waste collection of " << kg << " kg." << endl;
        utilities["waste"]->useResources(kg);
       
    } else {
       
        cout << "No waste utility found; cannot proceed with waste collection." << endl;
    }
}

void Unit::usepower(double wt)
{
    if (utilities.find("power") != utilities.end()) {
       
        cout << "waste utility found;  " << wt << " megawatts of power used." << endl;
        utilities["power"]->useResources(wt);
       
    } else {
       
        cout << "no utility for power found." << endl;
    }
}

void Unit::usewater(double cm3)
{
    if (utilities.find("water") != utilities.end()) {
       
        cout << "water utility found;  " << cm3 << " liters of water used." << endl;
        utilities["water"]->useResources(cm3);
       
    } else {
       
        cout << "no utility for water found." << endl;
    }
}
