#include "WasteSystemFactory.h"

std::unique_ptr<Utility> WasteSystemFactory::createUtility(double resourceAmount)
{
    return std::make_unique<WasteSystem>(resourceAmount,10);
}

std::unique_ptr<Utility> WasteSystemFactory::createUtility(double kilograms, int numOfTrucks)
{
    return std::make_unique<WasteSystem>(kilograms,numOfTrucks);
}
