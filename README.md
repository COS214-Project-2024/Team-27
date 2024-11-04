City Builder Simulation
Description
The City Builder Simulation is a dynamic application designed to model urban development and management. Players can construct and manage various aspects of a virtual city, including buildings, utilities, transportation, and citizen services. The simulation incorporates various design patterns to ensure scalability, maintainability, and flexibility, creating a robust experience for users.

Features
Urban Development: Manage the growth of a city while balancing resources and citizen satisfaction.
Building Creation: Use the Prototype and Factory Method patterns to create diverse building types quickly.
Citizen Management: Create customizable citizens using the Builder pattern.
Resource Management: Monitor and utilize resources through the State and Mediator patterns.
Dynamic State Management: Track building states (under construction, operational) to reflect real-world scenarios.
Design Patterns Used
Memento: Stores previous states of the government, such as taxes and buildings.
Prototype: For cloning buildings, allowing quick duplication of complex structures.
Decorator: Adds additional features to buildings, such as boreholes and solar panels.
Composite: Manages apartment buildings by grouping individual units into a single entity.
Iterator: Traverses buildings and citizens efficiently.
Command: Handles actions like collecting taxes and moving citizens.
Builder: Creates customized citizens (e.g., children and adults) with specific attributes.
Factory Method: Used for creating buildings with standard procedures.
State: Manages different states of buildings (e.g., under construction, operational).
Compilation and Running
To compile and run the City Builder Simulation, follow these steps:

Clone the repository:

bash
Copy code
git clone https://github.com/yourusername/city-builder-simulation.git
cd city-builder-simulation
Compile the project:

go
Copy code
make
Run the program:

bash
Copy code
./city_builder_simulation
Data Files: Place any required data files in the data/ directory. Make sure they are in the correct format for the program to recognize.

Group Members
This project was developed by a dedicated team of five members:

Member 1
Member 2
Member 3
Member 4
Member 5
Each member contributed to various aspects of the design, coding, and testing phases to bring the City Builder Simulation to life.

