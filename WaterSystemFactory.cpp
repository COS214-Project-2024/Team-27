#include "WaterSystemFactory.h"


Utility* WaterSystemFactory::createUtility(double resourceAmount)
{
    return new WaterSystem(resourceAmount);
}
