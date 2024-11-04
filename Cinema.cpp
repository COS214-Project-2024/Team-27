#include "Cinema.h"
#include <iostream>
#include <algorithm>

Cinema::Cinema(int capacity) : Services(capacity), Rating(100) {}

void Cinema::admitAudience(Citizen* citizen) {
    if (currentAudience.size() < Capacity) {
        currentAudience.push_back(citizen);
        std::cout << "Citizen has been admitted to the Cinema." << std::endl;
        improveRating(); 
    } else {
        std::cout << "Cinema is at full capacity. " << std::endl;
        decreaseRating();
    }
}

void Cinema::releaseAudience(Citizen* citizen) {
    auto it = std::find(currentAudience.begin(), currentAudience.end(), citizen);
    if (it != currentAudience.end()) {
        currentAudience.erase(it);
        std::cout << "Citizen has left the Cinema." << std::endl;
        improveRating(); 
    } else {
        std::cout << "Citizen is not in the Cinema." << std::endl;
    }
}

void Cinema::useService(Citizen* citizen, string movie) {
    if (std::find(currentAudience.begin(), currentAudience.end(), citizen) != currentAudience.end()) {
        std::cout << "Citizen is watching " << movie << " in the Cinema." << std::endl;
    } else {
        std::cout << "Citizen is not in the Cinema." << std::endl;
    }
}

void Cinema::improveRating() {
    if (Rating < 100) {
        Rating += 5;  
        if (Rating > 100) Rating = 100; 
        std::cout << "Cinema rating increased to " << Rating << "." << std::endl;
    }
}

void Cinema::decreaseRating() {
    if (Rating > 0) {
        Rating -= 10;  
        if (Rating < 0) Rating = 0; 
        std::cout << "Cinema rating decreased to " << Rating << "." << std::endl;
    }
}

void Cinema::details() {
    std::cout << "Cinema Capacity: " << Capacity << "\n"
              << "Current Audience: " << currentAudience.size() << "\n"
              << "Rating: " << Rating << std::endl;
}

Cinema::~Cinema() {

}

void Cinema::showCitizens(){
    std::cout << "Current Audience in Cinema Service:" << std::endl;
        for (size_t i = 0; i < currentAudience.size(); ++i) {
            std::cout << i << ". " << currentAudience[i]->getName() << " (Age: " << currentAudience[i]->getAge() << ")" << std::endl;
        }
}
