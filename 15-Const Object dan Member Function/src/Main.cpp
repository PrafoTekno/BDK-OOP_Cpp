
#include <iostream>
#include <string>

using namespace std;

class Orang {

    public :
        
        string nama;
        int umur;
    
    public :
        
        Orang (const char* nama, int umur) {
            Orang::nama = nama;
            Orang::umur = umur;
        }

        void display () const {
            cout << "Nama : " << this->nama << endl;
            cout << "Umur : " << this->umur << endl;
            
            cout << endl;
        }

        string ganti_nama (const char* nama_baru) {
            this->nama = nama_baru;
            return this->nama;
        }

};

int main () {

    cout << "Const Object dan Member Function\n" << endl;

    Orang orang1 = Orang ("Udin", 32);
    orang1.display ();

    const Orang* orang2 = new Orang ("Joni", 20); //input yang di dalam tidak boleh dirubah
    orang2->display (); //fungsi member yang cocok dengan orang 2 hanya display ()

    orang1.ganti_nama ("Naruto");
    orang1.display ();

    orang1.nama = "Sasuke";
    orang1.display ();


    return 0;

}