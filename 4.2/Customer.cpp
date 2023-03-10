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


//Set address of customer
void Customer::SetAddress(std::string Address) {
    
    address = Address;

}

//Get address of customer
std::string Customer::getAddress() {
    return address; 
}

