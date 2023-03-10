//==============================================================
// Filename    : package.cpp
// Authors     : Nick Kompagnie(S2617676), Quinten Boeve(s2520222)
// Group       : 17
// License     : N.A. or opensource license like LGPL
// Description : Assignment 4.2
//==============================================================

#include <iostream>
#include <string>
#include "package.h"

    
void Package::SetDetails(Customer* sender, Customer* receiver, float Weight) {
    
    _sender = sender;
    _receiver = receiver;
    name_sender = sender->getNames();
    adress_sender = sender->getAddress();
    name_receiver = receiver->getNames();
    adress_receiver = sender->getAddress();
    weight = Weight;
}

//The following funcions act like getter functions for the main.cpp file. This way, the printfunction can ask for information from the objects.
std::string Package::getNameSender() {
    return name_sender;
}
std::string Package::getAdressSender() {
    return adress_sender;

}
std::string Package::getNameReceiver() {
    return name_receiver;

}
std::string Package::getAddressReceiver() {
    return adress_receiver;

}




 