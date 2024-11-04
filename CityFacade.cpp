
#include "CityFacade.h"

CityFacade::CityFacade()
{
    government = new Government(0, 0, 0);
}

void CityFacade::createAPBuilding()
{
    if (apartmentBuildings.size() > 0)
    {
        cout << "Options: " << endl;
        cout << "1. New Apartment Building" << endl;
        cout << "2. Clone existing apartment building" << endl;
        int opt;
        cin >> opt;
        if (opt == 1)
        {
            string name;
            cout << "You are about to create a new Apartment Building. Enter a name for it:" << endl;
            cin >> name;
            string size;
            cout << endl
                 << "Enter a size for it(Small, Medium or Big):" << endl;
            cin >> size;

            ApartmentFactory *af = new ApartmentFactory();
            ApartmentBuilding *myApartmentBuilding = af->construct(name);
            myApartmentBuilding->setSize(size);

            cout << "Would you like to make " << name << " Operational? (Y/N)" << endl;
            string yn;
            cin >> yn;
            if (yn == "Y")
            {
                myApartmentBuilding->operate();
            }
            apartmentBuildings.push_back(myApartmentBuilding);
            cout << "Apartment building created" << endl;
        }
        else if (opt == 2)
        {
            cout << "Select an apartment building to clone:" << endl;
            showBuildings("ApartmentB");
            int num;
            cin >> num;
            if (0 < num - 1 < apartmentBuildings.size())
            {
                apartmentBuildings.push_back(apartmentBuildings[num - 1]->clone());
            }
            cout << "Apartment building cloned" << endl;
        }
        government->UpdateApartment(apartmentBuildings);
        return;
    }

    string name;
    cout << "You are about to create a new Apartment Building. Enter a name for it:" << endl;
    cin >> name;
    string size;
    cout << endl
         << "Enter a size for it(Small, Medium or Big):" << endl;
    cin >> size;

    ApartmentFactory *af = new ApartmentFactory();
    ApartmentBuilding *myApartmentBuilding = af->construct(name);
    myApartmentBuilding->setSize(size);

    cout << "Would you like to make " << name << " Operational? (Y/N)" << endl;
    string yn;
    cin >> yn;
    if (yn == "Y")
    {
        myApartmentBuilding->operate();
    }
    apartmentBuildings.push_back(myApartmentBuilding);
    government->UpdateApartment(apartmentBuildings);
}

void CityFacade::createUnit()
{
    if (apartmentBuildings.size() > 0)
    {
        cout << "Choose an apartment building to add your unit to: " << endl;
        showBuildings("ApartmentB");
        int building;
        cin >> building;

        int number;
        cout << "You are about to create a new unit. Enter a number for it:" << endl;
        cin >> number;
        string size;
        cout << endl
             << "Enter a size for it(Small, Medium or Big):" << endl;
        cin >> size;

        ApartmentFactory *af = new ApartmentFactory();
        Unit *myUnit = af->createUnit(number, size);
        myUnit->setSize(size);

        cout << "Would you like to make Unit " << number << " Operational? (Y/N)" << endl;
        string yn;
        cin >> yn;
        if (yn == "Y")
        {
            myUnit->operate();
        }
        apartmentBuildings[building - 1]->addUnit(myUnit);
        government->UpdateApartment(apartmentBuildings);
        cout << "Unit created and added" << endl;

        return;
    }

    cout << "No apartment buildings in the city. Create one first" << endl;
}

void CityFacade::createHouse()
{
    if (houses.size() > 0)
    {
        cout << "Options: " << endl;
        cout << "1. New house" << endl;
        cout << "2. Clone existing house" << endl;
        int opt;
        cin >> opt;
        if (opt == 1)
        {
            string name;
            cout << "You are about to create a new house. Enter a name for it:" << endl;
            cin >> name;
            string size;
            cout << endl
                 << "Enter a size for it(Small, Medium or Big):" << endl;
            cin >> size;

            HouseFactory *af = new HouseFactory();
            House *myHouse = af->construct(name);
            myHouse->setSize(size);

            cout << "Would you like to make " << name << " Operational? (Y/N)" << endl;
            string yn;
            cin >> yn;
            if (yn == "Y")
            {
                myHouse->operate();
            }
            houses.push_back(myHouse);
            cout << "House created" << endl;
        }
        else if (opt == 2)
        {
            cout << "Select a house to clone:" << endl;
            showBuildings("House");
            int num;
            cin >> num;
            if (0 < num - 1 < houses.size())
            {
                houses.push_back(houses[num - 1]->clone());
            }
            cout << "House cloned" << endl;
        }
        government->UpdateHouse(houses);
        return;
    }

    string name;
    cout << "You are about to create a new House. Enter a name for it:" << endl;
    cin >> name;
    string size;
    cout << endl
         << "Enter a size for it(Small, Medium or Big):" << endl;
    cin >> size;

    HouseFactory *af = new HouseFactory();
    House *myHouse = af->construct(name);
    myHouse->setSize(size);

    cout << "Would you like to make " << name << " Operational? (Y/N)" << endl;
    string yn;
    cin >> yn;
    if (yn == "Y")
    {
        myHouse->operate();
    }
    houses.push_back(myHouse);
    government->UpdateHouse(houses);
    cout << "House created" << endl;
}

