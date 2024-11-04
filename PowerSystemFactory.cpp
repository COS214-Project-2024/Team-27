#include "PowerSystemFactory.h"


std::unique_ptr<Utility> PowerSystemFactory::createUtility(double resourceAmount)
{
     return std::make_unique<PowerSystem>(resourceAmount);
}
