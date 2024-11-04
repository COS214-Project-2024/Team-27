#ifndef GOVERNMENTCARETAKER_H
#define GOVERNMENTCARETAKER_H

#include <vector>
#include <iostream>
using namespace std;

#include "GovernmentMemento.h"
#include "CityGrowthManager.h"

class GovernmentCaretaker{
    private :
        friend class CityGrowthManager ;
        vector<GovernmentMemento*> history ;
    public :
        void saveMemento(GovernmentMemento* memento);
        GovernmentMemento* getMemento(int i);
        int numOfMementos(){
            return history.size() ;
        }
        ~GovernmentCaretaker();
};
#endif