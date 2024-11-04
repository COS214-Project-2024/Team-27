#ifndef UTILITYFACTORY_H
#define UTILITYFACTORY_H

#include <memory>
#include "Utility.h"

class UtilityFactory {
public:
    virtual ~UtilityFactory() = default;
    virtual std::unique_ptr<Utility> createUtility(double resourceAmount) = 0;
};

#endif
