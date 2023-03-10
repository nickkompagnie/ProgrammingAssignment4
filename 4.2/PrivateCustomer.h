//==============================================================
// Filename    : PrivateCustomer.hs
// Authors     : Nick Kompagnie(S2617676), Quinten Boeve(s2520222)
// Group       : 17
// License     : N.A. or opensource license like LGPL
// Description : Assignment 4.2
//==============================================================

#include <iostream>
#include "Customer.h"

class PrivateCustomer : public Customer {


public:

    std::string name;

    void SetName(std::string Name);
    virtual std::string getNames() override;


};