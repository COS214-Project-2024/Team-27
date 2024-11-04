//
// Created by Khabane Lineo on 2024/10/30.
//

#ifndef TESTING_SERVICES_H
#define TESTING_SERVICES_H

#include <iostream>
#include <vector>
using namespace std;
#include "Citizen.h"

class Services {
protected:
    int Capacity;

    virtual void improveRating() = 0;
    virtual void decreaseRating() = 0;
public:
    Services(int Capacity);
    virtual void details() = 0;
    
};

#endif //TESTING_SERVICES_H
