#ifndef CONCRETECITIZENBUILDER_H
#define CONCRETECITIZENBUILDER_H

#include <iostream>
using namespace std;
#include "CitizenBuilder.h"

class ConcreteCitizenBuilder: public CitizenBuilder{
private:
    Citizen* citizen;

public:
    ConcreteCitizenBuilder();
    ~ConcreteCitizenBuilder();

    void setName(const std::string& name) override;
    void setAge(int age) override;
    void setIncome(double income) override;
    void setSatisfaction(int satisfaction) override;
    void setEmploymentStatus(bool isEmployed) override;
    Citizen* getCitizen() override;

    void reset();
};

#endif