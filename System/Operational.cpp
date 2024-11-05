#include "Operational.h"

void Operational::construct(Building* building){
    building->setState(new UnderConstruction);
}

void Operational::operate(Building* building){
    cout<<"Building already Operational"<<endl;
}

void Operational::closeDown(Building* building){
    building->setState(new ClosedDown);   
}

void Operational::damage(Building* building){
     building->setState(new Damaged);
}