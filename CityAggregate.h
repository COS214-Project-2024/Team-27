#ifndef CITYAGGREGATE_H
#define CITYAGGREGATE_H

#include <iostream>
using namespace std;
#include "CitizenIterator.h"

class CityAggregate{
    private:

    public:
    virtual CityIterator* createBuildingIterator()=0;
    virtual CityIterator* createCitizenInterator()=0;
};

#endif