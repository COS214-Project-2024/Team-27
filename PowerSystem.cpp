#include "PowerSystem.h"

PowerSystem::PowerSystem(double megawatts)
{
    this->megawatts = megawatts;
    this->save = megawatts;
    
}

void PowerSystem::reboot()
{
    megawatts+=save;
}

void PowerSystem::useResources(double used)
{
    if (used > megawatts)
    {
        std::cout<<"Not enough power "<<std::endl;
    }else{
        megawatts-= used;
    }
    
}
