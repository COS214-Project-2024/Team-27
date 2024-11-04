#include "BuildingDecorator.h"

BuildingDecorator::BuildingDecorator(Building* building) : decoratedBuilding(building) {}

BuildingDecorator::~BuildingDecorator() {
    delete decoratedBuilding;
}

void BuildingDecorator::setSize(std::string size) {
    decoratedBuilding->setSize(size);
}

void BuildingDecorator::setState(BuildingState* newState) {
    decoratedBuilding->setState(newState);
}

BuildingState* BuildingDecorator::getState() {
    return decoratedBuilding->getState();
}

void BuildingDecorator::getName() {
    decoratedBuilding->getName();
}

void BuildingDecorator::construct() {
    decoratedBuilding->construct();
}

void BuildingDecorator::operate() {
    decoratedBuilding->operate();
}

void BuildingDecorator::closeDown() {
    decoratedBuilding->closeDown();
}

void BuildingDecorator::damage() {
    decoratedBuilding->damage();
}

Building* BuildingDecorator::clone() {
    return decoratedBuilding->clone();
}

void BuildingDecorator::useResources() {
    decoratedBuilding->useResources();
}
