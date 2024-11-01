#include "CollectCitizenTax.h"


 CollectCitizenTax::CollectCitizenTax(Government* gov) :government(gov){}
void CollectCitizenTax::execute() {
    government->collectCitizenTax();
}