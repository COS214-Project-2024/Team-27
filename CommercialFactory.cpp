#include "CommercialFactory.h"

CommercialBuilding* CommercialFactory::construct(string name){
    return new CommercialBuilding(name);
}