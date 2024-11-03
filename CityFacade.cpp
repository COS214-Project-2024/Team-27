#include "CityFacade.h"

CityFacade::CityFacade(){
}

void CityFacade::createAPBuilding(){
    if(apartmentBuildings.size()>0){
        cout<<"Options: "<<endl;
        cout<<"1. New Apartment Building"<<endl;
        cout<<"2. Clone existing apartment building"<<endl;
        int opt;
        cin>>opt;
        if(opt == 1){
            string name;
            cout<<"You are about to create a new Apartment Building. Enter a name for it:"<<endl;
            cin>>name;
            string size;
            cout<<endl<<"Enter a size for it(Small, Medium or Big):"<<endl;
            cin>>size;

            ApartmentFactory* af = new ApartmentFactory();
            ApartmentBuilding* myApartmentBuilding = af->construct(name);
            myApartmentBuilding->setSize(size);
            
            
            cout<<"Would you like to make "<<name<<" Operational? (Y/N)"<<endl;
            string yn;
            cin>>yn;
            if(yn == "Y"){
                myApartmentBuilding->operate();
            } 
            apartmentBuildings.push_back(myApartmentBuilding);
            cout<<"Apartment building created"<<endl;
        } else if (opt == 2){
            cout<<"Select an apartment building to clone:"<<endl;
            showBuildings("ApartmentB");
            int num;
            cin>>num;
            if(0<num-1<apartmentBuildings.size()){
                apartmentBuildings.push_back(apartmentBuildings[num-1]->clone());
            }
            cout<<"Apartment building cloned"<<endl;
        }
        return;
    }

    string name;
    cout<<"You are about to create a new Apartment Building. Enter a name for it:"<<endl;
    cin>>name;
    string size;
    cout<<endl<<"Enter a size for it(Small, Medium or Big):"<<endl;
    cin>>size;

    ApartmentFactory* af = new ApartmentFactory();
    ApartmentBuilding* myApartmentBuilding = af->construct(name);
    myApartmentBuilding->setSize(size);
    
    cout<<"Would you like to make "<<name<<" Operational? (Y/N)"<<endl;
    string yn;
    cin>>yn;
    if(yn == "Y"){
        myApartmentBuilding->operate();
    } 
    apartmentBuildings.push_back(myApartmentBuilding);

}

void CityFacade::createUnit(){
    if(apartmentBuildings.size()>0){
        cout<<"Choose an apartment building to add your unit to: "<<endl;
        showBuildings("ApartmentB");
        int building;
        cin>>building;
       
        int number;
        cout<<"You are about to create a new unit. Enter a number for it:"<<endl;
        cin>>number;
        string size;
        cout<<endl<<"Enter a size for it(Small, Medium or Big):"<<endl;
        cin>>size;

        ApartmentFactory* af = new ApartmentFactory();
        Unit* myUnit = af->createUnit(number, size);
        myUnit->setSize(size);
        
        
        cout<<"Would you like to make Unit "<<number<<" Operational? (Y/N)"<<endl;
        string yn;
        cin>>yn;
        if(yn == "Y"){
            myUnit->operate();
        } 
        apartmentBuildings[building-1]->addUnit(myUnit);
        cout<<"Unit created and added"<<endl;
        
        return;
    }

    cout<<"No apartment buildings in the city. Create one first"<<endl;

}

