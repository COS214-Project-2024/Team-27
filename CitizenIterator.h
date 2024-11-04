#ifndef CITIZENITERATOR_H
#define CITIZENITERATOR_H

#include <iostream>
#include "Citizen.h"
#include "CityIterator.h"
#include <vector>
using namespace std;

class CitizenIterator: public CityIterator{
    private:
     vector<Citizen*> citizens ;
int currentindex;
    public:
    CitizenIterator(vector<Citizen*> citizens);
     virtual bool hasNext();
     Citizen* next();
    virtual bool isDone();
     Citizen* currentItem();
};

#endif
