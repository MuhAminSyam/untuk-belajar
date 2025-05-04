#include <iostream>
using namespace std;

class mobil
{

public:
    string nama_mobil;
    string tipe_mobil;

private:
    int harga_mobil;

public:
    void inputData()
    {
        cout << "masukkan nama mobil:";
        cin >> nama_mobil;
        cout << "masukkan tipe mobil:";
        cin >> tipe_mobil;
        cout << "masukkan harga mobil:";
        cin >> harga_mobil;
    }
    void output_data()
    {
        cout << " harga mobil =" << harga_mobil << endl;
    }
};

int main()
{
    mobil nazar;
    nazar.inputData();
    cout << "nama mobil = " << nazar.nama_mobil << endl;
    cout << "tipe mobil = " << nazar.tipe_mobil << endl;
    nazar.output_data();
}