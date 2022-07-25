
#ifndef _ATHLETE
#define _ATHLETE

#include <string>
#include <iostream>
using namespace std;

class Athlete {

    public : //Bisa diakses oleh siapa pun (main, dll)
        string nama_public;

    private ://Hanya bisa diakses oleh Athlete saja
        string nama_private;

    public :
        Athlete (const char* nama) {
            this->nama_public = nama;
            Athlete::nama_private = nama;
            
        }

        void display (const char* nama) {
            this->nama_private = nama;
            cout << "Nama Private : " << this->nama_private << endl;
        }

};

#endif