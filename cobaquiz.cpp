#include <iostream>
#include <string>

using namespace std;

int menu;
struct Barang
{
    string nama;
    int stok;
    int tanggal;
    int bulan;
}; // untuk variabel yang akan di gunakan

int main()
{
    // Login
    string username, inputUsername;
    int password, inputPassword;

    cout << "Masukkan username: ";
    cin >> inputUsername;
    cout << "Masukkan password: ";
    cin >> inputPassword;

    username = "dimas";   // Username Nama Panggilan
    password = 124240145; // Password yang digunakan

    if (inputUsername == username && inputPassword == password)
    {
        cout << "Login berhasil!" << endl;
    }
    else
    {
        cout << "Login gagal!" << endl;
        return 0; // Mengakhiri program jika login gagal
    }

    Barang barang1, barang2; // Deklarasi variabel barang di luar switch-case

    cout << "Menu Minimarket" << endl;
    cout << "1. Input Barang dan Stok\n";
    cout << "2. Pengecekan Barang dan Stok\n";
    cout << "3. Pencarian Barang Masuk\n";
    cout << "Pilihan Menu: ";
    cin >> menu;

    switch (menu)
    {
    case 1: // menu input barang dan stok
        cin.ignore();
        cout << "Masukkan nama barang pertama: ";
        getline(cin, barang1.nama);
        cout << "Masukkan stok barang pertama: ";
        cin >> barang1.stok;
        cout << "Masukkan tanggal barang pertama (hh): ";
        cin >> barang1.tanggal;
        cout << "Masukkan bulan barang pertama (bb): ";
        cin >> barang1.bulan;

        cin.ignore();
        cout << "Masukkan nama barang kedua: ";
        getline(cin, barang2.nama);
        cout << "Masukkan stok barang kedua: ";
        cin >> barang2.stok;
        cout << "Masukkan tanggal barang kedua (hh): ";
        cin >> barang2.tanggal;
        cout << "Masukkan bulan barang kedua (bb): ";
        cin >> barang2.bulan;

    case 2: // menu Pengecekan Barang dan Stok
        cout << "\nData Barang yang Dimasukkan:" << endl;
        cout << "Barang 1: " << barang1.nama << ", Stok: " << barang1.stok << ", Tanggal: " << barang1.tanggal << "/" << barang1.bulan << endl;
        cout << "Barang 2: " << barang2.nama << ", Stok: " << barang2.stok << ", Tanggal: " << barang2.tanggal << "/" << barang2.bulan << endl;

    case 3: // Menu Pencarian Barang
        string cariNama;
        cout << "\nMasukkan nama barang yang ingin dicari: ";
        cin >> cariNama;

        if (cariNama == barang1.nama)
        {
            cout << "Barang ditemukan: " << barang1.nama << ", Stok: " << barang1.stok << ", Tanggal: " << barang1.tanggal << "/" << barang1.bulan << endl;
        }
        else if (cariNama == barang2.nama)
        {
            cout << "Barang ditemukan: " << barang2.nama << ", Stok: " << barang2.stok << ", Tanggal: " << barang2.tanggal << "/" << barang2.bulan << endl;
        }
        else
        {
            cout << "Barang tidak ditemukan." << endl;
        }
        break;
    }

    return 0; // Mengakhiri program dengan benar
}
