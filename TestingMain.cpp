#include "Citizen.h"
#include "CityFacade.h"
#include "CitySimulation.h"
#include "BuildingFactory.h"
#include "ApartmentFactory.h"
#include "CommercialFactory.h"
#include "HouseFactory.h"
#include "LandmarkFactory.h"
#include "Building.h"
#include "Government.h"
#include "Apartment.h"
#include "ApartmentBuilding.h"
#include "Unit.h"
#include "House.h"
#include "Landmark.h"
#include "CommercialBuilding.h"
#include "BuildingState.h"
#include "UnderConstruction.h"
#include "Damaged.h"
#include "Operational.h"
#include "ClosedDown.h"
#include <iostream>
using namespace std;

void testFacade(){
    CitySimulation* simulation = new CitySimulation() ;
    simulation->start();
}

void testFactory(){
    HouseFactory* hf = new HouseFactory();
    House* home = hf->construct("Home");
    home->setSize("Big");
    home->operate();
    Building* newHome = home->clone();
    home->damage();
    newHome->closeDown();
    home->displayInfo();
    newHome->displayInfo();

    cout<<"================================="<<endl;

    CommercialFactory* cf = new CommercialFactory();
    CommercialBuilding* shop = cf->construct("myShop"); 
    shop->setSize("Small");
    shop->operate();
    CommercialBuilding* newShop = shop->clone();
    shop->damage();
    newShop->closeDown();
    shop->displayInfo();
    newShop->displayInfo();

    cout<<"================================="<<endl;

    LandmarkFactory* lf = new LandmarkFactory();
    Landmark* park = lf->construct("Park");
    park->setSize("Small");
    park->operate();
    Landmark* newPark = park->clone();
    park->damage();
    newPark->closeDown();
    park->displayInfo();
    newPark->displayInfo();

    cout<<"================================="<<endl;

    ApartmentFactory* af = new ApartmentFactory();
    ApartmentBuilding* myApartmentBuilding = af->construct("Apartment1");
    myApartmentBuilding->setSize("Small");
    myApartmentBuilding->operate();
    ApartmentBuilding* newApartmentBuilding = myApartmentBuilding->clone();
    myApartmentBuilding->damage();
    myApartmentBuilding->displayInfo();
    newApartmentBuilding->displayInfo();

    cout<<"================================="<<endl;

    Unit* myUnit = af->createUnit(123, "Small");
    myUnit->operate();
    Unit* newUnit = myUnit->clone();
    myUnit->damage();
    myUnit->displayInfo();
    newUnit->closeDown();
    newUnit->displayInfo();

    cout<<"================================="<<endl;
    
    myApartmentBuilding = new ApartmentBuilding("ap");
    myApartmentBuilding->addUnit(myUnit);
    myApartmentBuilding->displayInfo();
}

void testBasicBuildings(){
    Building* home = new House("Home");
    home->setSize("Big");
    home->operate();
    Building* newHome = home->clone();
    home->damage();
    newHome->closeDown();
    home->displayInfo();
    newHome->displayInfo();

    cout<<"================================="<<endl;

    Building* shop = new CommercialBuilding("myShop");
    shop->setSize("Small");
    shop->operate();
    Building* newShop = shop->clone();
    shop->damage();
    newShop->closeDown();
    shop->displayInfo();
    newShop->displayInfo();

    cout<<"================================="<<endl;

    Building* park = new Landmark("myPark");
    park->setSize("Small");
    park->operate();
    Building* newPark = park->clone();
    park->damage();
    newPark->closeDown();
    park->displayInfo();
    newPark->displayInfo();

    cout<<"================================="<<endl;

    Building* myApartmentBuilding = new ApartmentBuilding("Apartment Building");
    myApartmentBuilding->setSize("Small");
    myApartmentBuilding->operate();
    Building* newApartmentBuilding = myApartmentBuilding->clone();
    myApartmentBuilding->damage();
    myApartmentBuilding->displayInfo();
    newApartmentBuilding->displayInfo();

    cout<<"================================="<<endl;

    Building* myUnit = new Unit(123, "Medium");
    myUnit->setSize("Small");
    myUnit->operate();
    Building* newUnit = myUnit->clone();
    myUnit->damage();
    myUnit->displayInfo();
    newUnit->closeDown();
    newUnit->displayInfo();
}

