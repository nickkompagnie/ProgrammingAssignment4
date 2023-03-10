//==============================================================
// Filename    : main.cpp
// Authors     : Nick Kompagnie(S2617676), Quinten Boeve(s2520222)
// Group       : 17
// License     : N.A. or opensource license like LGPL
// Description : Assignment 4.2
//==============================================================
#include <iostream>
#include <string>

#ifndef package
#define package



class Package {


    public:

        std::string name_sender;
        std::string adress_sender;
        std::string name_receiver;
        std::string adress_receiver;
        float weight;

        
        void SetDetails(std::string Name_Sender, std::string Adress_Sender,std::string Name_Receiver,std::string Adress_Receiver, float Weight);

        virtual float calculateCost() const = 0; 


        std::string getNameSender();
        std::string getAdressSender();
        std::string getNameReceiver();
        std::string getAddressReceiver();
    private:
};

#endif
