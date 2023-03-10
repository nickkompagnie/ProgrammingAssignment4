//==============================================================
// Filename    : main.cpp
// Authors     : Nick Kompagnie(S2617676), Quinten Boeve(s2520222)
// Group       : 17
// License     : N.A. or opensource license like LGPL
// Description : Assignment 4.2
//==============================================================

#include <iostream>
#include <string>
#include "Customer.h"

class BusinessCustomer: public Customer {


public:

std::string company_name;
std::string contact_person;

void SetCompany(std::string Company_Name, std::string Contact_Person);
   
virtual std::string getNames() override;


};

