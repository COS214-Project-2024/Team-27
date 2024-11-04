#include "Healthcare.h"
#include <iostream>
#include <algorithm>

Healthcare::Healthcare(int hospitalCapacity): Services(hospitalCapacity), Rating(100){
}

void Healthcare::admitPatient(Citizen* citizen){
if (currentPatients.size() < Capacity) {
        currentPatients.push_back(citizen);
        std::cout << "Citizen admitted to hospital.\n";
        improveRating();
    } else {
        std::cout << "Hospital is at full capacity!\n";
        decreaseRating();
    }
}

void Healthcare::releasePatient(Citizen* citizen){
auto it = std::find(currentPatients.begin(), currentPatients.end(), citizen);
    if (it != currentPatients.end()) {
        currentPatients.erase(it);
        std::cout << "Citizen released from hospital.\n";
        improveRating();
    } else {
        std::cout << "Citizen not found in the hospital.\n";
    }
}

void Healthcare::useService(Citizen* citizen, string service) {
    if (find(currentPatients.begin(), currentPatients.end(), citizen) != currentPatients.end()) {
        cout <<"Citizen is using the healthcare service for " << service << "." << endl;
    } else {
        cout <<"Citizen is not a patient in this hospital." << endl;
    }
}

void Healthcare::details(){
    std::cout << "Hospital Capacity: " << Capacity << "\n"
              << "Current Patients: " << currentPatients.size() << "\n"
              << "Rating: "<< Rating<<std::endl;
    
}


Healthcare::~Healthcare(){

}

void Healthcare::improveRating() {
    if (Rating < 100) {
        Rating += 5;  
        if (Rating > 100) Rating = 100;  
        std::cout << "Hospital rating increased to " << Rating << "." << std::endl;
    }
}

void Healthcare::decreaseRating() {
    if (Rating > 0) {
        Rating -= 10;  
        if (Rating < 0) Rating = 0; 
        std::cout << "Hospital rating decreased to " << Rating << "." << std::endl;
    }
}