void CityFacade::createLandmark()
{
    if (landmarks.size() > 0)
    {
        cout << "Options: " << endl;
        cout << "1. New landmark" << endl;
        cout << "2. Clone existing landmark" << endl;
        int opt;
        cin >> opt;
        if (opt == 1)
        {
            string name;
            cout << "You are about to create a new landmark. Enter a name for it:" << endl;
            cin >> name;
            string size;
            cout << endl
                 << "Enter a size for it(Small, Medium or Big):" << endl;
            cin >> size;

            LandmarkFactory *af = new LandmarkFactory();
            Landmark *myLandmark = af->construct(name);
            myLandmark->setSize(size);

            cout << "Would you like to make " << name << " Operational? (Y/N)" << endl;
            string yn;
            cin >> yn;
            if (yn == "Y")
            {
                myLandmark->operate();
            }
            landmarks.push_back(myLandmark);
            cout << "Landmark created" << endl;
        }
        else if (opt == 2)
        {
            cout << "Select a Landmark to clone:" << endl;
            showBuildings("Landmark");
            int num;
            cin >> num;
            if (0 < num - 1 < landmarks.size())
            {
                landmarks.push_back(landmarks[num - 1]->clone());
            }
            cout << "Landmark cloned" << endl;
        }
        government->UpdateLandMarks(landmarks);
        return;
    }

    string name;
    cout << "You are about to create a new House. Enter a name for it:" << endl;
    cin >> name;
    string size;
    cout << endl
         << "Enter a size for it(Small, Medium or Big):" << endl;
    cin >> size;

    LandmarkFactory *af = new LandmarkFactory();
    Landmark *myLandmark = af->construct(name);
    myLandmark->setSize(size);

    cout << "Would you like to make " << name << " Operational? (Y/N)" << endl;
    string yn;
    cin >> yn;
    if (yn == "Y")
    {
        myLandmark->operate();
    }
    landmarks.push_back(myLandmark);
    government->UpdateLandMarks(landmarks);
    cout << "Landmark created" << endl;
}

void CityFacade::createCommercial()
{
    if (commercialBuildings.size() > 0)
    {
        cout << "Options: " << endl;
        cout << "1. New commercial building" << endl;
        cout << "2. Clone existing commercial building" << endl;
        int opt;
        cin >> opt;
        if (opt == 1)
        {
            string name;
            cout << "You are about to create a new commercial building. Enter a name for it:" << endl;
            cin >> name;
            string size;
            cout << endl
                 << "Enter a size for it(Small, Medium or Big):" << endl;
            cin >> size;

            CommercialFactory *af = new CommercialFactory();
            CommercialBuilding *myCom = af->construct(name);
            myCom->setSize(size);

            cout << "Would you like to make " << name << " Operational? (Y/N)" << endl;
            string yn;
            cin >> yn;
            if (yn == "Y")
            {
                myCom->operate();
            }
            commercialBuildings.push_back(myCom);
            cout << "commercial building created" << endl;
        }
        else if (opt == 2)
        {
            cout << "Select a commercial building to clone:" << endl;
            showBuildings("CommercialB");
            int num;
            cin >> num;
            if (0 < num - 1 < commercialBuildings.size())
            {
                commercialBuildings.push_back(commercialBuildings[num - 1]->clone());
            }
            cout << "Commercial building cloned" << endl;
        }
        government->UpdateCommercial(commercialBuildings);
        return;
    }

    string name;
    cout << "You are about to create a new commercial building. Enter a name for it:" << endl;
    cin >> name;
    string size;
    cout << endl
         << "Enter a size for it(Small, Medium or Big):" << endl;
    cin >> size;

    CommercialFactory *af = new CommercialFactory();
    CommercialBuilding *myCom = af->construct(name);
    myCom->setSize(size);

    cout << "Would you like to make " << name << " Operational? (Y/N)" << endl;
    string yn;
    cin >> yn;
    if (yn == "Y")
    {
        myCom->operate();
    }
    commercialBuildings.push_back(myCom);
    government->UpdateCommercial(commercialBuildings);
    cout << "commercial building created" << endl;
}

