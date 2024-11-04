#ifndef UTILITY_H
#define UTILITY_H

#include <iostream>
using namespace std;

class Utility{
    protected:
      bool f;
    public:
       virtual void useResources(double used) = 0;   
       virtual void update() = 0;
       virtual bool flag() = 0;
       virtual void showresources() = 0;
     
};



#endif