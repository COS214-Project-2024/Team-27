#ifndef WATERSYSTEM_FACTORY_H
#define WATERSYSTEM_FACTORY_H

#include "UtilityFactory.h"
#include "WaterSystem.h"
#include <memory>


class WaterSystemFactory : public UtilityFactory {
public:
    std::unique_ptr<Utility> createUtility(double litres);
};

#endif
