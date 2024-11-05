#include "Damaged.h"

void Damaged::construct(Building* building){
    building->setState(new UnderConstruction);
}

void Damaged::operate(Building* building){
    building->setState(new Operational);
}

void Damaged::closeDown(Building* building){
    building->setState(new ClosedDown);
}

void Damaged::damage(Building* building){
    cout<<"Building already damaged"<<endl;
}