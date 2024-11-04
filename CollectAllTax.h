#ifndef COLLECTALLTAX_H
#define COLLECTALLTAX_H
#include "Command.h"
#include "Government.h"

class CollectAllTax:public Command{
  private:
  Government* gov;
  public :
  CollectAllTax(Government* gov);
    virtual void execute();

};

#endif