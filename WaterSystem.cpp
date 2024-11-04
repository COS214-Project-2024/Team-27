#include "WaterSystem.h"

WaterSystem::WaterSystem(double Litres)
{
    this->Litres = Litres;
    this->save = Litres;
    this->f = true;
}

void WaterSystem::update()
{
    Litres +=save;
}

void WaterSystem::useResources(double used)
{
    if (Litres < used )
    {  
        f=false;
       std::cout <<"Not enough water available "<<std::endl;
    }
    else{
        Litres -= used;
         std::cout << used <<" Litres of water used"<<std::endl;
    }
    
}

bool WaterSystem::flag()
{
    return f;
}

void WaterSystem::showresources()
{
    std::cout << Litres <<" Litres of water available"<<endl;
}