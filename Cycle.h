#ifndef CYCLE_H
#define CYCLE_H

#include "Transport.h"

class Cycle : public Transport {
public:
    void travel(const string& destination) const override;
};

#endif 
