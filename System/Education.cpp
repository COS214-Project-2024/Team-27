#include "Education.h"
#include <iostream>
#include <algorithm>

Education::Education(int schoolCapacity) 
    : Services(schoolCapacity), Rating(100) {}

void Education::improveRating() {
    if (Rating < 100) {
        Rating += 5; 
        if (Rating > 100) Rating = 100;
        std::cout << "School rating increased to " << Rating << "." << std::endl;
    }
}

void Education::decreaseRating() {
    if (Rating > 0) {
        Rating -= 10; 
        if (Rating < 0) Rating = 0;
        std::cout << "School rating decreased to " << Rating << "." << std::endl;
    }}

void Education::enrollStudent(Citizen* citizen) {
    if (enrolledStudents.size() < Capacity) {
        enrolledStudents.push_back(citizen);
        std::cout << "Citizen enrolled in school.\n";
        improveRating();
    } else {
        std::cout << "School is at full capacity!\n";
        decreaseRating();
    }
}

void Education::releaseStudent(Citizen* citizen) {
    auto it = std::find(enrolledStudents.begin(), enrolledStudents.end(), citizen);
    if (it != enrolledStudents.end()) {
        enrolledStudents.erase(it);
        std::cout << "Citizen has left the school.\n";
    } else {
        std::cout << "Citizen not found in the school.\n";
    }
}

void Education::details() {
    std::cout << "School Capacity: " << Capacity << "\n"
              << "Enrolled Students: " << enrolledStudents.size() << "\n"
              << "Rating: " << Rating << std::endl;
}

void Education::useService(Citizen* citizen, string subject) {
    if (std::find(enrolledStudents.begin(), enrolledStudents.end(), citizen) != enrolledStudents.end()) {
        std::cout << "Citizen is using school for " << subject << "." << std::endl;
    } else {
        std::cout <<"Citizen is not a student in school." << std::endl;
    }
}

void Education::showCitizens(){
    std::cout << "Current Students in Education Service:" << std::endl;
        for (size_t i = 0; i < enrolledStudents.size(); ++i) {
            std::cout << i << ". " << enrolledStudents[i]->getName() << " (Age: " << enrolledStudents[i]->getAge() << ")" << std::endl;
        }
}

Education::~Education() {

}
