# Compiler
CXX = g++
# Compiler flags
CXXFLAGS = -std=c++17
# Executable name
TARGET = test

# Source files
SRC = TestingMain.cpp BuildingFactory.cpp ApartmentFactory.cpp CommercialFactory.cpp HouseFactory.cpp LandmarkFactory.cpp \
      Building.cpp Apartment.cpp ApartmentBuilding.cpp Unit.cpp House.cpp Landmark.cpp CommercialBuilding.cpp \
      BuildingState.cpp UnderConstruction.cpp Damaged.cpp Operational.cpp ClosedDown.cpp \
      CityFacade.cpp CitySimulation.cpp Citizen.cpp CitizenBuilder.cpp ConcreteCitizenBuilder.cpp CitizenDirector.cpp \
      Transport.cpp Walk.cpp Cycle.cpp Bus.cpp Taxi.cpp GovernmentMemento.cpp GovernmentCaretaker.cpp Government.cpp \
      CityGrowthManager.cpp Services.cpp Healthcare.cpp Education.cpp Cinema.cpp PoliceStation.cpp City.cpp \
      CitizenIterator.cpp BuildingIterator.cpp CollectCitizenTax.cpp CollectBuildingTax.cpp CollectAllTax.cpp \
      Command.cpp BoreholeDecorator.cpp BuildingDecorator.cpp PowerSystem.cpp PowerSystemFactory.cpp \
      WasteSystem.cpp WasteSystemFactory.cpp WaterSystem.cpp WaterSystemFactory.cpp

# Default target to compile the program
all: $(TARGET)

# Rule to link object files and create the executable
$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

# Run the program
run: $(TARGET)
	./$(TARGET)

# Clean up build files
clean:
	del $(TARGET).exe
