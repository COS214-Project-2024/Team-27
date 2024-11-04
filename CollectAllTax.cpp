#include "CollectAllTax.h"

CollectAllTax::CollectAllTax(Government *gov)
{
    this->gov=gov;
}

void CollectAllTax::execute()
{
    gov->collectCityTax();
}
