#ifndef TRANSPORT_H
#define TRANSPORT_H

#include <string>
#include <iostream>
using namespace std;

class Transport {
public:
    virtual ~Transport() {}
    virtual void travel(const string& destination) const = 0;
};

#endif // TRANSPORT_H
