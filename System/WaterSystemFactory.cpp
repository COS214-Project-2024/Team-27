#include "WaterSystemFactory.h"



std::unique_ptr<Utility> WaterSystemFactory::createUtility(double litres)
{
    return std::make_unique<WaterSystem>(litres);
}
