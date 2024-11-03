#include "GovernmentCaretaker.h"

void GovernmentCaretaker::saveMemento(GovernmentMemento* memento){
    history.push_back(memento);
}

GovernmentMemento* GovernmentCaretaker::getMemento(int i){
    if(i < 0 || i>= history.size()) return nullptr ;
    return history[i];
}

GovernmentCaretaker::~GovernmentCaretaker(){
    for(auto memento: history){
        delete memento ;
    }
}