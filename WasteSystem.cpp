#include "WasteSystem.h"

WasteSystem::WasteSystem(double Kilograms, int numOftrucks)
{
    this->Kilograms =Kilograms;
    this->numOftrucks = numOftrucks;
}

void WasteSystem::reboot(int increment)
{
    numOftrucks+=increment;
}

void WasteSystem::useResources(double used)
{
    if (used > Kilograms)
    {
        std::cout<<"the weight of waste is greater than what trucks can carry increase number of trucks"<<std::endl;
    }
    else{
         std::cout<<used <<"Kg of waste removed"<<std::endl;
    }
}