void CityFacade::showBuildings(string type)
{
    if (type == "ApartmentB")
    {
        for (int i = 1; i <= apartmentBuildings.size(); i++)
        {
            cout << i << ". ";
            apartmentBuildings[i - 1]->getName();
            cout << endl;
        }
    }
    else if (type == "House")
    {
        for (int i = 1; i <= houses.size(); i++)
        {
            cout << i << ". ";
            houses[i - 1]->getName();
            cout << endl;
        }
    }
    else if ("Landmark")
    {
        for (int i = 1; i <= landmarks.size(); i++)
        {
            cout << i << ". ";
            landmarks[i - 1]->getName();
            cout << endl;
        }
    }
    else if ("CommercialB")
    {
        for (int i = 1; i <= commercialBuildings.size(); i++)
        {
            cout << i << ". ";
            commercialBuildings[i - 1]->getName();
            cout << endl;
        }
    }
}

void CityFacade::showBuildingStats()
{
    if (apartmentBuildings.size() == 0 && houses.size() == 0 && landmarks.size() == 0 && commercialBuildings.size() == 0)
    {
        cout << "No building stats to show, there are no buildings in the city." << endl;
    }

    if (apartmentBuildings.size() != 0)
    {
        showUnits();
        cout << endl;
    }

    if (!(houses.size() == 0))
    {
        cout << "We have the following houses: " << endl;
        for (int i = 1; i <= houses.size(); i++)
        {
            cout << i << ". ";
            houses[i - 1]->getName();
            cout << endl;
        }
        cout << endl;
    }

    if (!(landmarks.size() == 0))
    {
        cout << "We have the following landmarks: " << endl;
        for (int i = 1; i <= landmarks.size(); i++)
        {
            cout << i << ". ";
            landmarks[i - 1]->getName();
            cout << endl;
        }
        cout << endl;
    }

    if (!(commercialBuildings.size() == 0))
    {
        cout << "We have the following commercial buildings: " << endl;
        for (int i = 1; i <= commercialBuildings.size(); i++)
        {
            cout << i << ". ";
            commercialBuildings[i - 1]->getName();
            cout << endl;
        }
        cout << endl;
    }
}

void CityFacade::showUnits()
{
    for (int i = 0; i < apartmentBuildings.size(); i++)
    {
        if (apartmentBuildings[i] && apartmentBuildings[i]->numUnits() != 0)
        {
            cout << "In apartment building";
            apartmentBuildings[i]->getName();
            cout << " we have the following units: " << endl;
            apartmentBuildings[i]->printUnits();
        }
        else if (apartmentBuildings[i] && apartmentBuildings[i]->numUnits() == 0)
        {
            cout << "We have an Apartment Building called ";
            apartmentBuildings[i]->getName();
            cout << " without units." << endl;
        }
        else
        {
            cout << "No units to show. Apartment Buildings do not have units yet" << endl;
        }
    }
}

void CityFacade::showAllStats()
{
    showBuildingStats();
    showCitizenStats();
    showUtilityStats();
    showServicesStats();
    showTaxStats();
    showGrowthStats();
}

void CityFacade::showCitizenStats()
{
}

void CityFacade::showServicesStats()
{
}

void CityFacade::showTaxStats()
{
}

void CityFacade::showGrowthStats()
{
}
void CityFacade::setCitizenDetails(Citizen *citizen, const string &name, int age, double income, int satisfaction, bool isEmployed)
{
    citizen->setName(name);
    citizen->setAge(age);
    citizen->setIncome(income);
    citizen->setSatisfaction(satisfaction);
    citizen->setEmploymentStatus(isEmployed);
}

void CityFacade::moveIn()
{
    if (citizens.size() != 0)
    {
        if (apartmentBuildings.size() != 0 && houses.size() != 0)
        {
            int option;
            cout << "Which building would you like to move the citizen into?" << endl
                 << "1. Apartment" << endl
                 << "2. House" << endl;
            cin >> option;
            if (option == 1)
            {
                moveIntoApartment();
            }
            else if (option == 2)
            {
                moveIntoHouse();
            }
        }

        if (apartmentBuildings.size() == 0 && houses.size() != 0)
        {
            cout << "You can only move into a house, there are no apartments" << endl;
            moveIntoHouse();
        }

        if (apartmentBuildings.size() != 0 && houses.size() == 0)
        {
            cout << "You can only move into an apartment, there are no houses" << endl;
            moveIntoApartment();
        }
    }
    else
    {
        cout << "There are no citizens for you to move in" << endl;
    }
}

