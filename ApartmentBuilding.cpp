#include "ApartmentBuilding.h"

void ApartmentBuilding::getName(){
    cout<<name;
}

void ApartmentBuilding::getUtilitystats()
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

int ApartmentBuilding::numUnits(){
    return units.size();
}

void ApartmentBuilding::printUnits() {
    for (size_t i = 1; i <= units.size(); i++) {
        cout << i << ". ";
        units[i - 1]->getName();
        cout << endl;
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

void ApartmentBuilding::addResident(Citizen *citizen){
    citizens.push_back(citizen);
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

bool ApartmentBuilding::fullutilies()
{
     std::string requiredUtilities[] = {"water", "waste", "power"};
    
    for (const auto& name : requiredUtilities) {
        if (utilities.find(name) == utilities.end()) {
            return false;
        } 
    }
    return true;
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

vector<Unit*> ApartmentBuilding::getUnits(){
    return units;
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