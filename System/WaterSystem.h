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
        void update();
        void useResources(double used);
        bool flag();
        void showresources();
};

#endif
