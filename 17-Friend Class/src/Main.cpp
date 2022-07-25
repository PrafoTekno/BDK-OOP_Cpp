
#include <iostream>
#include <string>

using namespace std;

class Persegi_Panjang; //akses friend class hanya berlaku 1 arah

class Persegi {

    friend class Persegi_Panjang;

    private :
        double sisi;
    
    public :
        Persegi (double sisi) {
            Persegi::sisi = sisi;
        }
        double luas () {
            return this->sisi * this->sisi;
        }

};

class Persegi_Panjang {

    private :
        double panjang, lebar;

    public :
        Persegi_Panjang (double panjang, double lebar) {
            Persegi_Panjang::panjang = panjang;
            Persegi_Panjang::lebar = lebar;
        }
        double luas () {
            return this->panjang * this->lebar;
        }
        double isPanjang (const Persegi &object) {
            bool status = this->panjang < object.sisi;
            return status;
        }

};

int main () {

    cout << "Friend Class\n" << endl;

    Persegi kotak1 = Persegi (7);
    cout << "Luas persegi\t\t= " << kotak1.luas () << endl;

    Persegi_Panjang kotak2 = Persegi_Panjang (5, 8);
    cout << "Luas persegi panjang\t= " << kotak2.luas () << endl;

    cout << endl;

    cout << "Sisi pada persegi > panjang pada persegi panjang : " << kotak2.isPanjang (kotak1);

    cout << "\n" << endl;

    return 0;

}