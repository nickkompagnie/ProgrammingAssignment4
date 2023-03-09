//==============================================================
// Filename    : main.cpp
// Authors     : Nick Kompagnie(S2617676), Quinten Boeve(s2520222)
// Group       : 17
// License     : N.A. or opensource license like LGPL
// Description : Assignment 4.1
//==============================================================

#include <iostream>

#include "OvernightPackage.h"
#include "TwoDayPackage.h"
#include <string>
#include <vector>
#include <list>


//This function prints all the shipping costs, by using the calculateCost function of every instance. 
//The function expects a vector with pointers to the packages
//The output is visible in the terminal

void printCosts(std::vector<Package*> Packagelist) {

    for(int i=0; i < Packagelist.size(); i++) {

        float result = Packagelist[i]->calculateCost();
        std::cout << result << std::endl;




    }
}






int main(void) {


    //Initialize the vector in which all objects of the classes will be stored
    std::vector<Package*> Packagelist;

    //String definition for testing purposes
    std::string test = "test";

    //Declaration of packages
    OvernightPackage package1;
    TwoDayPackage package2;

    //Use set function to set the variables in the object
    package1.SetDetails(test,test,test,test,1.0f);
    package2.SetDetails(test,test,test,test,1.0f);

    

    
    // 
    Packagelist.push_back(&package1);
    Packagelist.push_back(&package2);


    printCosts(Packagelist);












   




return 0;
}
