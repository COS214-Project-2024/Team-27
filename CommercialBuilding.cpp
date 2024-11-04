#include "CommercialBuilding.h"

CommercialBuilding::CommercialBuilding(string name){
    this->name = name;
    setState(new UnderConstruction);
    cout<<"Commercial Building "<<name<<" is now under construction"<<endl;
}

CommercialBuilding::CommercialBuilding(string name, string size, BuildingState* state){
    this->name = name;
    this->size = size;
    this->state = state;
}

void CommercialBuilding::setSize(string size){
    this->size = size;
}

void CommercialBuilding::displayInfo(){
    cout<<"This is a "<<size<<" sized Commercial Building."<<endl;
}

void CommercialBuilding::setState(BuildingState* newState){
    if(newState){
        this->state = newState;
    } else{
        cout<<"State can't be null"<<endl;
    }
}

BuildingState* CommercialBuilding::getState(){
    return state;
}

void CommercialBuilding::getName(){
    cout<<name;
}

void CommercialBuilding::construct(){
    state->construct(this);
    cout<<"Commercial Building "<<name<<" is now under construction"<<endl;
}

void CommercialBuilding::operate(){
    state->operate(this);
    cout<<"Commercial Building "<<name<<" is now operational"<<endl;
}

void CommercialBuilding::closeDown(){
    state->closeDown(this);
    cout<<"Commercial Building "<<name<<" is now closed down"<<endl;
}

void CommercialBuilding::damage(){
    state->closeDown(this);
    cout<<"Commercial Building "<<name<<" is now damaged"<<endl;
}

CommercialBuilding* CommercialBuilding::clone(){
    cout<<"A clone of Commercial Building "<<name<<" has been created"<<endl;
    return new CommercialBuilding(this->name, this->size, this->state);
}

void CommercialBuilding::useResources(){
    
}

string CommercialBuilding::getComName(){
    return name;
}

void CommercialBuilding::addUtility(const string &name, unique_ptr<Utility> util)
{
    utilities[name] = std::move(util);
    cout << "Utility added: " << name << endl;
}

void CommercialBuilding::removeUtility(const string &name)
{
     if (utilities.erase(name)) {
        cout << "Utility removed: " << name << endl;
    } else {
        cout << "Utility not found: " << name << endl;
    }
}

void CommercialBuilding::notify()
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

void CommercialBuilding::collectwaste(double kg)
{
    if (utilities.find("waste") != utilities.end()) {
       
        cout << "waste utility found; proceeding with waste collection of " << kg << " kg." << endl;
        utilities["waste"]->useResources(kg);
       
    } else {
       
        cout << "No waste utility found; cannot proceed with waste collection." << endl;
    }
}

void CommercialBuilding::usepower(double wt)
{
    if (utilities.find("power") != utilities.end()) {
       
        cout << "waste utility found;  " << wt << " megawatts of power used." << endl;
        utilities["power"]->useResources(wt);
       
    } else {
       
        cout << "no utility for power found." << endl;
    }
}

void CommercialBuilding::usewater(double cm3)
{
    if (utilities.find("water") != utilities.end()) {
       
        cout << "water utility found;  " << cm3 << " liters of water used." << endl;
        utilities["water"]->useResources(cm3);
       
    } else {
       
        cout << "no utility for water found." << endl;
    }
}
