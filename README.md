<a id="readme-top"></a>

<!-- PROJECT LOGO -->
<br />
<div align="center">
  <a href="">
    <img src="img/city_logo.png" alt="Logo" width="450" height="70">
  </a>

  <h3 align="center">City Builder Simulation</h3>

  <p align="center">
    A Dynamic Urban Development Simulator
    <br />
    <a href="https://your-docs-link.com"><strong>Explore the docs »</strong></a>
  </p>
</div>

<!-- TABLE OF CONTENTS -->
<details>
  <summary>Table of Contents</summary>
  <ol>
    <li>
      <a href="#about-the-project">About The Project</a>
      <ul>
        <li><a href="#description">Description</a></li>
        <li><a href="#features">Features</a></li>
        <li><a href="#design-patterns-used">Design Patterns Used</a></li>
        <li><a href="#built-with">Built With</a></li>
      </ul>
    </li>
    <li>
      <a href="#getting-started">Getting Started</a>
      <ul>
        <li><a href="#installation-requirements">Installation Requirements</a></li>
        <li><a href="#compilation-and-running">How to Compile and Run</a></li>
      </ul>
    </li>
    <li><a href="#group-members">Group Members</a></li>
  </ol>
</details>

<!-- ABOUT THE PROJECT -->
## About The Project

<div align="center"> 
<a href=""><img src="img/houses.jpg" alt="houses" width="300" height="300"> </a>
</div>

### Description
The City Builder Simulation is a dynamic application designed to model urban development and management. Players can construct and manage various aspects of a virtual city, including buildings, utilities, transportation, and citizen services. The simulation incorporates various design patterns to ensure scalability, maintainability, and flexibility, creating a robust experience for users.

### Features
- **Urban Development**: Manage the growth of a city while balancing resources and citizen satisfaction.
- **Building Creation**: Use the Prototype and Factory Method patterns to create diverse building types quickly.
- **Citizen Management**: Create customizable citizens using the Builder pattern.
- **Resource Management**: Monitor and utilize resources through the State and Mediator patterns.
- **Dynamic State Management**: Track building states (under construction, operational) to reflect real-world scenarios.

### Design Patterns Used
- **Memento**: Stores previous states of the government, such as taxes and buildings.
- **Prototype**: For cloning buildings, allowing quick duplication of complex structures.
- **Decorator**: Adds additional features to buildings, such as boreholes and solar panels.
- **Composite**: Manages apartment buildings by grouping individual units into a single entity.
- **Iterator**: Traverses buildings and citizens efficiently.
- **Command**: Handles actions like collecting taxes and moving citizens.
- **Builder**: Creates customized citizens (e.g., children and adults) with specific attributes.
- **Factory Method**: Used for creating buildings with standard procedures.
- **State**: Manages different states of buildings (e.g., under construction, operational).

<p align="right">(<a href="#readme-top">back to top</a>)</p>

### Built With
<p align="left">
  <a href="https://www.w3schools.com/cpp/" target="_blank" rel="noreferrer">
    <img src="https://raw.githubusercontent.com/devicons/devicon/master/icons/cplusplus/cplusplus-original.svg" alt="cplusplus" width="40" height="40"/>
  </a>
  <a href="https://code.visualstudio.com/" target="_blank" rel="noreferrer">
    <img src="https://raw.githubusercontent.com/devicons/devicon/master/icons/vscode/vscode-original.svg" alt="Visual Studio Code" width="40" height="40"/>
  </a>
</p>

<p align="right">(<a href="#readme-top">back to top</a>)</p>

<!-- GETTING STARTED -->
## Getting Started

### Installation Requirements
To run this project, you need:
- A C++ compiler (such as g++) and `make` utility
- Git for cloning the repository

### How to Compile and Run
1. **Clone the repository**:
   ```sh
   git clone https://github.com/yourusername/city-builder-simulation.git
   cd city-builder-simulation

2. **Compile the project**:
   ```sh
   make

3. **Run the program**:
   ```sh
   make run

<p align="right">(<a href="#readme-top">back to top</a>)</p> <!-- GROUP MEMBERS -->
Group Members
This project was developed by a dedicated team of five members:

Member 1
Member 2
Member 3
Member 4
Member 5
Each member contributed to various aspects of the design, coding, and testing phases to bring the City Builder Simulation to life.

<p align="right">(<a href="#readme-top">back to top</a>)</p> ```
