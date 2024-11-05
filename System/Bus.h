#ifndef BUS_H
#define BUS_H

#include "Transport.h"

class Bus : public Transport {
public:
    void travel(const string& destination) const override ;
};

#endif
