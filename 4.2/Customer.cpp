//==============================================================
// Filename    : Customer.cpp
// Authors     : Nick Kompagnie(S2617676), Quinten Boeve(s2520222)
// Group       : 17
// License     : N.A. or opensource license like LGPL
// Description : Assignment 4.2
//==============================================================

#include <iostream>
#include <string>
#include "Customer.h"



void Customer::SetAddress(std::string Address) {
    
    address = Address;

}
void Customer::getAddress() {
    std::cout << "Customer address is: " << address << std::endl;

}

