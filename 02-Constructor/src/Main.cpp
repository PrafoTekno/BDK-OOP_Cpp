
#include <iostream>
#include <string>

using namespace std;

// Constructor

class Siswa {

    public :
        
        string nama;
        string NISN;
        double nilai;
        int ranking;

        Siswa (string inputNama, string inputNISN, double inputNilai, int inputRanking) {
            
            // Menggunakan namespace 

            Siswa::nama = inputNama;
            Siswa::NISN = inputNISN;
            Siswa::nilai = inputNilai;
            Siswa::ranking = inputRanking;

            cout << "Nama Siswa\t: " << Siswa::nama << endl;
            cout << "NISN Siswa\t: " << Siswa::NISN << endl;
            cout << "Nilai Siswa\t: " << Siswa::nilai << endl;
            cout << "Ranking Siswa\t: " << Siswa::ranking << endl << endl;

        }

}; 

int main () {

    cout << "Constructor\n" << endl;

    Siswa murid1 ("Rudi", "234501", 83.5, 2);
    Siswa murid2 ("Joni", "237801", 74.1, 4);
    Siswa murid3 ("Sari", "239101", 79.2, 3);
    Siswa murid4 ("Ojak", "233301", 87.3, 1);

    return 0;

}