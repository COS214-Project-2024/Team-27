#ifndef WATERSYSTEM_H
#define WATERSYSTEM_H

#include <iostream>
#include "Utility.h"
using namespace std;

class WaterSystem: public Utility{
    private:
        double Litres;
        double save;
    public:
        WaterSystem(double Litres);
        void reboot();
        void useResources(double used);    
};

#endif