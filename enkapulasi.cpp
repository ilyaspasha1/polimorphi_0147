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