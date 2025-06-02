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
void pesan() override {
    cout << "Pesan dari joko" << endl;

}
};

class lia : public sesorang {
public:
void pesan() override {
    cout << "Pesan dari kelas lia" << endl;
}
};

int main(){
    sesorang *obyek;
    joko a;
    lia b;
   