void CityFacade::moveIntoHouse()
{
    int citizen;
    cout << "Which citizen wants to move in: " << endl;
    showCitizenStats();
    cin >> citizen;

    int house;
    cout << "Which house would you like to move the citizen into?" << endl;
    showBuildings("House");
    cin >> house;

    houses[house - 1]->addResident(citizens[citizen - 1]);
    cout << "Citizen moved into house " << endl;
    houses[house - 1]->displayInfo();
    cout << endl;
}

void CityFacade::moveIntoApartment()
{
    int citizen;
    cout << "Which citizen wants to move in: " << endl;
    showCitizenStats();
    cin >> citizen;

    int apartment;
    cout << "Which apartment building would you like to move the citizen into?" << endl;
    showBuildings("ApartmentB");
    cin >> apartment;

    int unit;
    cout << "Which unit would you like to move the citizen into?" << endl;
    apartmentBuildings[apartment - 1]->printUnits();
    cin >> unit;

    apartmentBuildings[apartment - 1]->getUnits()[unit - 1]->addResident(citizens[citizen - 1]);
    apartmentBuildings[apartment - 1]->addResident(citizens[citizen - 1]);
    cout << "Citizen moved into apartment building" << endl;
    apartmentBuildings[apartment - 1]->displayInfo();
    cout << endl;
}

void CityFacade::visitLandmark()
{
    if (landmarks.size() == 0)
    {
        cout << "No landmarks to visit" << endl;
    }
    else
    {
        int citizen;
        cout << "Which citizen wants to visit a landmark? " << endl;
        showCitizenStats();
        cin >> citizen;

        int landmark;
        cout << "Which landmark would you like the citizen to visit?" << endl;
        showBuildings("Landmark");
        cin >> landmark;

        int transportOption;
        cout << "Select mode of transport: " << endl
             << "1. Walk" << endl
             << "2. Cycle" << endl
             << "3. Taxi" << endl
             << "4. Bus" << endl;
        cin >> transportOption;

        Transport *transport = nullptr;
        switch (transportOption)
        {
        case 1:
            transport = new Walk();
            break;
        case 2:
            transport = new Cycle();
            break;
        case 3:
            transport = new Taxi();
            break;
        case 4:
            transport = new Bus();
            break;
        default:
            cout << "Invalid option, defaulting to walking." << endl;
            transport = new Walk();
            break;
        }

        cout << "Citizen ";
        citizens[citizen - 1]->display();
        cout << "is ";
        transport->travel(landmarks[landmark - 1]->getLName());
    }
}

void CityFacade::visitCommercialBuilding()
{
    if (commercialBuildings.size() == 0)
    {
        cout << "No commercial buildings to visit" << endl;
    }
    else
    {
        int citizen;
        cout << "Which citizen wants to visit a commercial building? " << endl;
        showCitizenStats();
        cin >> citizen;

        int commercial;
        cout << "Which commercial building would you like the citizen to visit?" << endl;
        showBuildings("CommercialB");
        cin >> commercial;

        int transportOption;
        cout << "Select mode of transport: " << endl
             << "1. Walk" << endl
             << "2. Cycle" << endl
             << "3. Taxi" << endl
             << "4. Bus" << endl;
        cin >> transportOption;

        Transport *transport = nullptr;
        switch (transportOption)
        {
        case 1:
            transport = new Walk();
            break;
        case 2:
            transport = new Cycle();
            break;
        case 3:
            transport = new Taxi();
            break;
        case 4:
            transport = new Bus();
            break;
        default:
            cout << "Invalid option, defaulting to walking." << endl;
            transport = new Walk();
            break;
        }

        cout << "Citizen ";
        citizens[citizen - 1]->display();
        cout << "is ";
        transport->travel(commercialBuildings[commercial - 1]->getComName());
    }
}

