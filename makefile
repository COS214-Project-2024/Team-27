# Compiler
CXX = g++
CXXFLAGS = -std=c++17 -Wall

# Executable name
TARGET = test

# Source files
SOURCES = \
    TestingMain.cpp \
    BuildingFactory.cpp \
    ApartmentFactory.cpp \
    CommercialFactory.cpp \
    HouseFactory.cpp \
    LandmarkFactory.cpp \
    Building.cpp \
    Apartment.cpp \
    ApartmentBuilding.cpp \
    Unit.cpp \
    House.cpp \
    Landmark.cpp \
    CommercialBuilding.cpp \
    BuildingState.cpp \
    UnderConstruction.cpp \
    Damaged.cpp \
    Operational.cpp \
    ClosedDown.cpp \
    CityFacade.cpp \
    CitySimulation.cpp \
    Citizen.cpp \
    CitizenBuilder.cpp \
    ConcreteCitizenBuilder.cpp \
    CitizenDirector.cpp \
    Transport.cpp \
    Walk.cpp \
    Cycle.cpp \
    Bus.cpp \
    Taxi.cpp \
    GovernmentMemento.cpp \
    GovernmentCaretaker.cpp \
    Government.cpp \
    CityGrowthManager.cpp \
    Services.cpp \
    Healthcare.cpp \
    Education.cpp \
    Cinema.cpp \
    PoliceStation.cpp \
    City.cpp \
    CitizenIterator.cpp \
    BuildingIterator.cpp \
    CollectCitizenTax.cpp \
    CollectBuildingTax.cpp \
    CollectAllTax.cpp \
    Command.cpp \
    BoreholeDecorator.cpp \
    BuildingDecorator.cpp \
    PowerSystem.cpp \
    PowerSystemFactory.cpp \
    WasteSystem.cpp \
    WasteSystemFactory.cpp \
    WaterSystem.cpp \
    WaterSystemFactory.cpp

# Object files (auto-generated)
OBJECTS = $(SOURCES:.cpp=.o)

# Default target
all: $(TARGET)

# Link object files to create the final executable
$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJECTS)

# Compile each source file into an object file
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Run the program
run: $(TARGET)
	./$(TARGET)

# Clean up object files and the executable
clean:
	rm -f $(OBJECTS) $(TARGET)
