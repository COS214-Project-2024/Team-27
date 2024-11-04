#ifndef COLLECTCITIZENTAX
#define COLLECTCITIZENTAX
#include "Command.h"
#include "Government.h"

class CollectCitizenTax:public Command{
  private:
  Government* gov;
  public :
  CollectCitizenTax(Government* gov);
    virtual void execute();
   
};


#endif