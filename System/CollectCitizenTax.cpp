#include "CollectCitizenTax.h"
#include <iostream>

CollectCitizenTax::CollectCitizenTax(vector<Citizen*> citizens) {
    this->citizens = citizens;
    iterator = new CitizenIterator(citizens);
}

void CollectCitizenTax::execute() {
    City* myCity = new City(citizens);

    CitizenIterator* myCitizenIterator = myCity->createCitizenIterator(citizens);
    while (myCitizenIterator->hasNext()) {
        Citizen* citizen = myCitizenIterator->next();
        if (citizen->getIncome() > 3000) {
            std::cout << "Citizen " << citizen->getName() << " earns above 3000. Collecting tax." << std::endl;
        } else {
            std::cout << "Citizen " << citizen->getName() << " does not earn enough for tax." << std::endl;
        }
    }
}
