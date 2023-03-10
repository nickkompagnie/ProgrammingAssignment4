//==============================================================
// Filename    : OvernightPackage.cpp
// Authors     : Nick Kompagnie(S2617676), Quinten Boeve(s2520222)
// Group       : 17
// License     : N.A. or opensource license like LGPL
// Description : Assignment 4.2
//==============================================================

#include <iostream>
#include <string>
#include "OvernightPackage.h"

//This function calculates the cost of the overnight package
   float OvernightPackage::calculateCost() const  {
        const float pricePerKilo = 2.5;
        const int flatFee = 5;
        float costs = weight*weight*1.1+ weight*pricePerKilo + flatFee;
            return costs;
        }



