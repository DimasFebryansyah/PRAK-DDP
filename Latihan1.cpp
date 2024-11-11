#include <iostream>
#include <cmath>
#define phi 3.14

using namespace std;

int main()
{
    int r;
    int s;
    float Luas;
    cout << "Masukkan r: ";
    cin >> r;
    cout << "Masukkan s: ";
    cin >> s;

    Luas = phi * r * (r+s);
    cout << "Luas permukaan kerucut adalah:" << Luas;

}