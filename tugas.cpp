#include <iostream>
#include <string>

using namespace std;
int main()
{
    int menu;
    int angka1;
    int angka2;
    int hasil;
    string operasi;
    cout << "Kalkulator" << endl;
    cout << "Menu Operasi" << endl;
    cout << "1. Tambah" << endl;
    cout << "2. Kali" << endl;
    cout << "3. Ganjil atau Genap" << endl;
    cout << "4. Pangkat 2" << endl;
    cout << "Pilih Menu: ";
    cin >> menu;

    switch (menu)
    {
    case 1:
        cout << "Masukkan angka 1:";
        cin >> angka1;
        cout << "Masukkan angka 2:";
        cin >> angka2;
        hasil = angka1 + angka2;
        cout << "" << hasil;
        break;
    case 2 /* constant-expression */:
        cout << "Masukkan angka 1:";
        cin >> angka1;
        cout << "Masukkan angka 2:";
        cin >> angka2;
        hasil = angka1 * angka2;
        cout << "" << hasil;
        break;
    case 3 /* constant-expression */:
        cout << "Masukkan angka: ";
        cin >> angka1;
        if (menu == 3)
        {
            if (angka1 % 2 == 1)
            {
                cout << "Angka tersebut ganjil";
            }
            else if (angka1 % 2 == 0)
            {
                cout << "Angka tersebut genap";
            }
        }
        break;
    case 4 /* constant-expression */:
        cout << "Masukkan angka 1:";
        cin >> angka1;
        cout << "Masukkan angka 2:";
        cin >> angka2;
        cout << "" << angka1 * angka1 << endl;
        cout << "" << angka2 * angka2;
        break;

    default:
        cout << "Menu Tidak Tersedia";
        break;
    }

    return 0;
}