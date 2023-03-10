//==============================================================
// Filename    : BusinessCustomer.cpp
// Authors     : Nick Kompagnie(S2617676), Quinten Boeve(s2520222)
// Group       : 17
// License     : N.A. or opensource license like LGPL
// Description : Assignment 4.2
//==============================================================
#include <iostream>
#include <string>
#include "BusinessCustomer.h"

//Function to set company name and contact person
void BusinessCustomer::SetCompany(std::string Company_Name, std::string Contact_Person) {

    company_name = Company_Name;
    contact_person = Contact_Person;
   
};

//Function to get company name and contact person
std::string BusinessCustomer::getNames() {
    std::string stringToReturn = contact_person + ", " + company_name;
    return stringToReturn;
}