#include "PowerSystem.h"

PowerSystem::PowerSystem(double megawatts)
{
    this->megawatts = megawatts;
    this->save = megawatts;
    this->f = true;
    
}

void PowerSystem::update()
{
    megawatts+=save;
}

void PowerSystem::useResources(double used)
{
    if (used > megawatts)
    {
       f = false;
        std::cout<<"Not enough power "<<std::endl;
    }else{
        megawatts-= used;
    }
    
}
bool PowerSystem::flag()
{
    return f;
}

