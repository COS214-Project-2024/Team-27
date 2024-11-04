#include "LandmarkFactory.h"

Landmark* LandmarkFactory::construct(string name){
    return new Landmark(name);
}