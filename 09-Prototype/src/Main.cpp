
#include <iostream>
#include <string>

using namespace std;

class Pemain {

    public : 

        string nama;
        int umur;

        //Prototype
        Pemain (const char*, int);
        void display ();
        string gantiNama (const char*);

};

int main () {

    cout << "Prototype\n" << endl;

    Pemain orang1 = Pemain ("Joni", 20); //Stack object
    orang1.display ();
    orang1.gantiNama ("Udin");

    Pemain* orang2 = new Pemain ("Agus", 25); //Heap object
    orang2->display ();
    orang2->gantiNama ("Asep");
    
    cout << "-------- Perubahan nama --------\n" << endl;
    orang1.display ();
    orang2->display ();

    cout << endl;

    return 0;

}

//Penjabaran method

Pemain::Pemain (const char* nama, int umur) {
    Pemain::nama = nama;
    Pemain::umur = umur;
}

void Pemain::display () {
    cout << "Nama : " << this->nama << endl;
    cout << "Umur : " << this->umur << " tahun" << endl << endl;
}

string Pemain::gantiNama (const char* nama_baru) {
    this->nama = nama_baru;
    return this->nama;
}
