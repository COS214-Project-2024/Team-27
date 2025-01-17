#ifndef GOVERNMENT_H
#define GOVERNMENT_H
#include "Citizen.h"
#include "CityGrowthManager.h"
#include "GovernmentMemento.h"
#include "CollectAllTax.h"
#include "CollectBuildingTax.h"
#include "CollectCitizenTax.h"
#include "Building.h"
#include "ApartmentBuilding.h"
#include "House.h"
#include "Landmark.h"
#include "CommercialBuilding.h"

#include "CollectAllTax.h"
#include "CollectBuildingTax.h"
#include "CollectCitizenTax.h"
#include "Building.h"
#include "GovernmentMemento.h"

#include <string>
#include <vector>

using namespace std;

class CityGrowthManager;
class GovernmentCaretaker;
class CollectBuildingTax;
class CollectAllTax;
class Government {
  private:
    CityGrowthManager* cityGrowthManager;
    vector<Citizen*> citizens;

    vector<Building*> buildings;
    vector<ApartmentBuilding*> apartmentBuildings;
    vector<House*> houses;
    vector<Landmark*> landmarks;
    vector<CommercialBuilding*> commercialBuildings;

    double buildingTaxRate;
    double citizenTaxRate;
    double economicGrowthRate;
    double CTotalTax;
    double BTotalTax;

    CollectBuildingTax* collectbuildingtax;
    CollectCitizenTax* Collectcitizentax;
    CollectAllTax* collectalltax;

    GovernmentMemento* state;
    vector<GovernmentMemento*> states;

  public:
    Government(double cRate, double bRate, double economicGrowthRate, vector<Citizen*>, vector<Building*>);
    Government(double cRate, double bRate, double economicGrowthRate);

    // New constructor to take separate building vectors
    Government(double cRate, double bRate, double economicGrowthRate,
               vector<Citizen*> citizens, vector<ApartmentBuilding*> apartmentBuildings,
               vector<House*> houses, vector<Landmark*> landmarks,
               vector<CommercialBuilding*> commercialBuildings);
    
    Government(vector<Citizen*> citizens, vector<ApartmentBuilding*> apartmentBuildings,
               vector<House*> houses, vector<Landmark*> landmarks,
               vector<CommercialBuilding*> commercialBuildings);

    // Command
    void collectCitizenTax();
    void collectBuildingTax();
    void collectCityTax();

    // Composite
    void moveIn(int numPeople, string reason);
    void addCitizen(Citizen* c);
    void addBuilding(Building* b);

    void UpdateApartment(vector<ApartmentBuilding*> a);
    void UpdateHouse(vector<House*> h);
    void UpdateLandMarks(vector<Landmark*> l);
    void UpdateCommercial(vector<CommercialBuilding*> c); 

    // Memento
    GovernmentMemento* saveState(vector<Citizen*> citizens, vector<ApartmentBuilding*> apartmentBuildings, vector<House*> houses, vector<Landmark*> landmarks, vector<CommercialBuilding*> commercialBuildings);
    void restoreState(GovernmentMemento* memento);
    void displayState();

    // Getters
    double getCitizenTaxRate() { return citizenTaxRate; }
    double getBuildingTaxRate() { return buildingTaxRate; }
    double getEconomicGrowthRate() { return economicGrowthRate; }

    // setter
    void setCityGrowthManager(CityGrowthManager* newCityGrowthManager);
};

#endif