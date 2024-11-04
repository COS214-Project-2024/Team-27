#ifndef CITYITERATOR_H
#define CITYITERATOR_H

#include <iostream>

using namespace std;

class CityIterator{
    private:

    public:
     virtual bool isDone()=0;
   virtual bool hasNext()=0;
 virtual void  Next()=0;
 
     virtual Building* buildingCurrentItem(){}

    virtual Citizen* citizenCurrentItem(){}
    

};

#endif
