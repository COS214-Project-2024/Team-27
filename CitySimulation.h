#ifndef CITYSIMULATION_H
#define CITYSIMULATION_H
#include <iostream>
#include "CityFacade.h"
using namespace std;

class CitySimulation{
    private: 
        CityFacade* cityFacade;
        void processCommand(int command);

    public:
        CitySimulation();
        void home();
        void start();
        void stats();
        void first();
        void option1();
        void option2();
        void option3();
        void option4();
        void option5();
        void option6();
        void option7();
        void option8();
        void option9();
};

#endif