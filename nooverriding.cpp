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
   
    obyek = &a;
    obyek->pesan(); // Output: Pesan dari joko

    obyek = &b;
    obyek->pesan(); // Output: Pesan dari lia
    return 0;
}

#include<iostream>
using namespace std;

class Abstraksiklass{
    private:
    string  x,y;

    public:
// method untuk mengali nilai
//private member
void setxy(string a, string b) {
    x = a;
    y = b;
}
// mentaplikan nilai
void display() {
    cout << "Nilai x: " << x << endl;
    cout << "Nilai y: " << y << endl;
}
};      
int main() {
    Abstraksiklass ak;
    ak.setxy("yogyakarta", "kampus");
    //menamkilan nilai
    ak.display();

    return 0;
}

#include <iostream>
using namespace std;
class remoteampu
{
    private:
    string saklarno[10];
    public:
    // method untuk magisi saklar
    void setsaklarno(int i, string value)
    {
        saklarno[i] =value; 
    }
    string getsaklarno(int i)
    {
        return saklarno[i];
    }
};
int main()
{
    remoteampu lampurumah;
    // mengisi saklar
    lampurumah.setsaklarno(0, "lampu teras rumah");
    lampurumah.setsaklarno(1, "lampu ruang tamu");
    lampurumah.setsaklarno(2, "lampu kamar tidur");
    lampurumah.setsaklarno(3, "lampu dapur");
    
    // menampilkan saklar
    cout << "Isi saklar 1: " <<lampurumah.getsaklarno(0) << endl;
    cout << "Isi saklar 2: " << lampurumah.getsaklarno(1) << endl;
    cout << "Isi saklar 3: " << lampurumah.getsaklarno(2) << endl;

    return 0;
}
#include<iostream>
using namespace std;
class baseclass final

{
    public:
        virtual void perkenalan() {
            cout << "hallo saya adalah function dari base class" << endl
        }
};
class derivedClass : public baseclass
{
    public:
        void perkenalnan() override
         {
            cout << "hallo saya adalah function dari derived class" << endl;
        }
};

int main(){
    derivedClass a;
    a.perkenalan(); // Output: hallo saya adalah function dari derived class
    return 0;

}