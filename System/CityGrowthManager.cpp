#include "CityGrowthManager.h"



CityGrowthManager::CityGrowthManager(int pop, int numOfBuildings, double econG_rate)
    : population(pop), numberOfBuildings(numOfBuildings), economicGrowthRate(econG_rate){}

void CityGrowthManager::setPopulation(int pop){
    population = pop ;
}
void CityGrowthManager::setNumOfBuildings(int num){
    numberOfBuildings = num ;
}
void CityGrowthManager::setEconGrowthrate(double rate){
    economicGrowthRate = rate ;
}

void CityGrowthManager::evaluatePopulationGrowth() {
    int growthFactor = static_cast<int>(economicGrowthRate * 3);
    population += growthFactor;
    cout << "Population growth evaluated: " << population << endl;
}
int CityGrowthManager::getPopulation(){
    return population ;
}

int CityGrowthManager::getNumOfBuildings(){
    return numberOfBuildings ;
}

double CityGrowthManager::getEconGrowthRate(){
    return economicGrowthRate ;
}


void CityGrowthManager::simulateNaturalDisaster(double populationImpactPercentage, 
                                                double buildingImpactPercentage, 
                                                double economicImpactFactor) {
    // Calculate impact on population
    int populationLoss = static_cast<int>(population * (populationImpactPercentage / 100.0));
    population = std::max(0, population - populationLoss);

    // Calculate impact on buildings
    int buildingsLost = static_cast<int>(numberOfBuildings * (buildingImpactPercentage / 100.0));
    numberOfBuildings = std::max(0, numberOfBuildings - buildingsLost);

    // Calculate impact on economic growth rate
    economicGrowthRate *= economicImpactFactor;
    if (economicGrowthRate < 0) economicGrowthRate = 0;

    std::cout << "Disaster simulated: Population, buildings, and economy adjusted." << std::endl;
}

void CityGrowthManager::evaluateBuildingExpansion() {
    int newBuildings = static_cast<int>(economicGrowthRate * 10);  // Example formula
    numberOfBuildings += newBuildings;
    std::cout << "Building expansion evaluated. New number of buildings: " << numberOfBuildings << std::endl;
}

void CityGrowthManager::evaluateEconomicGrowth() {
    double economicGrowthIncrease = 0.01;  // Assume a 1% increase
    economicGrowthRate += economicGrowthIncrease;
    std::cout << "Economic growth evaluated. New economic growth rate: " << economicGrowthRate << std::endl;
}