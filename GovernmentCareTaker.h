#ifndef GOVERNMENTCARETAKER_H
#define GOVERNMENTCARETAKER_H

#include "GovernmentMemento.h"
#include "CityGrowthManager.h"

class GovernmentCaretaker{
    private :
        friend class CityGrowthManager ;
        vector<GovernmentMemento*> history ;
    public :
        void saveMemento(GovernmentMemento* memento);
        GovernmentMemento* getMemento(int i);
        ~GovernmentCaretaker();
};


#endif