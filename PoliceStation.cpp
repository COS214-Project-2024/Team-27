#include "PoliceStation.h"
#include <iostream>
#include <algorithm>

PoliceStation::PoliceStation(int stationCapacity): Services(stationCapacity), Rating(100){
}

void PoliceStation::admitRequest(Citizen* citizen){
if (currentRequests.size() < Capacity) {
        currentRequests.push_back(citizen);
        std::cout << "Citizen has been admitted to the police station for assistance."<<std::endl;
        improveRating();
    } else {
        std::cout << "Police Station is at full capacity!\n";
        decreaseRating();
    }
}

void PoliceStation::releaseRequest(Citizen* citizen){
auto it = std::find(currentRequests.begin(), currentRequests.end(), citizen);
    if (it != currentRequests.end()) {
        currentRequests.erase(it);
        std::cout << "Citizen has left the Police Station\n";
        improveRating();
    } else {
        std::cout << "Citizen not found in the Police Station.\n";
    }
}

void PoliceStation::useService(Citizen* citizen, string service) {
    if (find(currentRequests.begin(), currentRequests.end(), citizen) != currentRequests.end()) {
        cout <<"Citizen is using police services for " << service << "." << endl;
    } else {
        cout <<"Citizen must be admitted first to use police services" << endl;
    }
}

void PoliceStation::details(){
    std::cout << "Station Capacity: " << Capacity << "\n"
              << "Current Requests: " << currentRequests.size() << "\n"
              << "Rating: "<< Rating<<std::endl;
    
}


PoliceStation::~PoliceStation(){

}

void PoliceStation::improveRating() {
    if (Rating < 100) {
        Rating += 5;  
        if (Rating > 100) Rating = 100;  
        std::cout << "Police Station rating increased to " << Rating << "." << std::endl;
    }
}

void PoliceStation::decreaseRating() {
    if (Rating > 0) {
        Rating -= 10;  
        if (Rating < 0) Rating = 0; 
        std::cout << "Police Station rating decreased to " << Rating << "." << std::endl;
    }
}