#ifndef GOVERNMENT_H
#define GOVERNMENT_H

#include "Citizen.h"
#include "CityGrowthManager.h"
#include "GovernmentMemento.h"

#include <string>
#include <vector>

using namespace std ;

class Government {
  private :
      GovernmentMediator* mediator ;
      Government* backup ;
      CityGrowthManager* cityGrowthManager ;
      vector<Citizen> citizens ;
      vector<Building> buildings ;
  public :
    Government(double cRate, double bRate, vector<Citizen*>);

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
};
#endif
