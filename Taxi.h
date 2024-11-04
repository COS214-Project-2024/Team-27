#ifndef TAXI_H
#define TAXI_H

#include "Transport.h"

class Taxi : public Transport {
public:
    void travel(const string& destination) const override;
};

#endif 
