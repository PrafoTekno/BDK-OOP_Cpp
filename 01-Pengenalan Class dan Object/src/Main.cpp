
#include <iostream>
#include <string>

using namespace std;

class Shinobi {

    // private : berlaku secara lokal
    public : // Berlaku secara global

        string nama;
        int code;
        string status;

};

int main () {

    cout << "Pengenalan Class dan Object\n" << endl;

    Shinobi ninja1, ninja2, ninja3;

    ninja1.nama = "Naruto";
    ninja1.code = 13564;
    ninja1.status = "Genin";

    ninja2.nama = "Sasuke";
    ninja2.code = 13465;
    ninja2.status = "Genin";

    ninja3.nama = "Sakura";
    ninja3.code = 13263;
    ninja3.status = "Jonin";

    cout << "---------- Shinobi 1 -----------\n" << endl;
    cout << "Nama\t: " << ninja1.nama << endl;
    cout << "Code\t: " << ninja1.code << endl;
    cout << "Status\t: " << ninja1.status << endl;

    cout << "\n---------- Shinobi 2 -----------\n" << endl;
    cout << "Nama\t: " << ninja2.nama << endl;
    cout << "Code\t: " << ninja2.code << endl;
    cout << "Status\t: " << ninja2.status << endl;

    cout << "\n---------- Shinobi 3 -----------\n" << endl;
    cout << "Nama\t: " << ninja3.nama << endl;
    cout << "Code\t: " << ninja3.code << endl;
    cout << "Status\t: " << ninja3.status << endl;

    cout << endl;

    return 0;

}