void CityFacade::createHouse(){
    if(houses.size()>0){
        cout<<"Options: "<<endl;
        cout<<"1. New house"<<endl;
        cout<<"2. Clone existing house"<<endl;
        int opt;
        cin>>opt;
        if(opt == 1){
            string name;
            cout<<"You are about to create a new house. Enter a name for it:"<<endl;
            cin>>name;
            string size;
            cout<<endl<<"Enter a size for it(Small, Medium or Big):"<<endl;
            cin>>size;

            HouseFactory* af = new HouseFactory();
            House* myHouse = af->construct(name);
            myHouse->setSize(size);
            
            
            cout<<"Would you like to make "<<name<<" Operational? (Y/N)"<<endl;
            string yn;
            cin>>yn;
            if(yn == "Y"){
                myHouse->operate();
            } 
            houses.push_back(myHouse);
            cout<<"House created"<<endl;
        } else if (opt == 2){
            cout<<"Select a house to clone:"<<endl;
            showBuildings("House");
            int num;
            cin>>num;
            if(0<num-1<houses.size()){
                houses.push_back(houses[num-1]->clone());
            }
            cout<<"House cloned"<<endl;
        }
        return;
    }

    string name;
    cout<<"You are about to create a new House. Enter a name for it:"<<endl;
    cin>>name;
    string size;
    cout<<endl<<"Enter a size for it(Small, Medium or Big):"<<endl;
    cin>>size;

    HouseFactory* af = new HouseFactory();
    House* myHouse = af->construct(name);
    myHouse->setSize(size);
    
    cout<<"Would you like to make "<<name<<" Operational? (Y/N)"<<endl;
    string yn;
    cin>>yn;
    if(yn == "Y"){
        myHouse->operate();
    } 
    houses.push_back(myHouse);
    cout<<"House created"<<endl;

}

void CityFacade::createLandmark(){
    if(landmarks.size()>0){
        cout<<"Options: "<<endl;
        cout<<"1. New landmark"<<endl;
        cout<<"2. Clone existing landmark"<<endl;
        int opt;
        cin>>opt;
        if(opt == 1){
            string name;
            cout<<"You are about to create a new landmark. Enter a name for it:"<<endl;
            cin>>name;
            string size;
            cout<<endl<<"Enter a size for it(Small, Medium or Big):"<<endl;
            cin>>size;

            LandmarkFactory* af = new LandmarkFactory();
            Landmark* myLandmark = af->construct(name);
            myLandmark->setSize(size);
            
            
            cout<<"Would you like to make "<<name<<" Operational? (Y/N)"<<endl;
            string yn;
            cin>>yn;
            if(yn == "Y"){
                myLandmark->operate();
            } 
            landmarks.push_back(myLandmark);
            cout<<"Landmark created"<<endl;
        } else if (opt == 2){
            cout<<"Select a Landmark to clone:"<<endl;
            showBuildings("Landmark");
            int num;
            cin>>num;
            if(0<num-1<landmarks.size()){
                landmarks.push_back(landmarks[num-1]->clone());
            }
            cout<<"Landmark cloned"<<endl;
        }
        return;
    }

    string name;
    cout<<"You are about to create a new House. Enter a name for it:"<<endl;
    cin>>name;
    string size;
    cout<<endl<<"Enter a size for it(Small, Medium or Big):"<<endl;
    cin>>size;

    LandmarkFactory* af = new LandmarkFactory();
    Landmark* myLandmark = af->construct(name);
    myLandmark->setSize(size);
    
    
    cout<<"Would you like to make "<<name<<" Operational? (Y/N)"<<endl;
    string yn;
    cin>>yn;
    if(yn == "Y"){
        myLandmark->operate();
    } 
    landmarks.push_back(myLandmark);
    cout<<"Landmark created"<<endl;

}

void CityFacade::createCommercial(){
    if(commercialBuildings.size()>0){
        cout<<"Options: "<<endl;
        cout<<"1. New commercial building"<<endl;
        cout<<"2. Clone existing commercial building"<<endl;
        int opt;
        cin>>opt;
        if(opt == 1){
            string name;
            cout<<"You are about to create a new commercial building. Enter a name for it:"<<endl;
            cin>>name;
            string size;
            cout<<endl<<"Enter a size for it(Small, Medium or Big):"<<endl;
            cin>>size;

            CommercialFactory* af = new CommercialFactory();
            CommercialBuilding* myCom = af->construct(name);
            myCom->setSize(size);
            
            
            cout<<"Would you like to make "<<name<<" Operational? (Y/N)"<<endl;
            string yn;
            cin>>yn;
            if(yn == "Y"){
                myCom->operate();
            } 
            commercialBuildings.push_back(myCom);
            cout<<"commercial building created"<<endl;
        } else if (opt == 2){
            cout<<"Select a commercial building to clone:"<<endl;
            showBuildings("CommercialB");
            int num;
            cin>>num;
            if(0<num-1<commercialBuildings.size()){
                commercialBuildings.push_back(commercialBuildings[num-1]->clone());
            }
            cout<<"Commercial building cloned"<<endl;
        }
        return;
    }

    string name;
            cout<<"You are about to create a new commercial building. Enter a name for it:"<<endl;
            cin>>name;
            string size;
            cout<<endl<<"Enter a size for it(Small, Medium or Big):"<<endl;
            cin>>size;

            CommercialFactory* af = new CommercialFactory();
            CommercialBuilding* myCom = af->construct(name);
            myCom->setSize(size);
            
            
            cout<<"Would you like to make "<<name<<" Operational? (Y/N)"<<endl;
            string yn;
            cin>>yn;
            if(yn == "Y"){
                myCom->operate();
            } 
            commercialBuildings.push_back(myCom);
            cout<<"commercial building created"<<endl;

}

