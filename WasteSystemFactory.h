#ifndef WASTESYSTEM_FACTORY_H
#define WASTESYSTEM_FACTORY_H

#include <memory>
#include "UtilityFactory.h"
#include "WasteSystem.h"

class WasteSystemFactory : public UtilityFactory{
public:
   
    std::unique_ptr<Utility> createUtility(double resourceAmount) override;
   std::unique_ptr<Utility> createUtility(double kilograms, int numOfTrucks);
};

#endif
