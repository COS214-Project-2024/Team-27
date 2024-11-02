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
        void evaluateGrowth();
        //getters
int CityGrowthManager::getPopulation(){
    return population ;
}

int CityGrowthManager::getNumOfBuildings(){
    return numberOfBuildings ;
}

double CityGrowthManager::getEconGrowthRate(){
    return economicGrowthRate ;
}