void CityFacade::showBuildings(string type){
    if(type == "ApartmentB"){
        for(int i = 1; i<=apartmentBuildings.size();i++){
            cout<<i<<". ";
            apartmentBuildings[i-1]->getName();
            cout<<endl;
        }
    } else if (type == "House"){
        for(int i = 1; i<=houses.size();i++){
            cout<<i<<". ";
            houses[i-1]->getName();
            cout<<endl;
        }
    } else if("Landmark"){
        for(int i = 1; i<=landmarks.size();i++){
            cout<<i<<". ";
            landmarks[i-1]->getName();
            cout<<endl;
        }
    } else if("CommercialB"){
        for(int i = 1; i<=commercialBuildings.size();i++){
            cout<<i<<". ";
            commercialBuildings[i-1]->getName();
            cout<<endl;
        }
    }
}

void CityFacade::showBuildingStats(){
    if (apartmentBuildings.size() == 0 && houses.size() == 0 && landmarks.size() == 0 && commercialBuildings.size() == 0){
        cout<<"No building stats to show, there are no buildings in the city."<<endl;
    } 

    if(apartmentBuildings.size() != 0){
        showUnits();
        cout<<endl;
    }

    if(!(houses.size() == 0)){
        cout<<"We have the following houses: "<<endl;
        for(int i = 1; i<=houses.size();i++){
            cout<<i<<". ";
            houses[i-1]->getName();
            cout<<endl;
        }
        cout<<endl;
    }

    if(!(landmarks.size() == 0)){
        cout<<"We have the following landmarks: "<<endl;
        for(int i = 1; i<=landmarks.size();i++){
            cout<<i<<". ";
            landmarks[i-1]->getName();
            cout<<endl;
        }
        cout<<endl;
    }

    if(!(commercialBuildings.size() == 0)){
        cout<<"We have the following commercial buildings: "<<endl;
        for(int i = 1; i<=commercialBuildings.size();i++){
            cout<<i<<". ";
            commercialBuildings[i-1]->getName();
            cout<<endl;
        }
        cout<<endl;
    }
}

void CityFacade::showUnits(){
    for(int i = 0; i<apartmentBuildings.size();i++){
        if(apartmentBuildings[i] && apartmentBuildings[i]->numUnits() != 0){
            cout<<"In apartment building";
            apartmentBuildings[i]->getName();
            cout<<" we have the following units: "<<endl;
            apartmentBuildings[i]->printUnits();
        } else if(apartmentBuildings[i] && apartmentBuildings[i]->numUnits() == 0){
            cout<<"We have an Apartment Building called ";
            apartmentBuildings[i]->getName();
            cout<<" without units."<<endl;
        } else{
            cout<<"No units to show. Apartment Buildings do not have units yet"<<endl;
        }
    }
}

void CityFacade::showAllStats(){
        showBuildingStats();
        showCitizenStats();
        showUtilityStats();
        showServicesStats();
        showTaxStats();
        showGrowthStats();
}

void CityFacade::showCitizenStats(){

}

void CityFacade::showUtilityStats(){

}

void CityFacade::showServicesStats(){

}

void CityFacade::showTaxStats(){

}

void CityFacade::showGrowthStats(){

}
