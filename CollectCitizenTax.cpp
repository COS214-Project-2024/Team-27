#include "CollectCitizenTax.h"

CollectCitizenTax::CollectCitizenTax(Government *gov)
{
    this->gov=gov;
}

void CollectCitizenTax::execute()
{
    gov->collectCitizenTax();
}
