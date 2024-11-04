#include "PowerSystemFactory.h"


Utility* PowerSystemFactory::createUtility(double resourceAmount)
{
    return new PowerSystem(resourceAmount);
}
