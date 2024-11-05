#ifndef CITYITERATOR_H
#define CITYITERATOR_H

#include <iostream>

using namespace std;

class CityIterator{
    private:

    public:
   virtual bool hasNext()=0;
    // virtual Building* next()=0;
    virtual bool isDone()=0;
    // virtual Building* currentItem()=0;
    
};

#endif
