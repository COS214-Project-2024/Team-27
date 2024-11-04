#ifndef UTILITY_H
#define UTILITY_H

#include <iostream>
using namespace std;

class Utility{
    protected:
      
    public:
       virtual void useResources(double used) = 0;   
       virtual void update() = 0;
     
};



#endif