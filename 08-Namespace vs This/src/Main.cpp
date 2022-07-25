
#include <iostream>
#include <string>

using namespace std;

//data member
class Data {

    public :
        
        string text;
        int angka;
        int m_angka;

        Data (const char* text, const int angka) {
            //dengan namespace
            Data::text = text;

            //dengan this
            this->angka = angka; //this = pointer, jadi pake ->

            //dengan konvensi
            m_angka = angka;
        }

};

//member function
namespace Udin {
    
    class Player {

        public :

            string nama;
            double tinggi;
            double berat;

            Player (const char* nama, double tinggi) {
                Player::setNama (nama);
                Player::setTinggi (tinggi); 
            }

            void setNama (const char* nama) {
                this->nama = nama;
            }

            void setTinggi (double tinggi) {
                this->tinggi = tinggi;
            }

            void setBerat (double); //prototype

    };

}

void Udin::Player::setBerat (double berat) {
    this->berat = berat;
}

int main () {

    cout << "Namespace vs This\n" << endl;

    Data* object1 = new Data ("object 1", 2);

    cout << "angka = " << object1->angka << endl; 
    cout << "text = " << object1->text << endl;
    cout << "m_angka = " << object1->m_angka << endl;

    cout << endl;

    Udin::Player* pemain1 = new Udin::Player ("Dino", 3.5);
    pemain1->setBerat (10);

    cout << "nama = " << pemain1->nama << endl;
    cout << "tinggi = " << pemain1->tinggi << endl;
    cout << "berat = " << pemain1->berat << endl;

    cout << endl;

    return 0;

}