void CityFacade::startUp()
{
    srand(static_cast<unsigned int>(time(0)));

    for (int i = 0; i < 15; ++i)
    {
        string name = "Child_" + to_string(rand() % 1000);
        int age = rand() % 18 + 1;
        int satisfaction = 100;

        ConcreteCitizenBuilder builder;
        CitizenDirector director(&builder);
        Citizen *child = director.createChild(name, age, satisfaction);

        citizens.push_back(child);
    }

    for (int i = 0; i < 30; ++i)
    {
        string name = "Adult_" + to_string(rand() % 1000);
        int age = rand() % 50 + 18;
        bool employed = rand() % 2;
        double income = employed ? (rand() % 6501 + 3500) : 3500.0;
        int satisfaction = 100;

        ConcreteCitizenBuilder builder;
        CitizenDirector director(&builder);
        Citizen *adult = director.createAdult(name, age, satisfaction, income, employed);

        citizens.push_back(adult);
    }

    int citizenIndex = 0;

    for (int i = 0; i < 5; ++i)
    {
        string name = "Apartment_" + to_string(rand() % 1000);
        ApartmentBuilding *apartment = new ApartmentBuilding(name);

        if (i < 2)
        {
            for (int j = 0; j < 5; ++j)
            {
                int unitNumber = rand() % 100 + 1;
                Unit *unit = new Unit(unitNumber, "Medium");
                apartment->addUnit(unit);

                if (citizenIndex + 2 < citizens.size())
                {
                    unit->addResident(citizens[citizenIndex++]);
                    unit->addResident(citizens[citizenIndex++]);
                    unit->addResident(citizens[citizenIndex++]);
                }
            }
            apartment->setState(new Operational());
        }
        else if (i == 2)
        {
            apartment->setState(new UnderConstruction());
        }
        else if (i == 3)
        {
            apartment->setState(new ClosedDown());
        }
        else if (i == 4)
        {
            apartment->setState(new Damaged());
        }

        apartmentBuildings.push_back(apartment);
    }

    for (int i = 0; i < 4; ++i)
    {
        string name = "House_" + to_string(rand() % 1000);
        int size = rand() % 150 + 100;
        House *house = new House(name);
        house->setSize("Medium");

        if (i < 2)
        {
            house->setState(new Operational());
        }
        else if (i == 2)
        {
            house->setState(new UnderConstruction());
        }
        else if (i == 3)
        {
            house->setState(new ClosedDown());
        }
        else if (i == 4)
        {
            house->setState(new Damaged());
        }

        if (citizenIndex + 2 < citizens.size())
        {
            house->addResident(citizens[citizenIndex++]);
            house->addResident(citizens[citizenIndex++]);
            house->addResident(citizens[citizenIndex++]);
        }

        houses.push_back(house);
    }

    landmarks.push_back(new Landmark("Park"));
    landmarks.push_back(new Landmark("Community Swimming Pool"));
    landmarks.push_back(new Landmark("City Sign"));
    landmarks.push_back(new Landmark("Waterfall"));
    landmarks.push_back(new Landmark("Stadium"));
    for (auto &landmark : landmarks)
    {
        landmark->setState(new Operational());
    }

    commercialBuildings.push_back(new CommercialBuilding("Food Shop"));
    commercialBuildings.push_back(new CommercialBuilding("Factory"));
    commercialBuildings.push_back(new CommercialBuilding("Cinema"));
    commercialBuildings.push_back(new CommercialBuilding("Clothes Shop"));
    for (auto &commercial : commercialBuildings)
    {
        commercial->setState(new Operational());
    }

    int healthcareCapacity = 50;
    int educationCapacity = 100;
    int policeStationCapacity = 30;
    int cinemaCapacity = 40;

    // Initialize services with their capacities
    hospital = new Healthcare(healthcareCapacity);
    school = new Education(educationCapacity);
    jail = new PoliceStation(policeStationCapacity);
    movies = new Cinema(cinemaCapacity);

    // Assign citizens to services randomly
    for (Citizen *citizen : citizens)
    {
        int serviceChoice = rand() % 4; // Randomly pick a service
        switch (serviceChoice)
        {
        case 0:
            if (hospital->currentPatients.size() < healthcareCapacity)
            {
                hospital->currentPatients.push_back(citizen);
            }
            break;
        case 1:
            if (school->enrolledStudents.size() < educationCapacity)
            {
                school->enrolledStudents.push_back(citizen);
            }
            break;
        case 2:
            if (jail->currentRequests.size() < policeStationCapacity)
            {
                jail->currentRequests.push_back(citizen);
            }
            break;
        case 3:
            if (movies->currentAudience.size() < cinemaCapacity)
            {
                movies->currentAudience.push_back(citizen);
            }
            break;
        default:
            break;
        }
    }

    cout << "City initialized with buildings, citizens and services" << endl;
}

