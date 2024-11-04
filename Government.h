#ifndef GOVERNMENT_H
#define GOVERNMENT_H
#include "Citizen.h"
#include "CityGrowthManager.h"
#include "GovernmentMemento.h"

#include "CollectAllTax.h"
#include "CollectBuildingTax.h"
#include "CollectCitizenTax.h"
#include "Building.h"
#include "GovernmentMemento.h"

#include <string>
#include <vector>

using namespace std ;

class Government {
  private :
      // GovernmentMediator* mediator ;
      Government* backup ;
      CityGrowthManager* cityGrowthManager ;
      vector<Citizen*> citizens ;
      vector<Building*> buildings ;
      double buildingTaxRate ;
      double citizenTaxRate ;
      double economicGrowthRate ; 
      double CTotalTax;
      double BTotalTax;
      CollectBuildingTax *collectbuildingtax;
      CollectCitizenTax *Collectcitizentax;
      CollectAllTax *collectalltax;
  public :
    Government(double cRate, double bRate, double economicGrowthRate, vector<Citizen*>, vector<Building*>);

    // Command
    void collectCitizenTax() ;
    void collectBuildingTax();
    void collectCityTax();

    // Composite
    void moveIn(int numPeople, string reason);
    void addCitizen(Citizen* c);
    void addBuilding(Building* b);

    // Memento
    GovernmentMemento* saveState();
    void restoreState(GovernmentMemento* memento);
    void displayState();

    //getters
    double getCitizeTaxRate(){
      return citizenTaxRate ;
    }
    double getBuildingTaxRate(){
      return buildingTaxRate ;
    }
     double getEconomicGrowthRate(){
      return economicGrowthRate ;
    }
};
#endif
