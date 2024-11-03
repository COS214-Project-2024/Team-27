#include "Citizen.h"

int Citizen::lastAssignedID = 0;

Citizen::Citizen() : name(""), age(0), income(0.0), satisfaction(0), isEmployed(false) {
    lastAssignedID++; // Increment the ID counter
    ID = lastAssignedID;
}

void Citizen::setName(const std::string& name) { 
    this->name = name; 
}


void Citizen::setAge(int age) {
     this->age = age; 
}

void Citizen::setIncome(double income) {
     this->income = income; 
}

void Citizen::setSatisfaction(int satisfaction) {
     this->satisfaction = satisfaction; 
}
void Citizen::setEmploymentStatus(bool isEmployed) {
     this->isEmployed = isEmployed;
}

bool Citizen::getEmployment() { 
    return isEmployed; 
}

void Citizen::display() const {
    std::cout << "Name: " << name << ", ID: " << ID << ", Age: " << age
              << ", Income: " << income << ", Satisfaction: " << satisfaction
              << ", Employed: " << (isEmployed ? "Yes" : "No") << "\n";
}