void CityFacade::manageBuildingStates()
{
    int building;
    cout << "Which type of building's state would you like to change?" << endl;
    cout << "1. Apartment Building \n2. House \n3. Landmark \n4. Commercial Building" << endl;
    cin >> building;
    cout << endl;

    int state;
    switch (building)
    {
    case 1:
        cout << "Choose an Apartment Building to change state: " << endl;
        showBuildings("ApartmentB");
        int apartmentB;
        cin >> apartmentB;

        cout << endl;

        cout << "Which state would you like to change it to?" << endl;
        cout << "1. Under Construction \n2. Operational \n3. Closed Down \n4. Damaged" << endl;
        cin >> state;

        if (state == 1)
        {
            apartmentBuildings[apartmentB - 1]->construct();
        }
        else if (state == 2)
        {
            apartmentBuildings[apartmentB - 1]->operate();
        }
        else if (state == 3)
        {
            apartmentBuildings[apartmentB - 1]->closeDown();
        }
        else if (state == 4)
        {
            apartmentBuildings[apartmentB - 1]->damage();
        }
        else
        {
            cout << "Wrong input" << endl;
        }

        break;

    case 2:
        cout << "Choose a house to change state: " << endl;
        showBuildings("House");
        int house;
        cin >> house;

        cout << endl;

        cout << "Which state would you like to change it to?" << endl;
        cout << "1. Under Construction \n2. Operational \n3. Closed Down \n4. Damaged" << endl;
        cin >> state;

        if (state == 1)
        {
            houses[house - 1]->construct();
        }
        else if (state == 2)
        {
            houses[house - 1]->operate();
        }
        else if (state == 3)
        {
            houses[house - 1]->closeDown();
        }
        else if (state == 4)
        {
            houses[house - 1]->damage();
        }
        else
        {
            cout << "Wrong input" << endl;
        }

        break;

    case 3:
        cout << "Choose a landmark to change state: " << endl;
        showBuildings("Landmark");
        int landmark;
        cin >> landmark;

        cout << endl;

        cout << "Which state would you like to change it to?" << endl;
        cout << "1. Under Construction \n2. Operational \n3. Closed Down \n4. Damaged" << endl;
        cin >> state;

        if (state == 1)
        {
            landmarks[landmark - 1]->construct();
        }
        else if (state == 2)
        {
            landmarks[landmark - 1]->operate();
        }
        else if (state == 3)
        {
            landmarks[landmark - 1]->closeDown();
        }
        else if (state == 4)
        {
            landmarks[landmark - 1]->damage();
        }
        else
        {
            cout << "Wrong input" << endl;
        }

        break;

    case 4:
        cout << "Choose a Commercial Building to change state: " << endl;
        showBuildings("CommercialB");
        int commercialB;
        cin >> commercialB;

        cout << endl;

        cout << "Which state would you like to change it to?" << endl;
        cout << "1. Under Construction \n2. Operational \n3. Closed Down \n4. Damaged" << endl;
        cin >> state;

        if (state == 1)
        {
            commercialBuildings[commercialB - 1]->construct();
        }
        else if (state == 2)
        {
            commercialBuildings[commercialB - 1]->operate();
        }
        else if (state == 3)
        {
            commercialBuildings[commercialB - 1]->closeDown();
        }
        else if (state == 4)
        {
            commercialBuildings[commercialB - 1]->damage();
        }
        else
        {
            cout << "Wrong input" << endl;
        }

        break;
    }

    cout << endl;
}
void CityFacade::showUtilityStats()
{

    cout << " ApartmentBuilding UtilityStats" << endl;
    for (int i = 1; i <= apartmentBuildings.size(); i++)
    {
        cout << i << ". ";
        apartmentBuildings[i - 1]->getName();
        apartmentBuildings[i - 1]->getUtilitystats();
        cout << endl;
    }
    cout << " houses UtilityStats" << endl;
    for (int i = 1; i <= houses.size(); i++)
    {
        cout << i << ". ";
        houses[i - 1]->getName();
        houses[i - 1]->getUtilitystats();
        cout << endl;
    }
    cout << " landmarks UtilityStats" << endl;
    for (int i = 1; i <= landmarks.size(); i++)
    {
        cout << i << ". ";
        landmarks[i - 1]->getName();
        landmarks[i - 1]->getUtilitystats();
        cout << endl;
    }
    cout << " commercialBuildings UtilityStats" << endl;
    for (int i = 1; i <= commercialBuildings.size(); i++)
    {
        cout << i << ". ";
        commercialBuildings[i - 1]->getName();
        commercialBuildings[i - 1]->getUtilitystats();
        cout << endl;
    }
}

void CityFacade::showServicesStats()
{
}

void CityFacade::showTaxStats()
{
}

void CityFacade::showGrowthStats()
{
}

void CityFacade::viewPopulationGrowthOverView()
{
    cout << "Population :" << growthManager->getPopulation() << endl;
    cout << "Number Of Buildings :" << growthManager->getNumOfBuildings() << endl;
    cout << "Economic growth rate :" << growthManager->getEconGrowthRate() << endl;
}
void CityFacade::managePopulationGrowth()
{
    growthManager->evaluatePopulationGrowth();
    growthManager->evaluateBuildingExpansion();
    growthManager->evaluateEconomicGrowth();
    cout << "Population, buildings, and economy have been evaluated and updated ." << endl;
}

