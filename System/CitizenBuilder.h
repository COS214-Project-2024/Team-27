#ifndef CITIZENBUILDER_H
#define CITIZENBUILDER_H

#include <iostream>
using namespace std;
#include "Citizen.h"

class CitizenBuilder{
 public:
    virtual ~CitizenBuilder() = default;   
    virtual void setName(const std::string& name) = 0;
    virtual void setAge(int age) = 0;
    virtual void setIncome(double income) = 0;
    virtual void setSatisfaction(int satisfaction) = 0;
    virtual void setEmploymentStatus(bool isEmployed) = 0;
    virtual Citizen* getCitizen() = 0;
};

#endif