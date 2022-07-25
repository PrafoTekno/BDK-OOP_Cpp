
#include <iostream>
#include <string>

using namespace std;

class Timnas {

    public : 

        string nama;
        float tinggi;
        float berat;
        string posisi;

        //Constructor
        Timnas (string nama, float tinggi, float berat, string posisi) {

            // Pakai namespace Timnas
            Timnas::nama = nama;
            Timnas::tinggi = tinggi;
            Timnas::berat = berat;
            Timnas::posisi = posisi;

        }

        // Method tanpa parameter, tanpa return
        void tampilkanData () {

            cout << "Nama\t\t: " << nama << endl;
            cout << "Tinggi badan\t: " << tinggi << " cm" << endl;
            cout << "Berat badan\t: " << berat << " kg" << endl;
            cout << "Posisi\t\t: " << posisi << endl;
            cout << endl;

        }

        //Method dengan parameter, tanpa return
        void ubahPosisi (const char * posisi_baru) {
            Timnas::posisi = posisi_baru;
        }

        //Method tanpa parameter, dengan return
        int tampilTinggi () {
            return Timnas::tinggi;
        }

        //Method dengan parameter dan return
        string namaClub (const char * club) {
            return club;
        } 

};

int main () {

    cout << "Method\n" << endl;

    Timnas pemain1 = Timnas ("Abdul", 176.3, 53.4, "Left Back");
    Timnas pemain2 = Timnas ("Howard", 186.8, 63.4, "Center Back");

    pemain1.tampilkanData ();
    pemain2.tampilkanData ();
    pemain1.ubahPosisi ("Left Wing");
    pemain1.tampilkanData ();

    cout << "Pembulatan Tinggi badan 1 = " << pemain1.tampilTinggi () << endl;
    cout << "Pembulatan Tinggi badan 2 = " << pemain2.tampilTinggi () << endl;

    cout << endl;

    cout << "Club " << pemain1.nama << " adalah " << pemain1.namaClub ("Gapas") << endl;
    cout << "Club " << pemain2.nama << " adalah " << pemain2.namaClub ("Vamos") << endl;

    cout << endl;

    /*
    cout << pemain1.nama << endl;
    cout << pemain1.tinggi << endl;
    cout << pemain1.berat << endl;
    cout << pemain1.posisi << endl;
    */

    return 0;

}
