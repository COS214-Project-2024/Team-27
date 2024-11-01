#include "Citizen.h"

#include <iostream>

Citizen::Citizen() : name(""), ID(0), age(0), income(0.0), satisfaction(0), isEmployed(false) {}

void Citizen::setName(const std::string& name) { 
    this->name = name; 
}

void Citizen::setID(int ID) {
     this->ID = ID; 
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

double Citizen::getincome()
{
    return this->income;
}

bool Citizen::getEmploymentStatus()
{
    return this->isEmployed;
}

void Citizen::display() const {
    std::cout << "Name: " << name << ", ID: " << ID << ", Age: " << age
              << ", Income: " << income << ", Satisfaction: " << satisfaction
              << ", Employed: " << (isEmployed ? "Yes" : "No") << "\n";
}