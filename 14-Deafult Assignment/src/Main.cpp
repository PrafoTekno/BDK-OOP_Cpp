
#include <iostream>
#include <string>

using namespace std;

class Agent {

    private :

        string nama;
        int code;
        string unit;

    public :

        Agent (const char* nama = "Udin", int code = 3456, const char* unit = "Konoha") { //deafult argument

            Agent::nama = nama;
            Agent::code = code;
            Agent::unit = unit;

        }

        void display () {

            cout << "Nama Agent : " << this->nama << endl;
            cout << "Code Agent : " << this->code << endl;
            cout << "Unit Agent : " << this->unit << endl;

            cout << endl;
        
        }

};

int main () {

    cout << "Deafult Assignment\n" << endl;

    Agent orang1 = Agent ("Jojon", 4655, "Gading");
    orang1.display ();

    Agent* orang2 = new Agent ("Toni");
    orang2->display ();

    Agent orang3 = Agent ();
    orang3.display ();

    return 0;

}