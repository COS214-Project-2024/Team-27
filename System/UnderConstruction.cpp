#include "UnderConstruction.h"

void UnderConstruction::construct(Building* building){
    cout<<"Building already in construction"<<endl;
}

void UnderConstruction::operate(Building* building){
    building->setState(new Operational);
}

void UnderConstruction::closeDown(Building* building){
    building->setState(new ClosedDown);
}

void UnderConstruction::damage(Building* building){
    building->setState(new Damaged);
}
