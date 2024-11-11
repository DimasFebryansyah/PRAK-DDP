#include <iostream>
#include <string>

using namespace std;

int main()
{
    string username, password;
    string usernamebenar = "s";
    string passwordbenar = "1";

    cout << "Silahkan Login" << endl;
    cout << "Username: ";
    cin >> username;
    cout << "Password: ";
    cin >> password;

    if (username == usernamebenar && password == passwordbenar)
    {
        cout << "Login Berhasil!" << endl;
    }
    else
    {
        cout << "Login Gagal!" << endl;
        cout << "Keluar dari program..." << endl;
        return 0;
    }

    string namaBarang1, namaBarang2;
    string tanggalBarang1, tanggalBarang2;
    int stokBarang1, stokBarang2;
    int pilihanMenu;

    // Menu Awal
    cout << "Menu Utama" << endl;
    cout << "===========================" << endl;
    cout << "1. Input Barang dan Stok" << endl;
    cout << "2. Pengecekan Barang" << endl;
    cout << "3. Keluar" << endl;
    cout << "===========================" << endl;
    cout << "Pilihan: ";
    cin >> pilihanMenu;
    cin.ignore();

    if (pilihanMenu == 1)
    {
        cout << "Input Barang Pertama" << endl;
        cout << "Nama Barang: ";
        getline(cin, namaBarang1);
        cout << "Tanggal Masuk (hh/bb): ";
        getline(cin, tanggalBarang1);
        cout << "Stok: ";
        cin >> stokBarang1;
        cin.ignore();

        cout << "Input Barang Kedua" << endl;
        cout << "Nama Barang: ";
        getline(cin, namaBarang2);
        cout << "Tanggal Masuk (hh/bb): ";
        getline(cin, tanggalBarang2);
        cout << "Stok: ";
        cin >> stokBarang2;
        cin.ignore();

        cout << "Data Berhasil Disimpan!" << endl;
    }
    else if (pilihanMenu == 2)
    {
        cout << "Data Belum Diinput!" << endl;
    }
    else if (pilihanMenu == 3)
    {
        cout << "Keluar dari program..." << endl;
        return 0;
    }
    else
    {
        cout << "Pilihan Tidak Valid!" << endl;
    }

    // Kesempatan 1
    cout << "Menu Utama" << endl;
    cout << "===========================" << endl;
    cout << "1. Input Barang dan Stok" << endl;
    cout << "2. Pengecekan Barang" << endl;
    cout << "3. Keluar" << endl;
    cout << "===========================" << endl;
    cout << "Pilihan: ";
    cin >> pilihanMenu;
    cin.ignore();

    if (pilihanMenu == 1)
    {
        cout << "Barang Telah Diinput Sebelumnya!" << endl;
    }
    else if (pilihanMenu == 2)
    {
        cout << "Barang 1: " << namaBarang1 << ", Tanggal Masuk: " << tanggalBarang1 << ", Stok: " << stokBarang1 << endl;
        cout << "Barang 2: " << namaBarang2 << ", Tanggal Masuk: " << tanggalBarang2 << ", Stok: " << stokBarang2 << endl;
        cout << endl;
    }
    else if (pilihanMenu == 3)
    {
        cout << "Keluar dari program..." << endl;
        return 0;
    }
    else
    {
        cout << "Pilihan Tidak Valid!" << endl;
    }

    // Kesempatan 2
    cout << "Menu Utama" << endl;
    cout << "===========================" << endl;
    cout << "1. Input Barang dan Stok" << endl;
    cout << "2. Pengecekan Barang" << endl;
    cout << "3. Keluar" << endl;
    cout << "===========================" << endl;
    cout << "Pilihan: ";
    cin >> pilihanMenu;
    cin.ignore();

    if (pilihanMenu == 1)
    {
        cout << "Barang Telah Diinput Sebelumnya!" << endl;
    }
    else if (pilihanMenu == 2)
    {
        cout << "Barang 1: " << namaBarang1 << ", Tanggal Masuk: " << tanggalBarang1 << ", Stok: " << stokBarang1 << endl;
        cout << "Barang 2: " << namaBarang2 << ", Tanggal Masuk: " << tanggalBarang2 << ", Stok: " << stokBarang2 << endl;
        cout << endl;
    }
    else if (pilihanMenu == 3)
    {
        cout << "Keluar dari program..." << endl;
        return 0;
    }
    else
    {
        cout << "Pilihan Tidak Valid!" << endl;
    }

    // Kesempatan 3
    cout << "Menu Utama" << endl;
    cout << "===========================" << endl;
    cout << "1. Input Barang dan Stok" << endl;
    cout << "2. Pengecekan Barang" << endl;
    cout << "3. Keluar" << endl;
    cout << "===========================" << endl;
    cout << "Pilihan: ";
    cin >> pilihanMenu;
    cin.ignore();

    if (pilihanMenu == 1)
    {
        cout << "Barang Telah Diinput Sebelumnya!" << endl;
    }
    else if (pilihanMenu == 2)
    {
        cout << "Barang 1: " << namaBarang1 << ", Tanggal Masuk: " << tanggalBarang1 << ", Stok: " << stokBarang1 << endl;
        cout << "Barang 2: " << namaBarang2 << ", Tanggal Masuk: " << tanggalBarang2 << ", Stok: " << stokBarang2 << endl;
        cout << endl;
    }
    else if (pilihanMenu == 3)
    {
        cout << "Keluar dari program..." << endl;
        return 0;
    }
    else
    {
        cout << "Pilihan Tidak Valid!" << endl;
    }

    // Setelah kesempatan 3, program keluar otomatis
    cout << "Kesempatan habis. Program keluar...\n";
    return 0;
}
