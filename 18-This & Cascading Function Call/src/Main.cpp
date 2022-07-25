
#include <iostream>
#include <string>

using namespace std;

class Identitas {

    private :

        string nama_depan;
        string nama_tengah;
        string nama_belakang;

    public : 

        Identitas () {

            nama_depan = "Ucup"; //inplisit
            this->nama_tengah = "Albert"; //eksplisit this dan arrow
            (*this).nama_belakang = "Pintar";//this diubah dulu jadi pointer buat ambil refrencenya
        }

        Identitas& setNamaDepan (const char* nama) {
            this->nama_depan = nama;
            return (*this);
        }
        Identitas& setNamaTengah (const char* nama) {
            this->nama_tengah = nama;
            return (*this);
        }
        Identitas& setNamaBelakang (const char* nama) {
            this->nama_belakang = nama;
            return (*this);
        }

        void display () {
            cout << "Nama : " << nama_depan;
            cout << " " << nama_tengah;
            cout << " " << (*this).nama_belakang << endl;
        }

};

int main () {

    cout << "This & Cascading Function Call\n" << endl;

    Identitas* orang1 = new Identitas ();
    orang1->display ();

    cout << "\nSetting nama\n" << endl;
    
    orang1->setNamaDepan ("Bagas");
    orang1->setNamaTengah ("Jidan");
    orang1->setNamaBelakang ("Ipul");

    orang1->display ();

    cout << endl;

    //cascading
    orang1->setNamaDepan ("Otong").setNamaTengah ("Pintar").setNamaBelakang ("Hebat");
    orang1->display ();

    cout << endl;

    return 0;

}