#include <iostream>
#include "BuildingFactory.h"
#include "ApartmentFactory.h"
#include "CommercialFactory.h"
#include "HouseFactory.h"
#include "LandmarkFactory.h"
#include "WaterSystemFactory.h"
#include "PowerSystemFactory.h"
#include "WasteSystemFactory.h"
#include "Building.h"
#include "Apartment.h"
#include "ApartmentBuilding.h"
#include "Unit.h"
#include "House.h"
#include "Landmark.h"
#include "CommercialBuilding.h"
#include "ConcreteCitizenBuilder.h"
#include "Citizen.h"
#include "CitizenBuilder.h"
#include "CitizenDirector.h"
#include "Transport.h"
#include "Walk.h"
#include "Taxi.h"
#include "Cycle.h"
#include "Bus.h"
#include "BuildingMaterials.h"
#include "Services.h"
#include "Healthcare.h"
#include "Education.h"
#include "PoliceStation.h"
#include "Cinema.h"
#include "Government.h"
#include "Citizen.h"




void factory();
int main() {
    // Create a PowerSystem object using the factory
    
    return 0;
}
void factory(){
    auto powerSystem = PowerSystemFactory().createUtility(100.0);
    std::cout << "\nTesting PowerSystem:\n";
    powerSystem->useResources(30);  // Using 30 megawatts
    powerSystem->update();          // Updating power (restoring to initial value)
    std::cout << "Flag status: " << powerSystem->flag() << std::endl;  // Checking if power is sufficient

    // Create a WasteSystem object using the factory
    auto wasteSystem = WasteSystemFactory().createUtility(500, 2);
    std::cout << "\nTesting WasteSystem:\n";
    wasteSystem->useResources(200);  // Using 200 kilograms of waste capacity
    wasteSystem->update();           // Adding two trucks
    std::cout << "Flag status: " << wasteSystem->flag() << std::endl;  // Checking if trucks are sufficient

    // Create a WaterSystem object using the factory
    auto waterSystem = WaterSystemFactory().createUtility(1000);
    std::cout << "\nTesting WaterSystem:\n";
    waterSystem->useResources(200);  // Using 200 litres of water
    waterSystem->update();           // Replenishing water
    std::cout << "Flag status: " << waterSystem->flag() << std::endl;  // Checking if water is sufficient

    // Additional tests for edge cases
    std::cout << "\nEdge case testing:\n";
    
    // Attempt to use more power than available
    powerSystem->useResources(200);
    std::cout << "PowerSystem flag after overuse: " << powerSystem->flag() << std::endl;

    // Attempt to use more waste capacity than available
    wasteSystem->useResources(2000);
    std::cout << "WasteSystem flag after overuse: " << wasteSystem->flag() << std::endl;

    // Attempt to use more water than available
    waterSystem->useResources(1500);
    std::cout << "WaterSystem flag after overuse: " << waterSystem->flag() << std::endl;

}
