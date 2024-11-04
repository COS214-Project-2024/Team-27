//
// Created by Khabane Lineo on 2024/10/30.
//

#ifndef TESTING_CINEMA_H
#define TESTING_CINEMA_H

#include <iostream>
#include <vector>
using namespace std;

#include "Citizen.h"
#include "Services.h"

class Cinema : Services {
public:
    int Rating;
    vector<Citizen*> currentAudience;

    void improveRating();
    void decreaseRating();
    
public:
    Cinema(int cinemaCapacity);
    void admitAudience(Citizen* citizen);
    void releaseAudience(Citizen* citizen);
    void details();
    void useService(Citizen* citizen, string movie);
    ~Cinema();
    
};

#endif //TESTING_CINEMA_H
