#include "ApartmentBuilding.h"

void ApartmentBuilding::getName(){
    cout<<name;
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

void ApartmentBuilding::addUtility(const string& name, unique_ptr<Utility> util)
{
    utilities[name] = std::move(util);
    cout << "Utility added: " << name << endl;
}

void ApartmentBuilding::removeUtility(const string& name)
{
     if (utilities.erase(name)) {
        cout << "Utility removed: " << name << endl;
    } else {
        cout << "Utility not found: " << name << endl;
    }
}

void ApartmentBuilding::notify()
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

void ApartmentBuilding::collectwaste(double kg)
{
    if (utilities.find("waste") != utilities.end()) {
       
        cout << "waste utility found; proceeding with waste collection of " << kg << " kg." << endl;
        utilities["waste"]->useResources(kg);
       
    } else {
       
        cout << "No waste utility found; cannot proceed with waste collection." << endl;
    }

}

void ApartmentBuilding::usepower(double wt)
{
    if (utilities.find("power") != utilities.end()) {
       
        cout << "waste utility found;  " << wt << " megawatts of power used." << endl;
        utilities["power"]->useResources(wt);
       
    } else {
       
        cout << "no utility for power found." << endl;
    }

    
}

void ApartmentBuilding::usewater(double cm3)
{
    if (utilities.find("water") != utilities.end()) {
       
        cout << "water utility found;  " << cm3 << " liters of water used." << endl;
        utilities["water"]->useResources(cm3);
       
    } else {
       
        cout << "no utility for water found." << endl;
    }
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
    construct();
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

Building* ApartmentBuilding::clone(){
    cout<<"A clone of Apartment Building "<<name<<" has been created"<<endl;
    return new ApartmentBuilding(this->name, this->state);
}

void Unit::useResources(){
    
}

/*
void ResourceManager::addUtility(const string& name, unique_ptr<Utility> util) {
    utilities[name] = std::move(util);
    cout << "Utility added: " << name << endl;
}

void ResourceManager::removeUtility(const string& name) {
    if (utilities.erase(name)) {
        cout << "Utility removed: " << name << endl;
    } else {
        cout << "Utility not found: " << name << endl;
    }
}

void ResourceManager::notify() {
    cout << "Notifying all utilities:" << endl;
    for (auto it = utilities.begin(); it != utilities.end(); ++it) {
        cout << "Notifying utility: " << it->first << endl;
        if (it->second->flag()== false)
        {
            it->second->update(); 
        }
        
        
    }
}

*/