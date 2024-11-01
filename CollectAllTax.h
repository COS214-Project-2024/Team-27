#ifndef COLLECTALLTAX_H
#define COLLECTALLTAX_H
#include "Government.h"
#include "Command.h"

class CollectAllTax: public Command {
private:
    Government* government;

    public:
 virtual void execute();
        CollectAllTax(Government* gov);
};

#endif