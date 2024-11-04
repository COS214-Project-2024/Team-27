// CitizenDirector.cpp

#include "CitizenDirector.h"

CitizenDirector::CitizenDirector(CitizenBuilder* builder) : builder(builder) {}

Citizen* CitizenDirector::createChild(const std::string& name, int age, int satisfaction) {
    builder->setName(name);
    builder->setAge(age);           // Typical age for a child
    builder->setIncome(0.0);       // Children have no income
    builder->setSatisfaction(satisfaction);  // Default satisfaction
    builder->setEmploymentStatus(false); // Not employed
    return builder->getCitizen();
}

Citizen* CitizenDirector::createAdult(const std::string& name, int age, int satisfaction, double income, bool isEmployed) {
    builder->setName(name);
    builder->setAge(age);
    builder->setIncome(income);
    builder->setSatisfaction(satisfaction);  // Default satisfaction for adults
    builder->setEmploymentStatus(isEmployed);
    return builder->getCitizen();
}