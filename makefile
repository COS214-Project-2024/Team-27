# Define compiler and flags
CXX = g++
CXXFLAGS = -Wall -std=c++17 -I.  # Add additional include paths if needed

# Target executable name
TARGET = Testingutilities

# Source files (you may need to adjust based on your project structure)
SRC_FILES = Testingutilities.cpp BuildingFactory.cpp ApartmentFactory.cpp CommercialFactory.cpp \
            HouseFactory.cpp LandmarkFactory.cpp WaterSystemFactory.cpp \
            PowerSystemFactory.cpp WasteSystemFactory.cpp Building.cpp \
            Apartment.cpp ApartmentBuilding.cpp Unit.cpp House.cpp \
            Landmark.cpp CommercialBuilding.cpp ConcreteCitizenBuilder.cpp \
            Citizen.cpp CitizenBuilder.cpp CitizenDirector.cpp \
            Transport.cpp Walk.cpp Taxi.cpp Cycle.cpp Bus.cpp \
            BuildingMaterials.cpp Services.cpp Healthcare.cpp Education.cpp \
            PoliceStation.cpp Cinema.cpp Government.cpp

# Object files (replace .cpp extension with .o for each source file)
OBJ_FILES = $(SRC_FILES:.cpp=.o)

# Default target
all: $(TARGET)

# Link object files to create the executable
$(TARGET): $(OBJ_FILES)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJ_FILES)

# Compile each .cpp file into an object file
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean up build files
clean:
	rm -f $(OBJ_FILES) $(TARGET)

# Run the program
run: $(TARGET)
	./$(TARGET)

# Phony targets to avoid conflicts with files named 'clean', 'all', etc.
.PHONY: all clean run
