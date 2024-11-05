#include "CitySimulation.h"

CitySimulation::CitySimulation(){
    cityFacade = new CityFacade();
}

void CitySimulation::home(){
    int prompt;
    while (true) {
        cout << "========================================" << endl;
        cout << "1. View City Overview" << endl;
        cout << "2. Manage Buildings" << endl;
        cout << "3. Manage Citizens" << endl;
        cout << "4. Manage Utilities" << endl;
        cout << "5. Manage Services" << endl;
        cout << "6. Manage Tax" << endl;
        cout << "7. City Growth & Development" << endl;
        cout << "8. Save City State" << endl;
        cout << "9. Load City State" << endl;
        cout << "10. Exit Simulation" << endl;
        cout << "========================================" << endl;
        cout << "Select an option (1-10): "<<endl;
        
        cin >> prompt;
        cout<<endl;
        cout <<endl<< "You have selected option " << prompt << endl;

        if (prompt == 10) {
            cout << "Exiting simulation. Goodbye!" << endl
            << "This is what you have: "<<endl;
            cityFacade->showAllStats();
            break;
        }
        
        processCommand(prompt);
    }

}

void CitySimulation::start(){
    cout << "========================================" << endl;
    cout << "         CITY BUILDER SIMULATION        " << endl;
    cout << "========================================" << endl;

    first();
    
    home();
}

void CitySimulation::processCommand(int command){
    switch(command){
        case 1:
            option1();
            
            break;
        case 2: 
            option2();
            
            break;
        case 3:
            option3();
            
            break;
        case 4: 
            option4();
            
            //build commercial function
            break;
        case 5: 
            option5();
            
            //build commercial function
            break;
        case 6: 
            
            option6();
            //build commercial function
            break;
        case 7: 
            option7();
            //build commercial function
            break;
        case 8:                                                                                                                                                                                                                                                                              
            option8();
            
            //build commercial function
            break;
        case 9: 
            option9();
            //build commercial function
            break;
        case 10: 
            option10();
            //build commercial function
            break;
        default:
            cout<<"Wrong prompt, chose 1-10"<<endl;
            cout<<endl;
    }
}

void CitySimulation::stats(){
    cout<<"This is what is in the city at the moment: "<<endl;
    cityFacade->showAllStats();
}


void CitySimulation::first(){
    cout << "Welcome to The Creatives' City Builder Simulation!" << endl;
    cout << "In this simulation, you are the architect of a budding metropolis. You'll have the power to shape its growth, manage resources, and ensure the happiness of its citizens."<<endl;
    cout << "Begin by building foundational structures, establishing essential services, and crafting a vision for the city's future." << endl;
    cout << "As the city expands, you'll face new challenges and opportunities to turn this humble start into a thriving urban landscape." << endl;
    cout << endl;
    cout << "Good luck, and may your city flourish!" << endl;
    cout << endl;
    cout << "=========================================================" << endl;
    cout<<endl;
    
    cityFacade->startUp();

}

void CitySimulation::option1(){
    stats();
}

void CitySimulation::option2(){
    bool stillGoing = true;
    while(stillGoing){
        cout << "========================================" << endl;
        cout << "1. View Buildings Overview" << endl;
        cout << "2. Build Apartment Building" << endl;
        cout << "3. Build Apartment" << endl;
        cout << "4. Build House" << endl;
        cout << "5. Build Landmark" << endl;
        cout << "6. Build Commercial Building" << endl;
        cout << "7. Change Building states" << endl;
        cout << "8. Back To Home" << endl;
        cout << "========================================" << endl;
        cout << "Select an option (1-8): "<<endl;

        int prompt;
        cin>>prompt;

        switch(prompt){
            case 1:
                cityFacade->showBuildingStats();
                cout<<endl;
                
                break;
            case 2: 
                cityFacade->createAPBuilding();
                cout<<endl;
                
                break;
            case 3:
                cityFacade->createUnit();
                cout<<endl;
                
                break;
            case 4: 
                cityFacade->createHouse();
                cout<<endl;
                
                break;
            case 5: 
                cityFacade->createLandmark();
                cout<<endl;
                
                break;
            case 6: 
                cityFacade->createCommercial();
                cout<<endl;
                
                break;
            case 7: 
                cityFacade->manageBuildingStates();
                
                break;
            case 8:
                cout<<"going back home"<<endl;
                stillGoing = false;
                break;
            default:
                cout<<"Wrong prompt, chose 1-8"<<endl;
                cout<<endl;
        }
    }
}

void CitySimulation::option3(){
    bool stillGoing = true;
    while(stillGoing){
        cout << "========================================" << endl;
    cout << "1. View Citizens Overview" << endl;
    cout << "2. Create new citizen" << endl;
    cout << "3. Update existing citizen" << endl;
    cout << "4. Move into apartment" << endl;
    cout << "5. Move into house" << endl;
    cout << "6. Visit landmark" << endl;
    cout << "7. Visit commercial building" << endl;
    cout << "8. Back To Home" << endl;
    cout << "========================================" << endl;
    cout << "Select an option (1-11): "<<endl;

    int prompt;
    cin>>prompt;

    switch(prompt){
        case 1:
            cityFacade->showCitizenStats();
            break;
        case 2: 
            cityFacade->createCitizen();
            
            break;
        case 3:
            cityFacade->updateCitizens();
            
            break;
        case 4: 
            cityFacade->moveIn();
            
            break;
        case 5: 
            cityFacade->moveIn();
            
            break;
        case 6: 
            cityFacade->visitLandmark();
            
            break;
        case 7: 
            cityFacade->visitCommercialBuilding();
            cout<<endl;
            
            break;
        case 8:
            cout<<"going back home"<<endl;
            stillGoing = false;
            break;

        default:
            cout<<"Wrong prompt, chose 1-11"<<endl;
            cout<<endl;
    }
    }
    
}

