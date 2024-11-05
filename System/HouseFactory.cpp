#include "HouseFactory.h"

House* HouseFactory::construct(string name){
    return new House(name);
}