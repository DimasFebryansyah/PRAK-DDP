#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Login dengan nama dan NIM
    string username, password;
    string correctUsername = "dimas";
    string correctPassword = "124240145"; // Contoh NIM

    cout << "==== LOGIN ====" << endl;
    cout << "Masukkan username: ";
    getline(cin, username);
    cout << "Masukkan password (NIM): ";
    getline(cin, password);

    // Pengecekan login
    if (username == correctUsername && password == correctPassword)
    {
        cout << "Login berhasil!\n\n";
    }
    else
    {
        cout << "Username atau password salah! Program keluar...\n";
        return 0; // Keluar dari program jika login gagal
    }

    // Menu setelah login
    string namaBarang1, namaBarang2;
    string tanggalBarang1, tanggalBarang2;
    int stokBarang1, stokBarang2;
    int pilihanMenu;

    // Kesempatan pertama
    cout << "==== MENU UTAMA ====" << endl;
    cout << "1. Input barang dan stok" << endl;
    cout << "2. Pengecekan barang dan stok" << endl;
    cout << "3. Keluar" << endl;
    cout << "Pilih menu: ";
    cin >> pilihanMenu;
    cin.ignore(); // Mengabaikan newline

    if (pilihanMenu == 1)
    {
        // Input barang dan stok
        cout << "=== Input Barang 1 ===" << endl;
        cout << "Masukkan tanggal barang masuk (hh/bb): ";
        getline(cin, tanggalBarang1);
        cout << "Masukkan nama barang: ";
        getline(cin, namaBarang1);
        cout << "Masukkan stok barang: ";
        cin >> stokBarang1;
        cin.ignore(); // Mengabaikan newline

        cout << "=== Input Barang 2 ===" << endl;
        cout << "Masukkan tanggal barang masuk (hh/bb): ";
        getline(cin, tanggalBarang2);
        cout << "Masukkan nama barang: ";
        getline(cin, namaBarang2);
        cout << "Masukkan stok barang: ";
        cin >> stokBarang2;
        cin.ignore();

        cout << "\nData barang berhasil disimpan!\n\n";
    }
    else if (pilihanMenu == 2)
    {
        cout << "Data barang belum diinput!\n\n";
    }
    else if (pilihanMenu == 3)
    {
        cout << "Keluar dari program...\n";
        return 0;
    }
    else
    {
        cout << "Pilihan tidak valid!\n\n";
    }

    // Kesempatan kedua
    cout << "==== MENU UTAMA ====" << endl;
    cout << "1. Input barang dan stok" << endl;
    cout << "2. Pengecekan barang dan stok" << endl;
    cout << "3. Keluar" << endl;
    cout << "Pilih menu: ";
    cin >> pilihanMenu;
    cin.ignore(); // Mengabaikan newline

    if (pilihanMenu == 1)
    {
        cout << "Barang sudah diinput sebelumnya!\n\n";
    }
    else if (pilihanMenu == 2)
    {
        // Pengecekan barang dan stok
        cout << "=== Data Barang Masuk ===" << endl;
        cout << "Barang 1: " << namaBarang1 << ", Tanggal Masuk: " << tanggalBarang1 << ", Stok: " << stokBarang1 << endl;
        cout << "Barang 2: " << namaBarang2 << ", Tanggal Masuk: " << tanggalBarang2 << ", Stok: " << stokBarang2 << endl;
        cout << endl;
    }
    else if (pilihanMenu == 3)
    {
        cout << "Keluar dari program...\n";
        return 0;
    }
    else
    {
        cout << "Pilihan tidak valid!\n\n";
    }

    // Kesempatan ketiga
    cout << "==== MENU UTAMA ====" << endl;
    cout << "1. Input barang dan stok" << endl;
    cout << "2. Pengecekan barang dan stok" << endl;
    cout << "3. Keluar" << endl;
    cout << "Pilih menu: ";
    cin >> pilihanMenu;
    cin.ignore(); // Mengabaikan newline

    if (pilihanMenu == 1)
    {
        cout << "Barang sudah diinput sebelumnya!\n\n";
    }
    else if (pilihanMenu == 2)
    {
        // Pengecekan barang dan stok
        cout << "=== Data Barang Masuk ===" << endl;
        cout << "Barang 1: " << namaBarang1 << ", Tanggal Masuk: " << tanggalBarang1 << ", Stok: " << stokBarang1 << endl;
        cout << "Barang 2: " << namaBarang2 << ", Tanggal Masuk: " << tanggalBarang2 << ", Stok: " << stokBarang2 << endl;
        cout << endl;
    }
    else if (pilihanMenu == 3)
    {
        cout << "Keluar dari program...\n";
        return 0;
    }
    else
    {
        cout << "Pilihan tidak valid!\n\n";
    }

    // Setelah tiga kesempatan, program keluar otomatisuas

    cout << "Kesempatan habis. Program keluar...\n";
    return 0;
}