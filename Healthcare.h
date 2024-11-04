//
// Created by Khabane Lineo on 2024/10/30.
//

#ifndef TESTING_HEALTHCARE_H
#define TESTING_HEALTHCARE_H

#include <iostream>
#include <vector>
using namespace std;

#include "Citizen.h"
#include "Services.h"

class Healthcare : Services{
public:

    int Rating;
    vector<Citizen*> currentPatients;


    void improveRating();
    void decreaseRating();
    

    Healthcare(int hospitalCapacity);
    void admitPatient(Citizen* citizen);
    void releasePatient(Citizen* citizen);
    void details();
    void useService(Citizen* citizen, string reason);
    ~Healthcare();
    int getCurrent();
    void showCitizens();
    
};

#endif //TESTING_HEALTHCARE_H
