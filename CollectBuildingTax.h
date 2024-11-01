#ifndef COLLECTBUILDINGTAX_H
#define COLLECTBUILDINGTAX_H
#include "Government.h"
#include "Command.h"

class CollectBuildingTax :public Command {
private:
    Government* government;

public:
    CollectBuildingTax(Government* gov) ;
    void execute() override;

};

#endif