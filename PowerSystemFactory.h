#ifndef POWERSYSTEMFACTORY_H
#define POWERSYSTEMFACTORY_H

#include <memory>
#include "UtilityFactory.h"
#include "PowerSystem.h"

class PowerSystemFactory : public UtilityFactory {
public:
    std::unique_ptr<Utility> createUtility(double resourceAmount) override;
};

#endif
