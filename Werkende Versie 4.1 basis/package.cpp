//==============================================================
// Filename    : main.cpp
// Authors     : Nick Kompagnie(S2617676), Quinten Boeve(s2520222)
// Group       : 17
// License     : N.A. or opensource license like LGPL
// Description : Assignment 4.1
//==============================================================

#include <iostream>
#include <string>
#include "package.h"

    
void Package::SetDetails(std::string Name_Sender, std::string Adress_Sender,std::string Name_Receiver,std::string Adress_Receiver, float Weight) {
    
    name_sender = Name_Sender;
    adress_sender = Adress_Sender;
    name_receiver = Name_Receiver;
    adress_receiver = Adress_Receiver;
    weight = Weight;
}