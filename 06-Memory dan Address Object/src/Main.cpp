
#include <iostream>
#include <string>
#include <chrono>

using namespace std;
using Clock = std::chrono::high_resolution_clock;
using TimePoint = std::chrono::time_point<Clock>;

class Kosong {

    public :
        int data () {
            return 2;
        }
};

class Isi {

    public : 
        int a; // int = 4 byte
        int b;
        double c; // double = 8 byte;

};

class ninja {

    public :
        string nama;

        ninja (const char* nama) {
            ninja::nama = nama;
        }
};

int main () {

    cout << "Memory dan Address Object\n" << endl;

    cout << "Alokasi memory class kosong : " << sizeof (Kosong) << " byte" << endl;
    cout << "Alokasi memory class isi : " << sizeof (Isi) << " byte" << endl;

    cout << endl;

    string a;
    string b;
    ninja* orang = new ninja ("Budi"); //Heap
    ninja orang1 = ninja ("Joni"); //Stack
    string c;
    string d;

    cout << "Address Stack\n" << endl;

    cout << &a << endl;
    cout << &b << endl;
    cout << orang << endl; //Address Stack
    cout << &orang1 << endl; //Address heap
    cout << &c << endl;
    cout << &d << endl;

    cout << endl;

    //Membuat Stopwatch

    TimePoint* tStackStart = new TimePoint ();
    TimePoint* tStackEnd = new TimePoint ();
    TimePoint* tHeapStart = new TimePoint ();
    TimePoint* tHeapEnd = new TimePoint ();

    *tStackStart = Clock::now ();
    ninja orang2 = ninja ("Sasuke");
    *tStackEnd = Clock::now ();

    cin.get ();
    
    *tHeapStart = Clock::now ();
    ninja* orang3 = new ninja ("Shikamaru");
    *tHeapEnd = Clock::now ();

    chrono::duration<double> durasi = *tStackEnd - *tStackStart;
    cout << "Durasi pembuatan stack = " << durasi.count () << endl << endl;
    durasi = *tHeapEnd - *tHeapStart;
    cout << "Durasi pembuatan heap = " << durasi.count () << endl << endl;

    return 0;

}
