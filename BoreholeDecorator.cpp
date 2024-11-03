#include "BoreholeDecorator.h"

BoreholeDecorator::BoreholeDecorator(Building* building) : BuildingDecorator(building) {
    hasBorehole = true;
}

void BoreholeDecorator::displayInfo() {
    decoratedBuilding->displayInfo(); // Call the base building's displayInfo
    std::cout << "This building has a borehole." << std::endl;
}
