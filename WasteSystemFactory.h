#ifndef WASTESYSTEM_FACTORY_H
#define WASTESYSTEM_FACTORY_H

#include "WasteSystem.h"
#include <memory>

class WasteSystemFactory{
public:
    // Factory method to create WasteSystem objects
    Utility* createUtility(double resourceAmount);
    Utility* createUtility(double kilograms, int numOfTrucks);
};

#endif
