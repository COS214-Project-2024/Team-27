#ifndef POWERSYSTEMFACTORY_H
#define POWERSYSTEMFACTORY_H

#include <memory>
#include "PowerSystem.h"
#include "UtilityFactory.h"
#include "Utility.h"

class PowerSystemFactory: public UtilityFactory{
public:
   
    Utility* createUtility(double resourceAmount);
};
#endif

