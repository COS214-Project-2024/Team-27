#include "WaterSystem.h"

WaterSystem::WaterSystem(double Litres)
{
    this->Litres = Litres;
    this->save = Litres;
    
}

void WaterSystem::update()
{
    Litres +=save;
}

void WaterSystem::useResources(double used)
{
    if (Litres < used )
    { 
       std::cout <<"Not enough water available "<<std::endl;
    }
    else{
        Litres -= used;
         std::cout << used <<" Litres of water used"<<std::endl;
    }
    
}