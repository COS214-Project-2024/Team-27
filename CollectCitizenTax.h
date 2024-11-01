#ifndef COLLECTCITIZENTAX
#define COLLECTCITIZENTAX
#include <iostream>
#include "Government.h"
#include "Command.h"


class CollectCitizenTax: public Command {
private:
    Government* government;
    public:
      CollectCitizenTax(Government* gov) ;
    virtual void execute() ;
};


#endif