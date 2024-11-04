#ifndef WALK_H
#define WALK_H

#include "Transport.h"

class Walk : public Transport {
public:
    void travel(const string& destination) const override ;
};

#endif 
