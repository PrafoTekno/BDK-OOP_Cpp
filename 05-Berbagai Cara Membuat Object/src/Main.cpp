
#include <iostream>
#include <string>

using namespace std;

class DenganConstructor {

    public :
        
        string text;

        DenganConstructor (const char* text) {
            DenganConstructor::text = text;
        }

        void tampilD () {
            cout << "Ini dia text nya : " << DenganConstructor::text << endl;
        }

};

class TanpaConstructor {

    public :

        string text;

        void tampilT () {
            cout << "Ini dia text nya : " << TanpaConstructor::text << endl;
        }

};

int main () {

    TanpaConstructor data1;
    data1.text = "Terus berjuang";
    data1.tampilT ();

    DenganConstructor data2 = DenganConstructor ("Aku tidak akan pernah menyerah");
    data2.tampilD ();

    DenganConstructor data3 ("Semangat");
    data3.tampilD ();

    DenganConstructor* data4 = new DenganConstructor ("Pasti bisa");
    (*data4).tampilD (); 
    data4->tampilD ();

    DenganConstructor* data5;
    data5 = new DenganConstructor ("Ingat Janjimu");
    data5->tampilD ();

    cout << endl;

    return 0;

}