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
        void evaluateBuildingExpansion();
        void evaluateEconomicGrowth();
        void evaluateGrowth();
        //getters
        int getPopulation();
        int getNumOfBuildings();
        double getEconGrowthRate();
};