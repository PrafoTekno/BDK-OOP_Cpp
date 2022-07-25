
#include <iostream>
#include <string>

using namespace std;

#include "Player.h"

int main () {

    cout << "Multi File\n" << endl;

    Player orang1 = Player ("Naruto", 1445.4, 2563.2);
    orang1.display ();
    
    Player* orang2 = new Player ("Sasuke", 1205.6, 2856.3);
    orang2->display ();

    cout << "------ Update Data ------\n" << endl;

    orang1.update_power (5442.4);
    orang1.update_speed (3242.1);
    orang1.display ();

    orang2->update_power (3897.3);
    orang2->update_power (5221.7);
    orang2->display ();

    return 0;

}