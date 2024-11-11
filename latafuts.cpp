#include <iostream>
#include <string>
using namespace std;
int main()
{
    cout << "Selamat Datang di Permainan Tebak Angka" << endl;
    cout << "Tebak angka dari (1-10)" << endl;
    int angka_tebak;
    int angka_benar = 7;

    do
    {
        cout << "Masukkan angka: ";
        cin >> angka_tebak;
        if (angka_tebak > angka_benar)
        {
            cout << "Angka Terlalu Besar" << endl;
        }
        else if (angka_tebak < angka_benar)
        {
            cout << "Angka Terlalu Kecil" << endl;
        }
        else
        {
            cout << "Selamat kamu benar, angkanya adalah " << angka_benar << endl;
            break;
        }

    } while (angka_tebak = angka_benar);
}