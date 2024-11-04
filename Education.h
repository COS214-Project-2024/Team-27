#ifndef EDUCATION_H
#define EDUCATION_H

#include <vector>
#include <string>
#include "Citizen.h"
#include "Services.h"

class Education : public Services {
public:
    int Rating;
    std::vector<Citizen*> enrolledStudents;

    void improveRating();
    void decreaseRating();


    Education(int schoolCapacity);
    void enrollStudent(Citizen* citizen);
    void releaseStudent(Citizen* citizen);
    void useService(Citizen* citizen, string subject);
    void details();
    void showCitizens();
    ~Education();
};

#endif
