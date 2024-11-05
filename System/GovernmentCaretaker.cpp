#include "GovernmentCareTaker.h"

void GovernmentCaretaker::saveMemento(GovernmentMemento* memento)
{
    history.push_back(memento);
}

GovernmentMemento* GovernmentCaretaker::getMemento(int i) {
   
    if (i >= 0 && i < history.size()) {
        return history[i];
    }
    std::cout<<"record not found"<<std::endl;
    return nullptr; 
}

GovernmentCaretaker::~GovernmentCaretaker() {
    
    for (GovernmentMemento* memento : history) {
        delete memento;
    }
    history.clear();
}