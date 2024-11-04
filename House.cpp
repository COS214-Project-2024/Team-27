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

double House::getPayableTax()
{
    return 0.0;
}

void House::addUtility(const string &name, unique_ptr<Utility> util)
{
    utilities[name] = std::move(util);
    cout << "Utility added: " << name << endl;
}

void House::removeUtility(const string &name)
{
     if (utilities.erase(name)) {
        cout << "Utility removed: " << name << endl;
    } else {
        cout << "Utility not found: " << name << endl;
    }
}

void House::notify()
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



void House::collectwaste(double kg)
{
    if (utilities.find("waste") != utilities.end()) {
       
        cout << "waste utility found; proceeding with waste collection of " << kg << " kg." << endl;
        utilities["waste"]->useResources(kg);
       
    } else {
       
        cout << "No waste utility found; cannot proceed with waste collection." << endl;
    }
}

void House::usepower(double wt)
{
    if (utilities.find("power") != utilities.end()) {
       
        cout << "waste utility found;  " << wt << " megawatts of power used." << endl;
        utilities["power"]->useResources(wt);
       
    } else {
       
        cout << "no utility for power found." << endl;
    }
}

void House::usewater(double cm3)
{
    if (utilities.find("water") != utilities.end()) {
       
        cout << "water utility found;  " << cm3 << " liters of water used." << endl;
        utilities["water"]->useResources(cm3);
       
    } else {
       
        cout << "no utility for water found." << endl;
    }
}