void CitySimulation::option4(){
bool stillGoing = true;
    while(stillGoing){
        cout << "========================================" << endl;
    cout << "1. View Utilities Overview" << endl;
    cout << "2. Manage Utilities" << endl;
    cout << "3. Back To Home" << endl;
    cout << "========================================" << endl;
    cout << "Select an option (1-10): "<<endl;

    int prompt;
    cin>>prompt;

    switch(prompt){
        case 1:
            cityFacade->showUtilityStats();
            cout<<endl;
            
            break;
        case 2: 
            cityFacade->AssignUtilitiestoBuildings();
            cout<<endl;
            
            break;
        case 3: 
            cout<<"going back home"<<endl;
            stillGoing = false;
            cout<<endl;
            
            break;

        default:
            cout<<"Wrong prompt, chose 1-10"<<endl;
            cout<<endl;
    }
    }
}

void CitySimulation::option5(){
bool stillGoing = true;
    while(stillGoing){
        cout << "========================================" << endl;
    cout << "1. View Services Overview" << endl;
    cout << "2. Use Service" << endl;
    cout << "3. Back To Home" << endl;
    cout << "========================================" << endl;
    cout << "Select an option (1-3): "<<endl;

    int prompt;
    cin>>prompt;

    switch(prompt){
        case 1:
            cityFacade->viewServicesOverview();
            cout<<endl;
            
            break;
        
        case 2: 
            cityFacade->useResource();
            cout<<endl;
            
            break;
        case 3: 
            cout<<"going back home"<<endl;
            stillGoing = false;
            cout<<endl;
            
            break;

        default:
            cout<<"Wrong prompt, chose 1-10"<<endl;
            cout<<endl;
    }
    }
}

void CitySimulation::option6(){
bool stillGoing = true;
    while(stillGoing){
        cout << "========================================" << endl;
        cout << "1. Collect All Tax" << endl;
        cout << "2. Collect Building Tax" << endl;
        cout << "3. Collect Citizen Tax" << endl;
        cout << "4. Back To Home" << endl;
        cout << "========================================" << endl;
        cout << "Select an option (1-4): "<<endl;

    int prompt;
    cin>>prompt;

    switch(prompt){
        case 1:
            cityFacade->collectAllTax();
            cout<<endl;
            
            break;
        case 2: 
            cityFacade->collectBuildingTax();
            cout<<endl;
            
            break;
        case 3: 
            cityFacade->collectCitizensTax();
            cout<<endl;
            
            break;
        case 4:
            cout<<"going back home"<<endl;
            stillGoing = false;
            cout<<endl;
            
            break;

        default:
            cout<<"Wrong prompt, choose 1-4"<<endl;
            cout<<endl;
    }
    }
}

void CitySimulation::option7(){
bool stillGoing = true;
    while(stillGoing){
        cout << "========================================" << endl;
        cout << "1. View Population & Growth Overview" << endl;
        cout << "2. Manage & evaluate Population Growth" << endl;
        cout << "3. Simulate Natural Disaster" << endl;
        cout << "4. Make Buildings Operational" << endl;
        cout << "5. Back To Home" << endl;
        cout << "========================================" << endl;
        cout << "Select an option (1-6): "<<endl;

    int prompt;
    cin >> prompt;

    switch(prompt){
        case 1:
            cout << "The detailed overview of the city's population & growth overview :"<<endl;
            cityFacade->viewPopulationGrowthOverView();
            cout << endl;
            
            break;
        case 2: 
            cout<<"managing and evaluating population and growth facade"<<endl;
            cityFacade->managePopulationGrowth();
            cout<<endl;
            
            break;
        case 3: 
            double populationImpact, buildingImpact, economicImpact;
            cout << "Enter population impact (%): ";
            cin >> populationImpact;
            cout << "Enter building impact (%): ";
            cin >> buildingImpact;
            cout << "Enter economic impact factor: ";
            cin >> economicImpact;
            cityFacade->simulateNaturalDisaster(populationImpact, buildingImpact, economicImpact);
            break;
        case 4:
            cout<<"Implement all buildings operational facade"<<endl;
            cityFacade->makeAllBuildingsOperational();
            cout<<endl;
            
            break;
        case 5: 
            cout<<"going back home"<<endl;
            stillGoing = false;
            cout<<endl;
            
            break;

        default:
            cout<<"Wrong prompt, chose 1-6"<<endl;
            cout<<endl;
    }
    }
}

void CitySimulation::option8(){
    cityFacade->saveState();
}

void CitySimulation::option9(){
    bool stillGoing = true;
    while(stillGoing){
        cout << "========================================" << endl;
        cout << "1. Load City States" << endl;
        cout << "2. Back To Home" << endl;
        cout << "========================================" << endl;
        cout << "Select an option (1-4): "<<endl;

    int prompt;
    cin>>prompt;

    switch(prompt){
        case 1: 
            cityFacade->loadCityStates();
            
            break;
        case 2: 
            cout<<"going back home"<<endl;
            stillGoing = false;
            cout<<endl;
            
            break;
        default:
            cout<<"Wrong prompt, chose 1-4"<<endl;
            cout<<endl;
    }
    }
}

void CitySimulation::option10(){
    cout<<"Exiting the simulation, We hope you enjoyed! Showing stats: "<<endl;
    stats();
}
