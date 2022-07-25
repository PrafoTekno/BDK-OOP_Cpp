
#include <iostream>
#include <string>

using namespace std;

class Pemain {

    public :
        
        string nama;

        //constructor
        Pemain (const char* nama) {
            Pemain::nama = nama;
            cout << "Pemain " << Pemain::nama << " dibuat" << endl;
        }

        //destructor
        ~Pemain () {
            cout << "Pemain " << Pemain::nama << " dihapus" << endl << endl;
        }

};

void MembuatStack () {
    Pemain stack = Pemain ("Stack");
}

void MembuatHeap () {
    Pemain* heap = new Pemain ("Heap");
    delete heap;
}

void MembuatStackPointer (Pemain* &pointer) {
    Pemain stack = Pemain ("Stack");
    pointer = &stack; 
}

int main () {

    cout << "Destructor dan Object Lifetime\n" << endl;

    MembuatStack ();
    MembuatHeap ();

    cout << "Memory Leak\n" << endl;

    Pemain* pemain_pointer;
    MembuatStackPointer (pemain_pointer);

    cout << pemain_pointer << endl;

    cout << endl;

    return 0;

}