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
void CityGrowthManager::evaluatePopulationGrowth(){
    
}
void CityGrowthManager::evaluateBuildingExpansion(){
    savedGov = Government::
    int growthFactor = static_cast<int>(economicGrowthRate * 100);
    population += growthFactor ;
    cout << " Population growth evaluated : " << population << std:: endl ;
}
        void evaluateEconomicGrowth();
void CityGrowthManager::evaluateGrowth(GovernmentCaretaker* caretaker, int previousIndex = -1){
    if(previousIndex == -1){
        previousIndex = caretaker->history.size() -1 ;
    }

    GovernmentMemento* memento = caretaker->getMemento(previousIndex);
    if(memento){
        int previousPopulation = memento->getSavedPopulation();
        int previousBuildings = memento->getSavedNumberOfBuildings();
        double prevoousEconRate = memento->getSavedEconomicGrowthRate();

        int popGrowth = population - previousPopulation ;
        int buildingGrowth = numberOfBuildings - previousBuildings ;
        double econGrowth = economicGrowthRate - previousEconRate ;
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
