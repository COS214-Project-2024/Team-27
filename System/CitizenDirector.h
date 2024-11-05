#ifndef CITIZENDIRECTOR_H
#define CITIZENDIRECTOR_H

#include <iostream>
using namespace std;

#include "CitizenBuilder.h"

class CitizenDirector{
private:
    CitizenBuilder* builder;

public:
    CitizenDirector(CitizenBuilder* builder);

    Citizen* createChild(const std::string& name, int age, int satisfaction);
    Citizen* createAdult(const std::string& name,int age, int satisfaction, double income, bool isEmployed);
};

#endif