void CityFacade::AssignUtilitiestoBuildings()
{
    std::vector<ApartmentBuilding *> without1;
    std::vector<House *> without2;
    std::vector<Landmark *> without3;
    std::vector<CommercialBuilding *> without4;
    cout << " ApartmentBuilding without full utilities" << endl;
    for (int i = 1; i <= apartmentBuildings.size(); i++)
    {
        int r = 1;
        cout << r << ". ";
        if (apartmentBuildings[i - 1]->fullutilies() == false)
        {
            apartmentBuildings[i - 1]->getName();
            without1.push_back(apartmentBuildings[i - 1]);
            r++;
        }
    }
    cout << " houses without full utilities" << endl;
    for (int i = 1; i <= houses.size(); i++)
    {
        cout << i << ". ";
        int r = 1;
        cout << r << ". ";
        if (houses[i - 1]->fullutilies() == false)
        {
            houses[i - 1]->getName();
            without2.push_back(houses[i - 1]);
            r++;
        }
    }
    cout << " landmarks without full utilitiess" << endl;
    for (int i = 1; i <= landmarks.size(); i++)
    {
        int r = 1;
        cout << r << ". ";
        if (landmarks[i - 1]->fullutilies() == false)
        {
            landmarks[i - 1]->getName();
            without3.push_back(landmarks[i - 1]);
            r++;
        }
    }
    cout << " commercialBuildings without full utilities" << endl;
    for (int i = 1; i <= commercialBuildings.size(); i++)
    {
        int r = 1;
        cout << r << ". ";
        if (commercialBuildings[i - 1]->fullutilies() == false)
        {
            commercialBuildings[i - 1]->getName();
            without4.push_back(commercialBuildings[i - 1]);
            r++;
        }
    }
    bool loop = true;
    while (loop)
    {
        int R;
        cout << " do you what to assign utilities to all these buildings " << endl;
        cout << " enter 1 for yes.\n";
        cout << " enter 2 for no.\n";
        cin >> R;
        if (R != 1 || R != 2)
        {
            cout << "you have entered an invaild number please try again.\n";
        }
        else
        {
            if (R == 1)
            {
                for (ApartmentBuilding *value : without1)
                {
                    value->addUtility("water",WaterSystemFactory().createUtility(100.0));
                    value->addUtility("waste",WasteSystemFactory().createUtility(100.0));
                    value->addUtility("power",PowerSystemFactory().createUtility(100.0));
                }
                for (House *value : without2)
                {
                    value->addUtility("water",WaterSystemFactory().createUtility(100.0));
                    value->addUtility("waste",WasteSystemFactory().createUtility(100.0));
                    value->addUtility("power",PowerSystemFactory().createUtility(100.0));
                }
                for (Landmark *value : without3)
                {
                    value->addUtility("water",WaterSystemFactory().createUtility(100.0));
                    value->addUtility("waste",WasteSystemFactory().createUtility(100.0));
                    value->addUtility("power",PowerSystemFactory().createUtility(100.0));
                }
                for (CommercialBuilding *value : without4)
                {
                    value->addUtility("water",WaterSystemFactory().createUtility(100.0));
                    value->addUtility("waste",WasteSystemFactory().createUtility(100.0));
                    value->addUtility("power",PowerSystemFactory().createUtility(100.0));
                }
            }
            else if (R == 2)
            {
                cout<<" utilities will not be added to the buildings"<<endl;
            }
            loop = false;
        }
    }
}
void CityFacade::simulateNaturalDisaster(double PopulationImpact, double buidlingImpact, double economicImpact)
{
    growthManager->simulateNaturalDisaster(PopulationImpact, buidlingImpact, economicImpact);
    cout << "Natural Disaster simulated, City metrics updated ." << endl;
}

void CityFacade::makeAllBuildingsOperational()
{
    if (apartmentBuildings.size() > 0)
    {
        for (Building *thisBuilding : apartmentBuildings)
        {
            thisBuilding->operate();
        }
    }
    if (commercialBuildings.size() > 0)
    {
        for (Building *thisCommercialBuilding : commercialBuildings)
        {
            thisCommercialBuilding->operate();
        }
    }
    if (houses.size() > 0)
    {
        for (Building *thisHouse : houses)
        {
            thisHouse->operate();
        }
    }
    if (landmarks.size() > 0)
    {
        for (Building *landmark : landmarks)
        {
            landmark->operate();
        }
    }

    cout << "All buildings are now operational ." << endl;
}

