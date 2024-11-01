#include "CollectAllTax.h"


 CollectAllTax::CollectAllTax(Government* gov) : government(gov) {}

 void CollectAllTax::execute() {
    government->collectCitizenTax();
    government->collectBuildingTax();
    government->collectCityTax();
}
 