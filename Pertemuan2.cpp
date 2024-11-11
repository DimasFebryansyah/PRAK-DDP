#include <iostream>
#include <string>
#include <sstream>

using namespace std;

struct Barang
{
    string nama;
    int stok;
    int tanggal;
    int bulan;
};

void tampilkanMenu()
{
    cout << "Selamat Datang, dimas" << endl;
    cout << "Silahkan Pilih Menu:" << endl;
    cout << "1. Input Barang & Stok" << endl;
    cout << "2. Check Barang & Stok" << endl;
    cout << "3. Pencarian Barang Masuk" << endl;
    cout << "Pilih: ";
}

void inputBarang(Barang &barang)
{
    string input;
    cout << "Input Barang & Stok" << endl;
    cout << "Daftar Barang Masuk 1:" << endl;
    cout << "1. Tanggal Barang Masuk(hh/bb): ";
    cin >> input;
    stringstream ss(input);
    string temp;
    getline(ss, temp, '/');
    barang.tanggal = stoi(temp);
    getline(ss, temp, '/');
    barang.bulan = stoi(temp);
    cout << "2. Nama Barang: ";
    cin >> barang.nama;
    cout << "3. Stok Barang Masuk: ";
    cin >> barang.stok;
}

void checkBarang(const Barang &barang1, const Barang &barang2)
{
    cout << "\nData Barang yang Dimasukkan:" << endl;
    cout << "Barang 1: " << barang1.nama << ", Stok: " << barang1.stok << ", Tanggal: " << barang1.tanggal << "/" << barang1.bulan << endl;
    cout << "Barang 2: " << barang2.nama << ", Stok: " << barang2.stok << ", Tanggal: " << barang2.tanggal << "/" << barang2.bulan << endl;
}

void cariBarang(const Barang &barang1, const Barang &barang2)
{
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
}

int main()
{
    Barang barang1, barang2;
    int kesempatan = 3;
    int pilihan;

    while (kesempatan > 0)
    {
        tampilkanMenu();
        cin >> pilihan;

        switch (pilihan)
        {
        case 1:
            inputBarang(barang1);
            inputBarang(barang2);
            break;
        case 2:
            checkBarang(barang1, barang2);
            break;
        case 3:
            cariBarang(barang1, barang2);
            break;
        default:
            cout << "Pilihan tidak valid." << endl;
            break;
        }

        kesempatan--;
        if (kesempatan > 0)
        {
            cout << "Anda masih memiliki " << kesempatan << " kesempatan lagi untuk kembali ke menu!" << endl;
            cout << "Apakah Anda ingin kembali ke menu? (y/n): ";
            char kembali;
            cin >> kembali;
            if (kembali == 'n' || kembali == 'N')
            {
                break;
            }
        }
        else
        {
            cout << "Kesempatan Anda telah habis." << endl;
        }
    }

    return 0;
}
