#ifndef COLLECTBUILDINGTAX_H
#define COLLECTBUILDINGTAX_H
#include "Command.h"
#include "Government.h"

class CollectBuildingTax:public Command {
  private:
  Government* gov;
  public :
  CollectBuildingTax(Government* gov);
    virtual void execute();
};

#endif