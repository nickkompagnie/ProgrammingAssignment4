//==============================================================
// Filename    : main.cpp
// Authors     : Nick Kompagnie(S2617676), Quinten Boeve(s2520222)
// Group       : 17
// License     : N.A. or opensource license like LGPL
// Description : Assignment 4.1
//==============================================================
#include <iostream>
#include <string>
#include "package.h"

class OvernightPackage: public Package {


public:

    virtual float calculateCost() const override;


};


