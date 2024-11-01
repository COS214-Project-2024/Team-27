#include "CollectBuildingTax.h"

 CollectBuildingTax::CollectBuildingTax(Government* gov) :government(gov){}

void CollectBuildingTax::execute() {
    government->collectBuildingTax();
}