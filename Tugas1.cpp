#include <iostream>
#include <string>

using namespace std;

int main()
{
   string username, password;
   string usernamebenar = "dimas";
   string passwordbenar = "12345";

   cout << "Silahkan Login Terlebih Dahulu" << endl;
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
      cout << "Username atau Password Salah!" << endl;
      return 0;
   }

   string namabarang1, namabarang2;
   string tglbarang1, tglbarang2;
   int stockbarang1, stockbarang2;
   int pilihmenu;

   cout << "\n===== Menu Utama =====" << endl;
   cout << "1. Input Data Barang" << endl;
   cout << "2. Cek Data Barang" << endl;
   cout << "3. Keluar" << endl;
   cout << "======================" << endl;
   cout << "Silahkan Pilih Menu: " << endl;
   cin >> pilihmenu;

   if (pilihmenu == 1)
   {
      cout << "\nSilahkan Input Data Barang" << endl;
      cout << "Nama Barang 1: ";
      cin >> namabarang1;
      cout << "Tanggal Barang 1 (hh/bv): ";
      cin >> tglbarang1;
      cout << "Stock Barang 1: ";
      cin >> stockbarang1;
      cout << "Nama Barang 2: ";
      cin >> namabarang2;
      cout << "Tanggal Barang 2 (hh/bb): ";
      cin >> tglbarang2;
      cout << "Stock Barang 2: ";
      cin >> stockbarang2;
      cout << "\nData Barang Telah Ditambahkan" << endl;
   }
   else if (pilihmenu == 2)
   {
      cout << "Data Belum Diinput!";
   }
   else if (pilihmenu == 3)
   {
      cout << "Keluar Dari Program...";
      return 0;
   }
   else
   {
      cout << "Menu Tidak Valid!" << endl;
   }

   // Kesempatan 1
   cout << "\n===== Menu Utama =====" << endl;
   cout << "1. Input Data Barang" << endl;
   cout << "2. Cek Data Barang" << endl;
   cout << "3. Keluar" << endl;
   cout << "======================" << endl;
   cout << "Silahkan Pilih Menu: " << endl;
   cin >> pilihmenu;

   if (pilihmenu == 1)
   {
      cout << "\nData Telah Diinput Sebelummnya!" << endl;
   }
   else if (pilihmenu == 2)
   {
      cout << "Nama Barang 1 : " << namabarang1 << ", Tanggal Barang 1 : " << tglbarang1 << ", Stock Barang 1 : " << stockbarang1 << endl;
      cout << "Nama Barang 2 : " << namabarang2 << ", Tanggal Barang 2 : " << tglbarang2 << ", Stock Barang 2 : " << stockbarang2 << endl;
   }
   else if (pilihmenu == 3)
   {
      cout << "Keluar Dari Program..." << endl;
      return 0;
   }
   else
   {
      cout << "Menu Tidak Valid!" << endl;
   }

   // Kesempatan 2
   cout << "\n===== Menu Utama =====" << endl;
   cout << "1. Input Data Barang" << endl;
   cout << "2. Cek Data Barang" << endl;
   cout << "3. Keluar" << endl;
   cout << "======================" << endl;
   cout << "Silahkan Pilih Menu: " << endl;
   cin >> pilihmenu;

   if (pilihmenu == 1)
   {
      cout << "\nData Telah Diinput Sebelummnya!" << endl;
   }
   else if (pilihmenu == 2)
   {
      cout << "Nama Barang 1 : " << namabarang1 << ", Tanggal Barang 1 : " << tglbarang1 << ", Stock Barang 1 : " << stockbarang1 << endl;
      cout << "Nama Barang 2 : " << namabarang2 << ", Tanggal Barang 2 : " << tglbarang2 << ", Stock Barang 2 : " << stockbarang2 << endl;
   }
   else if (pilihmenu == 3)
   {
      cout << "Keluar Dari Program..." << endl;
      return 0;
   }
   else
   {
      cout << "Menu Tidak Valid!" << endl;
   }

   // Kesempatan 3
   cout << "\n===== Menu Utama =====" << endl;
   cout << "1. Input Data Barang" << endl;
   cout << "2. Cek Data Barang" << endl;
   cout << "3. Keluar" << endl;
   cout << "======================" << endl;
   cout << "Silahkan Pilih Menu: " << endl;
   cin >> pilihmenu;

   if (pilihmenu == 1)
   {
      cout << "\nData Telah Diinput Sebelummnya!" << endl;
   }
   else if (pilihmenu == 2)
   {
      cout << "Nama Barang 1 : " << namabarang1 << ", Tanggal Barang 1 : " << tglbarang1 << ", Stock Barang 1 : " << stockbarang1 << endl;
      cout << "Nama Barang 2 : " << namabarang2 << ", Tanggal Barang 2 : " << tglbarang2 << ", Stock Barang 2 : " << stockbarang2 << endl;
   }
   else if (pilihmenu == 3)
   {
      cout << "Keluar Dari Program..." << endl;
      return 0;
   }
   else
   {
      cout << "Menu Tidak Valid!" << endl;
   }

   cout << "\nKesempatan Anda Telah Habis..." << endl;
   cout << "Keluar Dari Program..." << endl;
   return 0;
}
