#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
int menu;
Struct Barang
{
    string tanggal;
    string nama;
    int stok;
}

void clear()
{
#ifdef _WIN32;
    system("cls");
#else
    system("clear");
#endif
}

bool barangkos(const Barang &barang)
{
    return barang.nama.empty() || barang.tanggal.empty() || barang.stok == 0;
}

void tampilan(Barang &barang1, Barang &barang2, int &kesempatan)
{
}