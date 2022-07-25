
#include <iostream>
#include <string>

using namespace std;

class Pemain_Sepak_Bola;

class Pemain_Futsal {

    private :

        string nama;
        string posisi;

    public :

        Pemain_Futsal (const char* nama) {

            Pemain_Futsal::nama = nama;
            Pemain_Futsal::posisi = "Anchor";

        }

        friend bool compare (const Pemain_Futsal& orang1, const Pemain_Sepak_Bola& orang2);
        friend bool compare (const Pemain_Sepak_Bola& orang1, const Pemain_Futsal& orang2);

};

class Pemain_Sepak_Bola {

    private :

        string nama;
        string posisi;

    public :

        Pemain_Sepak_Bola (const char* nama) {

            Pemain_Sepak_Bola::nama = nama;
            Pemain_Sepak_Bola::posisi = "Wing Left";

        } 

        friend bool compare (const Pemain_Futsal& orang1, const Pemain_Sepak_Bola& orang2);
        friend bool compare (const Pemain_Sepak_Bola& orang1, const Pemain_Futsal& orang2);

};

bool compare (const Pemain_Futsal& orang1, const Pemain_Sepak_Bola& orang2) {

    cout << orang1.posisi << endl;
    cout << orang1.nama << endl << endl;

    cout << orang2.posisi << endl;
    cout << orang2.nama << endl;

    return true;

}

int main () {

    cout << "Friend Function\n" << endl;

    Pemain_Futsal orang1 = Pemain_Futsal ("Asep");
    Pemain_Sepak_Bola orang2 = Pemain_Sepak_Bola ("Joni");

    compare (orang1, orang2);

    cout << endl;

    return 0;

}