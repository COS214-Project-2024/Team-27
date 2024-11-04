#include "CollectBuildingTax.h"

CollectBuildingTax::CollectBuildingTax(Government *gov)
{
    this->gov=gov;
}

void CollectBuildingTax::execute()
{
    gov->collectBuildingTax();
}
