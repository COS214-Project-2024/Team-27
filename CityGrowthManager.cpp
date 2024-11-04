#include "CityGrowthManager.h"



CityGrowthManager::CityGrowthManager(int pop, int numOfBuildings, double econG_rate)
    : population(pop), numberOfBuildings(numberOfBuildings), economicGrowthRate(econG_rate){}

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
    int growthFactor = static_cast<int>(economicGrowthRate * 50); // Example growth factor calculation
    population += growthFactor;
    cout << "Population growth evaluated: " << population << endl;
}
void CityGrowthManager::evaluateGrowth(GovernmentCaretaker* caretaker, int previousIndex) {
    if (previousIndex == -1) {
        previousIndex = caretaker->history.size() - 1; // Use the last saved state if no specific index is given
    }

    GovernmentMemento* memento = caretaker->getMemento(previousIndex);
    if (memento) {
        int previousPopulation = memento->getSavedPopulation();
        int previousBuildings = memento->getSavedNumberOfBuildings();
        double previousEconRate = memento->getSavedEconomicGrowthRate();

        int popGrowth = population - previousPopulation;
        int buildingGrowth = numberOfBuildings - previousBuildings;
        double econGrowth = economicGrowthRate - previousEconRate;

        cout << "Growth Comparison:" << endl;
        cout << " Population Growth: " << popGrowth << endl;
        cout << " Building Growth: " << buildingGrowth << endl;
        cout << " Economic Growth Rate Change: " << econGrowth << "%" << endl;
    } else {
        cout << "No previous state found for comparison." << endl;
    }
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


void CityGrowthManager::simulateNaturalDisaster(Government* myGov, 
                                                GovernmentCaretaker* caretaker, 
                                                double populationImpactPercentage, 
                                                double buildingImpactPercentage, 
                                                double economicImpactFactor) {
    // Save current state before applying disaster impact
    caretaker->saveMemento(myGov->saveState());
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