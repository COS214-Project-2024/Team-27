#include "WasteSystemFactory.h"

Utility* WasteSystemFactory::createUtility(double resourceAmount)
{
    return new WasteSystem(resourceAmount,10);
}

Utility* WasteSystemFactory::createUtility(double kilograms, int numOfTrucks)
{
   return new WasteSystem(kilograms,numOfTrucks);
}
