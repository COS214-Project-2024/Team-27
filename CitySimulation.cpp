#include "CitySimulation.h"

CitySimulation::CitySimulation(){
}

void CitySimulation::home(){
    int prompt;
    while (true) {
        cout << "========================================" << endl;
        cout << "1. View City Overview" << endl;
        cout << "2. Manage Buildings" << endl;
        cout << "3. Manage Citizens" << endl;
        cout << "4. Manage Utilities & Services" << endl;
        cout << "5. Adjust Tax Rates" << endl;
        cout << "6. City Growth & Development" << endl;
        cout << "7. Save City State" << endl;
        cout << "8. Load City State" << endl;
        cout << "9. Exit Simulation" << endl;
        cout << "========================================" << endl;
        cout << "Select an option (1-9): "<<endl;
        
        cin >> prompt;
        cout<<endl;
        cout <<endl<< "You have selected option " << prompt << endl;

        if (prompt == 9) {
            cout << "Exiting simulation. Goodbye!" << endl;
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
    stats();
    
    home();
}

void CitySimulation::processCommand(int command){
    switch(command){
        case 1:
            cout<<"Implement stats facade"<<endl;
            cout<<endl;
            option1();
            
            //build apartment function
            break;
        case 2: 
            cout<<"Implement building facade"<<endl;
            cout<<endl;
            option2();
            
            //build house function
            break;
        case 3:
            cout<<"Implement citizen facade"<<endl;
            cout<<endl;
            option3();
            
            //build landmark function
            break;
        case 4: 
            cout<<"Implement utilities facade"<<endl;
            cout<<endl;
            option4();
            
            //build commercial function
            break;
        case 5: 
            cout<<"Implement tax facade"<<endl;
            cout<<endl;
            option5();
            //build commercial function
            break;
        case 6: 
            cout<<"Implement city growth management facade"<<endl;
            cout<<endl;
            option6();
            //build commercial function
            break;
        case 7: 
            cout<<"Implement save city facade"<<endl;
            cout<<endl;
            option7();
            
            //build commercial function
            break;
        case 8: 
            cout<<"Implement load facade"<<endl;
            cout<<endl;
            option8();
            //build commercial function
            break;
        case 9: 
            cout<<"Implement exit facade"<<endl;
            cout<<endl;
            option9();
            //build commercial function
            break;
        default:
            cout<<"Wrong prompt, chose 1-9"<<endl;
            cout<<endl;
    }
}

void CitySimulation::stats(){
    cout<<"This is what is in the city at the moment: "<<endl;
    for(int i = 0; i<4;i++){
        cout<<endl;
    }
    //implement stats function

}

void CitySimulation::first(){
    cout<<"This is where we initialise the city with basic stats to get it going and the user will add onto what's here "<<endl;
    for(int i = 0; i<4;i++){
        cout<<endl;
    }
    cout << "=========================================================" << endl;
    //implement startup function

}

void CitySimulation::option1(){
    stats();
}

void CitySimulation::option2(){
    cout << "========================================" << endl;
    cout << "1. View Buildings Overview" << endl;
    cout << "2. Build Apartment Building" << endl;
    cout << "3. Build Apartment" << endl;
    cout << "4. Build House" << endl;
    cout << "5. Build Landmark" << endl;
    cout << "6. Build Commercial Building" << endl;
    cout << "7. Manage Utilities & Services" << endl;
    cout << "8. Manage Tax" << endl;
    cout << "9. Back To Home" << endl;
    cout << "10. Exit Simulation" << endl;
    cout << "========================================" << endl;
    cout << "Select an option (1-9): "<<endl;

    int prompt;
    cin>>prompt;

    switch(prompt){
        case 1:
            cout<<"Implement building stats facade"<<endl;
            cout<<endl;
            
            break;
        case 2: 
            cout<<"Implement apartment building facade"<<endl;
            cout<<endl;
            
            break;
        case 3:
            cout<<"Implement apartment facade"<<endl;
            cout<<endl;
            
            break;
        case 4: 
            cout<<"Implement house facade"<<endl;
            cout<<endl;
            
            break;
        case 5: 
            cout<<"Implement landmark facade"<<endl;
            cout<<endl;
            
            break;
        case 6: 
            cout<<"Implement Commercial Building facade"<<endl;
            cout<<endl;
            
            break;
        case 7: 
            cout<<"Implement Utilities and Services facade"<<endl;
            cout<<endl;
            
            break;
        case 8: 
            cout<<"Implement building tax facade"<<endl;
            cout<<endl;
            
            break;
        case 9:
            cout<<"going back home"<<endl;
            break;
        default:
            cout<<"Wrong prompt, chose 1-9"<<endl;
            cout<<endl;
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
    cout << "8. Manage Tax" << endl;
    cout << "9. Use service" << endl;
    cout << "10. Back To Home" << endl;
    cout << "11. Exit Simulation" << endl;
    cout << "========================================" << endl;
    cout << "Select an option (1-11): "<<endl;

    int prompt;
    cin>>prompt;

    switch(prompt){
        case 1:
            cout<<"Implement citizen stats facade"<<endl;
            cout<<endl;
            
            break;
        case 2: 
            cout<<"Implement new citizen facade"<<endl;
            cout<<endl;
            
            break;
        case 3:
            cout<<"Implement update citizen facade"<<endl;
            cout<<endl;
            
            break;
        case 4: 
            cout<<"Implement move into apartment facade"<<endl;
            cout<<endl;
            
            break;
        case 5: 
            cout<<"Implement move into house facade"<<endl;
            cout<<endl;
            
            break;
        case 6: 
            cout<<"Implement visit landmark facade"<<endl;
            cout<<endl;
            
            break;
        case 7: 
            cout<<"Implement visit commercial building facade"<<endl;
            cout<<endl;
            
            break;
        case 8: 
            cout<<"Implement citizen tax facade"<<endl;
            cout<<endl;
            
            break;
        case 9:
            cout<<"Implement citizen services facade"<<endl;
            break;
        case 10:
            cout<<"going back home"<<endl;
            stillGoing = false;
            break;
        case 11:
            cout<<"Exiting, showing stats: "<<endl;
            stats();
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
    cout << "1. View Utilities & Services Overview" << endl;
    cout << "2. Add new utility or Service" << endl;
    cout << "3. Update existing Utility or Service" << endl;
    cout << "4. Restock Resource" << endl;
    cout << "5. Use Resource" << endl;
    cout << "6. Use Service" << endl;
    cout << "7. Assign utility to building" << endl;
    cout << "8. Assign citizen to service" << endl;
    cout << "9. Back To Home" << endl;
    cout << "10. Exit Simulation" << endl;
    cout << "========================================" << endl;
    cout << "Select an option (1-10): "<<endl;

    int prompt;
    cin>>prompt;

    switch(prompt){
        case 1:
            cout<<"Implement Utilities & Services stats facade"<<endl;
            cout<<endl;
            
            break;
        case 2: 
            cout<<"Implement new utility or service facade"<<endl;
            cout<<endl;
            
            break;
        case 3: 
            cout<<"Implement updating utility or service facade"<<endl;
            cout<<endl;
            
            break;
        case 4:
            cout<<"Implement restock resource facade"<<endl;
            cout<<endl;
            
            break;
        case 5: 
            cout<<"Implement use resource facade"<<endl;
            cout<<endl;
            
            break;
        case 6: 
            cout<<"Implement use service facade"<<endl;
            cout<<endl;
            
            break;
        case 7: 
            cout<<"Implement utility to building facade"<<endl;
            cout<<endl;
            
            break;
        case 8: 
            cout<<"Implement service to citizen facade"<<endl;
            cout<<endl;
            
            break;
        case 9: 
            cout<<"going back home"<<endl;
            stillGoing = false;
            cout<<endl;
            
            break;
        case 10:
            cout<<"Exiting, showing stats: "<<endl;
            stats();
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
        cout << "1. View Tax Overview" << endl;
        cout << "2. Manage Building Tax" << endl;
        cout << "3. Manage Citizen Tax" << endl;
        cout << "4. Manage City Tax" << endl;
        cout << "5. Back To Home" << endl;
        cout << "6. Exit Simulation" << endl;
        cout << "========================================" << endl;
        cout << "Select an option (1-6): "<<endl;

    int prompt;
    cin>>prompt;

    switch(prompt){
        case 1:
            cout<<"Implement tax stats facade"<<endl;
            cout<<endl;
            
            break;
        case 2: 
            cout<<"Implement building tax facade"<<endl;
            cout<<endl;
            
            break;
        case 3: 
            cout<<"Implement citizen tax facade"<<endl;
            cout<<endl;
            
            break;
        case 4:
            cout<<"Implement all tax facade"<<endl;
            cout<<endl;
            
            break;
        case 5: 
            cout<<"going back home"<<endl;
            stillGoing = false;
            cout<<endl;
            
            break;
        case 6:
            cout<<"Exiting, showing stats: "<<endl;
            stats();
            break;

        default:
            cout<<"Wrong prompt, chose 1-6"<<endl;
            cout<<endl;
    }
    }
}

void CitySimulation::option6(){
bool stillGoing = true;
    while(stillGoing){
        cout << "========================================" << endl;
        cout << "1. View Population & Growth Overview" << endl;
        cout << "2. Manage Population & Growth" << endl;
        cout << "3. Simulate Natural Disaster" << endl;
        cout << "4. Make Buildings Operational" << endl;
        cout << "5. Back To Home" << endl;
        cout << "6. Exit Simulation" << endl;
        cout << "========================================" << endl;
        cout << "Select an option (1-6): "<<endl;

    int prompt;
    cin>>prompt;

    switch(prompt){
        case 1:
            cout<<"Implement population and growth stats facade"<<endl;
            cout<<endl;
            
            break;
        case 2: 
            cout<<"Implement manage population and growth facade"<<endl;
            cout<<endl;
            
            break;
        case 3: 
            cout<<"Implement natural disaster facade"<<endl;
            cout<<endl;
            
            break;
        case 4:
            cout<<"Implement all buildings operational facade"<<endl;
            cout<<endl;
            
            break;
        case 5: 
            cout<<"going back home"<<endl;
            stillGoing = false;
            cout<<endl;
            
            break;
        case 6:
            cout<<"Exiting, showing stats: "<<endl;
            stats();
            break;

        default:
            cout<<"Wrong prompt, chose 1-6"<<endl;
            cout<<endl;
    }
    }
}

void CitySimulation::option7(){
    bool stillGoing = true;
    while(stillGoing){
        cout << "========================================" << endl;
        cout << "1. View City States Overview" << endl;
        cout << "2. Manage City States" << endl;
        cout << "3. Overwrite Saved State" << endl;
        cout << "4. Back To Home" << endl;
        cout << "5. Exit Simulation" << endl;
        cout << "========================================" << endl;
        cout << "Select an option (1-5): "<<endl;

    int prompt;
    cin>>prompt;

    switch(prompt){
        case 1: 
            cout<<"Implement city state stats facade"<<endl;
            cout<<endl;
            
            break;
        case 2: 
            cout<<"Implement manage states facade"<<endl;
            cout<<endl;
            
            break;
        case 3:
            cout<<"Implement overwrite state facade"<<endl;
            cout<<endl;
            
            break;
        case 4: 
            cout<<"going back home"<<endl;
            stillGoing = false;
            cout<<endl;
            
            break;
        case 5:
            cout<<"Exiting, showing stats: "<<endl;
            stats();
            break;

        default:
            cout<<"Wrong prompt, chose 1-5"<<endl;
            cout<<endl;
    }
    }
}

void CitySimulation::option8(){
    bool stillGoing = true;
    while(stillGoing){
        cout << "========================================" << endl;
        cout << "1. View City States Overview" << endl;
        cout << "2. Manage City States" << endl;
        cout << "3. Back To Home" << endl;
        cout << "4. Exit Simulation" << endl;
        cout << "========================================" << endl;
        cout << "Select an option (1-4): "<<endl;

    int prompt;
    cin>>prompt;

    switch(prompt){
        case 1: 
            cout<<"Implement city state stats facade"<<endl;
            cout<<endl;
            
            break;
        case 2:
            cout<<"Implement manage states facade"<<endl;
            cout<<endl;
            
            break;
        case 3: 
            cout<<"going back home"<<endl;
            stillGoing = false;
            cout<<endl;
            
            break;
        case 4:
            cout<<"Exiting, showing stats: "<<endl;
            stats();
            break;

        default:
            cout<<"Wrong prompt, chose 1-4"<<endl;
            cout<<endl;
    }
    }
}

void CitySimulation::option9(){
    cout<<"Exiting the simulation, We hope you enjoyed! Showing stats: "<<endl;
    stats();
}