
//Deklarasi Class

#ifndef _PLAYER
#define _PLAYER

#include <string>

class Player {

    public :

        std::string nama;
        double power;
        double speed;

        //constructor
        Player (const char*, double, double); //Prototype
        
        void display ();
        double update_power (double);
        double update_speed (double); 

};

#endif