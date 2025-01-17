#include "WasteSystem.h"

WasteSystem::WasteSystem(double Kilograms, int numOftrucks)
{
    this->Kilograms =Kilograms;
    this->numOftrucks = numOftrucks;
    this->f = true;
    
}

bool WasteSystem::flag()
{
    return f;
}

void WasteSystem::update()
{
    numOftrucks+=2;
}

void WasteSystem::useResources(double used)
{
    if (used > Kilograms*numOftrucks)
    {   f = false;
        std::cout<<"the weight of waste is greater than what trucks can carry increase number of trucks"<<std::endl;
    }
    else{
         std::cout<<used <<"Kg of waste removed"<<std::endl;
    }
}

void WasteSystem::showresources()
{
    std::cout<<"number of kilograms a truck can carry : "<<Kilograms<<endl;
    std::cout<<"number of trucks available : "<<numOftrucks<<endl;
}