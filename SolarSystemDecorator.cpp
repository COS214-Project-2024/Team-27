#include "SolarSystemDecorator.h"

SolarSystemDecorator::SolarSystemDecorator(Building* building) : BuildingDecorator(building) {
    hasSolarPanel = true;
}

void SolarSystemDecorator::displayInfo() {
    decoratedBuilding->displayInfo(); // Call the base building's displayInfo
    std::cout << "This building has solar panels." << std::endl;
}
