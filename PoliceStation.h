#ifndef POLICESTATION_H
#define POLICESTATION_H

#include <vector>
#include <string>
#include "Citizen.h"
#include "Services.h"

class PoliceStation : public Services {
public:
    int Rating;
    std::vector<Citizen*> currentRequests;
   
    void improveRating();
    void decreaseRating();


    PoliceStation(int stationCapacity);
    void admitRequest(Citizen* citizen);  
    void releaseRequest(Citizen* citizen);
    void details();
    void useService(Citizen* citizen, string reason);
    void showCitizens();
    ~PoliceStation();
};

#endif
