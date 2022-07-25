
#include <iostream>
#include <string>

using namespace std;

class Player {

    private : 

        string nama;
        int exp, level;
        double power;

    public :

        //constructor
        Player (const char* nama) {
            
            Player::nama = nama;
            
            this->exp = 0;
            this->level = 1;

            Player::power = 1500;

        }
        
        //Getter, merubah atribute jadi read only
        string get_nama () {
            return this-> nama;
        }

        //Setter, merubah atribute jadi bisa diedit
        int addExp (int exp) {
            
            int max_exp = 100;

            if (this->exp >= max_exp) {

                this->level++;
                this->exp = 0;
                this->power += 100;

                return this->exp;

            } else {   
              
                this->exp += exp;
                return this->exp;
            }

        }

        void display () {

            cout << "Nama player\t: " << Player::nama << endl;
            
            cout << "Exp\t\t: " << this->exp << endl;
            cout << "Level\t\t: " << this->level << endl;

            cout << "Power\t\t: " << Player::power << endl;

        } 

};

int main () {

    cout << "Getter dan Setter (encapsulasi)\n" << endl;

    Player* pemain1 = new Player ("Zuko");
    pemain1->display ();

    cout << endl;   

    //Getter
    cout << "Ambil nama : " << pemain1->get_nama () << endl; //read only
    
    cout << "\n------ Perubahan Exp ------\n" << endl;
    //Setter
    cout << pemain1->addExp (22) << endl;
    cout << pemain1->addExp (18) << endl;
    cout << pemain1->addExp (34) << endl;
    cout << pemain1->addExp (48) << endl;
    cout << pemain1->addExp (34) << endl;
    cout << pemain1->addExp (18) << endl;
    cout << pemain1->addExp (34) << endl;

    cout << "\n------ Update Data ------\n" << endl;
    pemain1->display ();

    cout << endl;

    return 0;

}