#include "ClosedDown.h"

void ClosedDown::construct(Building* building){
    building->setState(new UnderConstruction);
}

void ClosedDown::operate(Building* building){
    building->setState(new Operational);
}

void ClosedDown::closeDown(Building* building){
    cout<<"Building already closed down"<<endl;
}

void ClosedDown::damage(Building* building){
     building->setState(new Damaged);
}