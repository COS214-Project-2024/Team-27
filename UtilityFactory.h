#ifndef UTILITYFACTORY_H
#define UTILITYFACTORY_H

#include <memory>
#include "Utility.h"

class UtilityFactory {
public:
    virtual Utility* createUtility(double resourceAmount) = 0;
    
};

#endif
