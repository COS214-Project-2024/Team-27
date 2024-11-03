// ConcreteCitizenBuilder.cpp

#include "ConcreteCitizenBuilder.h"

ConcreteCitizenBuilder::ConcreteCitizenBuilder() {
    reset();
}

ConcreteCitizenBuilder::~ConcreteCitizenBuilder() {
    delete citizen;
}

void ConcreteCitizenBuilder::reset() {
    citizen = new Citizen();
}

void ConcreteCitizenBuilder::setName(const std::string& name) {
    citizen->setName(name);
}

void ConcreteCitizenBuilder::setAge(int age) {
    citizen->setAge(age);
}

void ConcreteCitizenBuilder::setIncome(double income) {
    citizen->setIncome(income);
}

void ConcreteCitizenBuilder::setSatisfaction(int satisfaction) {
    citizen->setSatisfaction(satisfaction);
}

void ConcreteCitizenBuilder::setEmploymentStatus(bool isEmployed) {
    citizen->setEmploymentStatus(isEmployed);
}

Citizen* ConcreteCitizenBuilder::getCitizen() {
    Citizen* result = citizen;
    reset();
    return result;
}