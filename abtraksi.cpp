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

