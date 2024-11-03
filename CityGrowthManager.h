#ifndef CITYGROWTHMANAGER_H
#define CITYGROWTHMANAGER_H


#include "GovernmentCareTaker.h"
#include "Government.h"
#include <iostream>

class CityGrowthManager{
    private :
        int population ;
        int numberOfBuildings ;
        double economicGrowthRate ;
    public :
        CityGrowthManager(int pop, int numOfBuildings, double econG_rate);
        //setters
        void setPopulation(int pop);
        void setNumOfBuildings(int num);
        void setEconGrowthrate(double rate);
        //Formulas + stats
        void evaluatePopulationGrowth();
        void evaluateBuildingExpansion();
        void evaluateEconomicGrowth();
        void evaluateGrowth(GovernmentCaretaker* caretaker, int previousIndex);
        //getters
        int getPopulation();
        int getNumOfBuildings();
        double getEconGrowthRate();
        void CityGrowthManager::simulateNaturalDisaster(Government* , GovernmentCaretaker* caretaker, 
                                                double populationImpactPercentage, 
                                                double buildingImpactPercentage, 
                                                double economicImpactFactor) ;
}; 

#endif
