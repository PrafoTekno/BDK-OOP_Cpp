
#include <iostream>
#include <string>

using namespace std;

#include "Athlete.hpp"

int main () {

    cout << "Private dan Public Keyword\n" << endl;

    Athlete* orang1 = new Athlete ("Agus");
    cout << "Nama Public : " << orang1->nama_public << endl;
    orang1->display ("Ilham");
    //cout << orang1->nama_private << endl; //private ga bisa diakses

    cout << endl;

    return 0;

}