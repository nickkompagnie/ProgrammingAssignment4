//==============================================================
// Filename    : main.cpp
// Authors     : Nick Kompagnie(S2617676), Quinten Boeve(s2520222)
// Group       : 17
// License     : N.A. or opensource license like LGPL
// Description : Assignment 4.2
//==============================================================

#include <iostream>

#include "OvernightPackage.h"
#include "TwoDayPackage.h"
#include "PrivateCustomer.h"
#include "BusinessCustomer.h"
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

    


    //Initialize the vector in which customers will be stored
    std::vector<Customer*> Customerlist;

    //Declaration of customers
    PrivateCustomer    customer1;
    BusinessCustomer       customer2;
    PrivateCustomer    customer3;
    BusinessCustomer       customer4;
    PrivateCustomer       customer5;
    BusinessCustomer       customer6;
    PrivateCustomer       customer7;

    //Set address
    customer1.SetAddress("Isaplantsoen 552b, 3 hoog achter, 1842 ZM, Coevorden, Friesland, Netherlands");
    customer2.SetAddress("Grootplein 077c, 3 hoog, 2636 IZ, Oostum, Noord-Holland, Netherlands");
    customer3.SetAddress("Petersgracht 016, 2 hoog, 8905 AG, Enzelensbergen, Groningen, Netherlands");
    customer4.SetAddress("Larskade 470b, 1 hoog, 5756 RH, Schaaps, Drenthe, Netherlands");
    customer5.SetAddress("Smitsteeg 852 III, 3 hoog, 7980 XA, Katwijk, Friesland, Netherlands");
    customer6.SetAddress("Kleinplantsoen 955 I, 2 hoog, 7195 TZ, Venekotenmeer, Drenthe, Netherlands");
    customer7.SetAddress("Thijsweg 6, 2 hoog, 2756 DB, Zundert, Limburg, Netherlands");


    //Set details
    customer1.SetName("Jan Boekel");
    customer2.SetCompany("FC twente", "Ron Jans");
    customer3.SetName("Barend Janssen");
    customer4.SetCompany("Bien Boontjes", "Maartje Biensma");
    customer5.SetName("Esmee Bingelaar");
    customer6.SetCompany("Kwieke Wipwaps", "Wipke Wapsma");
    customer7.SetName("Lieke Broekstra");


    //Pushing all the customers in a vector
    Customerlist.push_back(&customer1);
    Customerlist.push_back(&customer2);
    Customerlist.push_back(&customer3);
    Customerlist.push_back(&customer4);
    Customerlist.push_back(&customer5);
    Customerlist.push_back(&customer6);
    Customerlist.push_back(&customer7);

    customer1.getNames();
    customer2.getNames();
    customer3.getNames();
    customer4.getNames();
    customer5.getNames();
    customer6.getNames();
    customer7.getNames();

    //Use set function to set the variables in the object. Input defined as (Name_Sender, Adress_Sender,Name_Receiver, Adress_Receiver, Weight)
    // All strings except for the Weight. The function expects a float for that.
    package1.SetDetails(&customer1, &customer2, 5.5f);
    package2.SetDetails(&customer3, &customer4, 6.25f);
    package3.SetDetails(&customer1, &customer3, 20.3f);
    package4.SetDetails(&customer7, &customer6 ,11.2f);

    //Pushing all the packages in a vector.
    Packagelist.push_back(&package1);
    Packagelist.push_back(&package2);
    Packagelist.push_back(&package3);
    Packagelist.push_back(&package4);

    //Call the printCosts function with the prevously made list as an input.
    printCosts(Packagelist);

return 0;
}
