
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Agent {

    public :

        string nama;
        string kode;
        string unit;

        Agent (string nama, string kode, string unit) {

            Agent::nama = nama;
            Agent::kode = kode;
            Agent::unit = unit;

        }

        string DataAgent () {

            return "\nNama Agent\t: "+ Agent::nama + "\n" +
                   "Kode Agent\t: " + Agent::kode + "\n" +
                   "Unit Agent\t: " + Agent::unit + "\n" +
                   "\n---------------------------------------\n";
        
        }

};

class DataBase {

    public : 

        ofstream out;
        ifstream in;
        string nama_file;

        DataBase (const char* nama_file) {
            DataBase::nama_file = nama_file;
        }

        void saveData (Agent orang) {

            cout << "Nama Agent\t: " << orang.nama << endl;
            cout << "Kode Agent\t: " << orang.kode << endl;
            cout << "Unit Agent\t: " << orang.unit << endl;

            DataBase::out.open (DataBase::nama_file, ios::app);
            DataBase::out << orang.DataAgent ();
            DataBase::out.close ();

        }

        void showAll (Agent orang) {

            DataBase::in.open (DataBase::nama_file, ios::in);
            string text;

            while (!DataBase::in.eof ()) {
                
                getline (DataBase::in, text);
                cout << text << endl;
            
            }

        }

};

int main () {

    cout << "Database Sederhana\n" << endl;

    string namaInput, kodeInput, unitInput;

    cout << "-------- Input Data Agent --------\n" << endl;

    cout << "Masukan nama agent\t: ";
    cin >> namaInput;
    cout << "Masukan kode agent\t: ";
    cin >> kodeInput;
    cout << "Masukan unit agent\t: ";
    cin >> unitInput;

    cout << "\n-------- Output Data Agent --------\n" << endl;

    Agent orang = Agent (namaInput, kodeInput, unitInput);
    DataBase data_base = DataBase ("file.txt");

    data_base.saveData (orang);

    cout << "\nMau Menampilkan Database? (y/n) ";
    char tanya;
    cin >> tanya;

    if (tanya == 'y') {
        cout << "\n-------- Output Database --------\n" << endl;
        data_base.showAll (orang);
    } 
    else if (tanya == 'n') {
        cout << "Ok baiklah sampai jumpa" << endl;
    }
    else {
        cout << "Error : Tidak ada perintah yang memenuhi!" << endl;
    }

    cout << endl;

    return 0;

}