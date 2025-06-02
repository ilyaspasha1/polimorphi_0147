#include <iostream>
using namespace std;

class sesorang {
public:
// virtual void pesan()=0;
virtual void pesan() {
    cout << "Pesan dari kelas sesorang" << endl;
}
};

class joko : public sesorang {
public:
void pesan(){
    cout << "Pesan dari joko" << endl;

}
};

class lia : public sesorang {
public:
void pesan()  {
    cout << "Pesan dari kelas lia" << endl;
}
};
