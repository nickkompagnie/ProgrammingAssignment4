//==============================================================
// Filename    : Customer.h
// Authors     : Nick Kompagnie(S2617676), Quinten Boeve(s2520222)
// Group       : 17
// License     : N.A. or opensource license like LGPL
// Description : Assignment 4.2
//==============================================================

#include <iostream>
#include <string>

#ifndef customer
#define customer



class Customer {


    public:

        std::string address;
        void SetAddress(std::string Address);
        void getAddress();
        virtual std::string getNames() = 0;


    private:
};

#endif
