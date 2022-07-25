
#include <iostream>
#include <string>
#include <cstdlib> //memuat fungsi random
#include <time.h>

using namespace std;

int input_angka_acak;
int random_angka_acak;

class Player {

    private :

        string nama, weapon;
        int exp, level;
        double power, hp, weapon_damage;

    public :

        //constructor
        Player (const char*, const char*, double);

        double Nyerang ();
        double Terserang (double);

        void display_data ();

        string getNama ();
        double getHp ();
        
};

// Prototype
void Skema_game ();
void Milih_angka ();

int main () {

    cout << "\tSimulasi Game Sederhana\n" << endl;  

    Skema_game ();

    cout << endl; 

    return 0;

}

// Penjabaran Method

//constructor
Player::Player (const char* nama, const char* weapon, double damage) {

    Player::nama = nama;
    Player::weapon = weapon;
    Player::weapon_damage = damage;

    this->exp = 0;
    this->level = 1;
    this->power = 200;
    this->hp = 1000;

}

double Player::Nyerang () {

    const int exp_max = 250; 

    this->power = this->power + this->weapon_damage;
    this->exp += 25;

    if (this->exp >= exp_max) {
        this->level++;
    }

    return this->power;

}

double Player::Terserang (double damage) {

    const int hp_min = 0;

    this->hp = this->hp - damage;
    
    return this->hp;

}

string Player::getNama () {
    return Player::nama;
}

double Player::getHp () {
    return this->hp;
}

void Player::display_data () {

    cout << "Nama\t: " << Player::nama << endl;
    cout << "Weapon\t: " << Player::weapon << endl;
    cout << "Power\t: " << this->power << endl;
    cout << "HP\t: " << this->hp << endl;
    cout << "Exp\t: " << this->exp; 
    cout << "\t|||\tLevel\t: " << this->level << endl;

    cout << "\n************************************\n" << endl;

}

// Method di luar class Player

void Milih_angka () {

    cout << "Saatnya bertarung\n" << endl;
    cout << "Pilih angka dari 1-10 (Gino) : ";
    cin >> input_angka_acak;

    srand (time (0));
    random_angka_acak = 1 + (rand () % 10);

    cout << "\n^^^^^^^^^^^^^^ loading...\n" << endl;

}

void Skema_game () {

    Player orang1 = Player ("Gino", "Indra Arrow", 32); 
    Player* orang2 = new Player ("Grido", "Light Sowrd", 35);

    while (true) {

        cout << "------- Data Pemain --------\n" << endl;

        orang1.display_data ();
        orang2->display_data (); 

        Milih_angka ();

        cout << input_angka_acak << " (" << orang1.getNama () << ") vs ";
        cout << random_angka_acak << " (" << orang2->getNama () << ")" << endl;

        cout << endl;

        // Kondisi

        if (input_angka_acak > random_angka_acak) {
            orang1.Nyerang ();
            orang2->Terserang (orang1.Nyerang ());
        }

        else if (input_angka_acak < random_angka_acak) {
            orang2->Nyerang ();
            orang1.Terserang (orang2->Nyerang ());
        }

        else {
            cout << "Tidak ada aksi menyerang\n" << endl;
        } 


        if (orang1.getHp () <= 0) {
            cout << orang2->getNama () << " adalah pemenangnya" << endl;
            break;
        }
        else if (orang2->getHp () <= 0) {
            cout << orang1.getNama () << " adalah pemenangnya" << endl;
            break;
        }

    }

}