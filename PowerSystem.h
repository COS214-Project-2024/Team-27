#ifndef POWERSYSTEM_H
#define POWERSYSTEM_H

#include <iostream>
#include "Utility.h"
using namespace std;

class PowerSystem: public Utility{
    private:
        double megawatts;
        double save;
    public:
        PowerSystem(double megawatts);
        void update();
        void useResources(double used);
    
};

#endif