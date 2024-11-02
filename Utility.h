#ifndef UTILITY_H
#define UTILITY_H

#include <iostream>
using namespace std;

class Utility{
    private:

    public:
       virtual void useResources(double used) = 0;   
};

#endif