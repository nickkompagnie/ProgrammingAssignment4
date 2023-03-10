//==============================================================
// Filename    : PrivateCustomer.cpp
// Authors     : Nick Kompagnie(S2617676), Quinten Boeve(s2520222)
// Group       : 17
// License     : N.A. or opensource license like LGPL
// Description : Assignment 4.2
//==============================================================
#include <iostream>
#include "PrivateCustomer.h"

//Sets name of private customer
void PrivateCustomer::SetName(std::string Name) {

    name = Name;

};

//Gets name of private customer
std::string PrivateCustomer::getNames() {
    return name;
}