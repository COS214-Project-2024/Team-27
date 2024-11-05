<a id="readme-top"></a>

<!-- PROJECT LOGO -->
<br />
<div align="center">

  <h3 align="center">The Creatives</h3>

  <p align="center">
    City Builder Simulation
  </p>
</div>

<!-- ABOUT THE PROJECT -->
## About The Project

### Description
The City Builder Simulation is a dynamic application designed to model urban development and management. Players can construct and manage various aspects of a virtual city, including buildings, utilities, transportation, and citizen services. The simulation incorporates various design patterns to ensure scalability, maintainability, and flexibility, creating a robust experience for users.

### Features
- **Urban Development**: Manage the growth of a city while balancing resources and citizen satisfaction.
- **Building Creation**: Use the Prototype and Factory Method patterns to create diverse building types quickly.
- **Citizen Management**: Create customizable citizens using the Builder pattern.
- **Resource Management**: Monitor and utilize resources through the Observer patterns.
- **Dynamic State Management**: Track building states (under construction, operational) to reflect real-world scenarios.

### Design Patterns Used
- **Memento**: Stores previous states of the simulation.
- **Prototype**: For cloning buildings, allowing quick duplication of complex structures.
- **Decorator**: Adds additional features to buildings, such as boreholes and solar system.
- **Composite**: Manages apartment buildings by grouping individual units into a single apartment building.
- **Iterator**: Traverses buildings and citizens efficiently.
- **Command**: Handles actions like collecting taxes for citizens and buildings.
- **Builder**: Creates customized citizens (e.g., children and adults) with specific attributes.
- **Factory Method**: Used for creating buildings with standard procedures.
- **State**: Manages different states of buildings (e.g., under construction, operational).
- **Facade**: Acts as a unified interface to various design patterns.
- **Observer**: Facilitates interaction between buildings and utilities.


<!-- GETTING STARTED -->
## Getting Started

### Installation Requirements
To run this project, you need:
- A C++ compiler (such as g++) and `make` utility
- Git for cloning the repository

### How to Compile and Run
1. **Download the repository**:
   

2. **Compile the project**:
   ```sh
   make

3. **Run the program**:
   ```sh
   make run


Group Members
</br>
This project was developed by a dedicated team of five members:

- **Tebatso Mahlathini**
- **Rethabile Mokoena**
- **Lineo Khabane**
- **Jongisapho Ndeya**
- **Lesedi Manoto**

<p align="right">(<a href="#readme-top">back to top</a>)</p>