void testMemento(){
    vector<Citizen*> citizens ;
    
        // Create 10 Citizen objects and store pointers in the vector
    for (int i = 0; i < 10; ++i) {
        Citizen* citizen = new Citizen();
        citizen->setName("Citizen" + to_string(i + 1)); // Setting a unique name for each
        citizen->setAge(20 + i); // Example age setting
        citizen->setIncome(30000 + i * 1000); // Example income setting
        citizen->setSatisfaction(50 + i * 5); // Example satisfaction setting
        citizen->setEmploymentStatus(i % 2 == 0); // Alternate employment status

        citizens.push_back(move(citizen)); // Add the Citizen to the vector
    }
    for (const auto& citizen : citizens) {
        citizen->display();
    }

    for(Citizen* citizen : citizens){
        delete citizen ;
    }

    // Next Step is to create buildings 
    vector<Building*> newBuildings ;
    CommercialBuilding* newCommercialBuilding = new CommercialBuilding("Nike Shop .");
    newBuildings.push_back(newCommercialBuilding);
    
    Operational* newOperationalState = new Operational();
    Operational* newOperationalState1 = new Operational();
    ApartmentBuilding* newApartment = new ApartmentBuilding("New Apartments .", newOperationalState);
    newBuildings.push_back(newApartment);

    cout << "----------------" << std::endl ;
    Government* newGov = new Government(8.00, 9.00, 2.0, citizens, newBuildings);

    GovernmentMemento* newMemento = newGov->saveState();
    newMemento->getDetails();
    GovernmentCaretaker* newCareTaker = new GovernmentCaretaker();
    newCareTaker->saveMemento(newMemento);
    newGov->displayState();
    ApartmentBuilding* newApartment2 = new ApartmentBuilding("New Apartments 2 .", newOperationalState1);
    newGov->addBuilding(newApartment2);
    newGov->displayState();
    newGov->restoreState(newCareTaker->getMemento(0));
    newGov->displayState();
    
}

// void setCitizenDetails(Citizen* citizen, const std::string& name, int age, double income, int satisfaction, bool isEmployed) {
//     citizen->setName(name);
//     citizen->setAge(age);
//     citizen->setIncome(income);
//     citizen->setSatisfaction(satisfaction);
//     citizen->setEmploymentStatus(isEmployed);
// }

// void testCitizenCreation() {
//     // Create a builder and director
//     ConcreteCitizenBuilder builder;
//     CitizenDirector director(&builder);

//     // Create a child citizen and display initial state
//     Citizen* child = director.createChild("Tommy", 10, 7);
//     std::cout << "Child Citizen Details (Before setting additional attributes):" << std::endl;
//     child->display();
//     std::cout << std::endl;

//     // Set additional details and display updated state
//     setCitizenDetails(child, "Tommy", 10, 0.0, 7, false);  
//     std::cout << "Child Citizen Details (After setting additional attributes):" << std::endl;
//     child->display();
//     std::cout << std::endl;

//     // Create an adult citizen and display initial state
//     Citizen* adult = director.createAdult("Sarah", 35, 8, 45000.0, true);
//     std::cout << "Adult Citizen Details (Before setting additional attributes):" << std::endl;
//     adult->display();
//     std::cout << std::endl;

//     // Set additional details and display updated state
//     setCitizenDetails(adult, "Sarah", 35, 45000.0, 8, true);  
//     std::cout << "Adult Citizen Details (After setting additional attributes):" << std::endl;
//     adult->display();
//     std::cout << std::endl;

//     // Clean up
//     delete child;
//     delete adult;
// }

int main(){

    // testFactory();

    // testFacade();
    
    // // // Test citizen creation
    // // testCitizenCreation();

    // testBasicBuildings();

    testMemento();

    return 0;
}
