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

bool Landmark::fullutilies()
{
     std::string requiredUtilities[] = {"water", "waste", "power"};
    
    for (const auto& name : requiredUtilities) {
        if (utilities.find(name) == utilities.end()) {
            return false;
        } 
    }
    return true;
}

void Landmark::operate(){
    state->operate(this);
    cout<<"Landmark "<<name<<" is now operational"<<endl;
}

void Landmark::getUtilitystats()
{
      if (utilities.find("water") != utilities.end()) {
            utilities["water"]->showresources();
        } else {
            std::cout <<  "water utility does NOT exist on " << name<<".\n";
        }
        if (utilities.find("waste") != utilities.end()) {
            utilities["waste"]->showresources();
        } else {
            std::cout << "waste utility does NOT exist on " << name<<".\n";
        }
        if (utilities.find("power") != utilities.end()) {
            utilities["power"]->showresources();
        } else {
            std::cout <<"power utility does NOT exist on " << name<<".\n";
        }
    
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


string Landmark::getLName(){
    return name;
}

void Landmark::useResources(){
    
}

void Landmark::addUtility(const string &name, unique_ptr<Utility> util)
{
    utilities[name] = std::move(util);
    cout << "Utility added: " << name << endl;
}

void Landmark::removeUtility(const string &name)
{
     if (utilities.erase(name)) {
        cout << "Utility removed: " << name << endl;
    } else {
        cout << "Utility not found: " << name << endl;
    }
}

void Landmark::notify()
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

void Landmark::collectwaste(double kg)
{
    if (utilities.find("waste") != utilities.end()) {
       
        cout << "waste utility found; proceeding with waste collection of " << kg << " kg." << endl;
        utilities["waste"]->useResources(kg);
       
    } else {
       
        cout << "No waste utility found; cannot proceed with waste collection." << endl;
    }
}

void Landmark::usepower(double wt)
{
    if (utilities.find("power") != utilities.end()) {
       
        cout << "waste utility found;  " << wt << " megawatts of power used." << endl;
        utilities["power"]->useResources(wt);
       
    } else {
       
        cout << "no utility for power found." << endl;
    }
}

void Landmark::usewater(double cm3)
{
    if (utilities.find("water") != utilities.end()) {
       
        cout << "water utility found;  " << cm3 << " liters of water used." << endl;
        utilities["water"]->useResources(cm3);
       
    } else {
       
        cout << "no utility for water found." << endl;
    }
}