void CityFacade::viewServicesOverview()
{
    int choice;
    bool viewing = true;

    while (viewing)
    {
        std::cout << "======== Services Overview ========" << std::endl;
        std::cout << "1. View Education" << std::endl;
        std::cout << "2. View Cinema" << std::endl;
        std::cout << "3. View Healthcare" << std::endl;
        std::cout << "4. View Police Station" << std::endl;
        std::cout << "5. Back to Previous Menu" << std::endl;
        std::cout << "Select an option (1-5): ";
        std::cin >> choice;

        switch (choice)
        {
        case 1:
            school->details();
            break;
        case 2:
            movies->details();
            break;
        case 3:
            hospital->details();
            break;
        case 4:
            jail->details();
            break;
        case 5:
            viewing = false;
            break;
        default:
            std::cout << "Invalid option. Please choose between 1 and 5." << std::endl;
        }
    }
}

void CityFacade::useResource()
{
    int serviceChoice, citizenIndex;
    std::string usagePurpose;
    bool usingService = true;

    while (usingService)
    {
        std::cout << "======== Use Resource ========" << std::endl;
        std::cout << "1. Use Education" << std::endl;
        std::cout << "2. Use Cinema" << std::endl;
        std::cout << "3. Use Healthcare" << std::endl;
        std::cout << "4. Use Police Station" << std::endl;
        std::cout << "5. Back to Previous Menu" << std::endl;
        std::cout << "Select a service to use (1-5): ";
        std::cin >> serviceChoice;

        switch (serviceChoice)
        {
        case 1:
            // Display citizens in Education service
            school->showCitizens();
            std::cout << "Select a citizen index to use the service: ";
            std::cin >> citizenIndex;

            // Get the citizen from the Education service
            if (citizenIndex >= 0 && citizenIndex < school->enrolledStudents.size())
            {
                Citizen *citizen = school->enrolledStudents[citizenIndex];
                std::cout << "Enter the purpose for using Education service: ";
                std::cin.ignore();
                std::getline(std::cin, usagePurpose);

                // Use the service
                school->useService(citizen, usagePurpose);
                school->releaseStudent(citizen); // Release the citizen after use
            }
            else
            {
                std::cout << "Invalid index selected." << std::endl;
            }
            break;

        case 2:
            movies->showCitizens();
            std::cout << "Select a citizen index to use the service: ";
            std::cin >> citizenIndex;

            // Get the citizen from the Cinema service
            if (citizenIndex >= 0 && citizenIndex < movies->currentAudience.size())
            {
                Citizen *citizen = movies->currentAudience[citizenIndex];
                std::cout << "Enter the purpose (e.g., movie name) for Cinema service: ";
                std::cin.ignore();
                std::getline(std::cin, usagePurpose);

                // Use the service
                movies->useService(citizen, usagePurpose);
                movies->releaseAudience(citizen); // Release the citizen after use
            }
            else
            {
                std::cout << "Invalid index selected." << std::endl;
            }
            break;

        case 3:
            hospital->showCitizens();
            std::cout << "Select a citizen index to use the service: ";
            std::cin >> citizenIndex;

            // Get the citizen from the Healthcare service
            if (citizenIndex >= 0 && citizenIndex < hospital->currentPatients.size())
            {
                Citizen *citizen = hospital->currentPatients[citizenIndex];
                std::cout << "Enter the purpose for using Healthcare service: ";
                std::cin.ignore();
                std::getline(std::cin, usagePurpose);

                // Use the service
                hospital->useService(citizen, usagePurpose);
                hospital->releasePatient(citizen); // Release the citizen after use
            }
            else
            {
                std::cout << "Invalid index selected." << std::endl;
            }
            break;

        case 4:
            jail->showCitizens();
            std::cout << "Select a citizen index to use the service: ";
            std::cin >> citizenIndex;

            // Get the citizen from the Police Station service
            if (citizenIndex >= 0 && citizenIndex < jail->currentRequests.size())
            {
                Citizen *citizen = jail->currentRequests[citizenIndex];
                std::cout << "Enter the purpose for using Police Station service: ";
                std::cin.ignore();
                std::getline(std::cin, usagePurpose);

                // Use the service
                jail->useService(citizen, usagePurpose);
                jail->releaseRequest(citizen); // Release the citizen after use
            }
            else
            {
                std::cout << "Invalid index selected." << std::endl;
            }
            break;

        case 5:
            usingService = false;
            break;

        default:
            std::cout << "Invalid option. Please choose between 1 and 5." << std::endl;
        }
    }
}
