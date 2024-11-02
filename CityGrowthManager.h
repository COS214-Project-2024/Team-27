#ifndef CITYGROWTHMANAGER_H
#define CITYGROWTHMANAGER_H

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
        void evaluateGrowth();
        //getters
        int getPopulation();
        int getNumOfBuildings();
        double getEconGrowthRate();
};

#endif