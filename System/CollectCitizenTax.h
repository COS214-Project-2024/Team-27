#ifndef COLLECTCITIZENTAX
#define COLLECTCITIZENTAX

#include "Command.h"
#include "CitizenIterator.h"
#include "City.h"
#include <vector>

class CitizenIterator;
class CollectCitizenTax : public Command {
public:
    CollectCitizenTax(vector<Citizen*> citizens);
    void execute() override;

private:
    CityIterator* iterator;
    vector<Citizen*> citizens;
};

#endif
