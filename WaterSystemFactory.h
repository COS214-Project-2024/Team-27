#ifndef WATERSYSTEM_FACTORY_H
#define WATERSYSTEM_FACTORY_H

#include "WaterSystem.h"
#include <memory>

class WaterSystemFactory {
public:
    // Factory method to create WaterSystem objects
   Utility* createUtility(double resourceAmount);
};

#endif
