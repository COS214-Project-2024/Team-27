#ifndef CARETAKER_H
#define CARETAKER_H

#include <vector>
#include "GovernmentMemento.h"
using namespace std ;

class GovernmentCareTaker {
    private :
        vector<GovernmentMemento*> history ;
    public :
        void saveMemento(GovernmentMemento* memento);
        GovernmentMemento* getMememnto(int i);
        ~GovernmentCareTaker();
};

#endif