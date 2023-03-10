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
        std::cout << "Package from: " << Packagelist[i]->getNameSender() << " to: " << Packagelist[i]->getAddressReceiver() << " Costs: " << result << "euro" << std::endl;
    }
}



int main(void) {

    //Initialize the vector in which all objects of the classes will be stored
    std::vector<Package*> Packagelist;

    //Declaration of packages
    OvernightPackage    package1;
    TwoDayPackage       package2;
    OvernightPackage    package3;
    TwoDayPackage       package4;

    //Use set function to set the variables in the object. Input defined as (Name_Sender, Adress_Sender,Name_Receiver, Adress_Receiver, Weight)
    // All strings except for the Weight. The function expects a float for that.
    package1.SetDetails("Randell Landon","Isaplantsoen 552b, 3 hoog achter, 1842 ZM, Coevorden, Friesland, Netherlands","Lex Karter","Smitsteeg 852 III, 3 hoog, 7980 XA, Katwijk, Friesland, Netherlands",5.5f);
    package2.SetDetails("Finley Thorburn","Grootplein 077c, 3 hoog, 2636 IZ, Oostum, Noord-Holland, Netherlands","Ashleigh Devin","Thijsweg 6, 2 hoog, 2756 DB, Zundert, Limburg, Netherlands",6.25f);
    package3.SetDetails("Brennan Azaria","Petersgracht 016, 2 hoog, 8905 AG, Enzelensbergen, Groningen, Netherlands","Arlie Mattie"," Kleinplantsoen 955 I, 2 hoog, 7195 TZ, Venekotenmeer, Drenthe, Netherlands",20.3f);
    package4.SetDetails("Tawnya Melvin","Larskade 470b, 1 hoog, 5756 RH, Schaaps, Drenthe, Netherlands","Valarie Eloise","Vensteeg 001a, 1 hoog, 4240 XW, Zwartberg, Zeeland, Netherlands",11.2f);

    //Pushing all the packages in a vector.
    Packagelist.push_back(&package1);
    Packagelist.push_back(&package2);
    Packagelist.push_back(&package3);
    Packagelist.push_back(&package4);

    //Call the printCosts function with the prevously made list as an input.
    printCosts(Packagelist);

return 0;
}
