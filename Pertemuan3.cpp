#include <iostream>
#include <string>

using namespace std;
int main () {
    int menu;
    string kuah;
    string sate = "Sate Padang";
    cout << "Rumah makan Robi" << endl ;
    cout << "Menu makanan" << endl ;
    cout << "1. Paru" << endl;
    cout << "2. Ikan Bakar saus padang" << endl;
    cout << "3. Sate Padang" << endl;
    cout << "Pilih Menu makanan Anda: ";
    cin >> menu;

    switch (menu)
    {
    case 1 /* constant-expression */:
        cout << "Paru";
        break;
    case 2 /* constant-expression */:
        cout << "Ikan Bakar saus padang";
        break;
    case 3 /* constant-expression */:
        cout << "Sate Padang" << endl;
        cout << "Mau Kuah ga ? ";
        cin >> kuah;
        if (kuah == "ya" || "boleh" || "tentu saja"){
            cout << sate << " Dengan Kuah";
        }
            else if (kuah == "tidak" || "ga" || "emoh" || "gah"){
                cout << sate << " tanpa kuah";
            }else{
                cout << "GaJelas";
            
            }
        break; 

    default:
        cout << "Menu Tidak Tersedia";
        break;
    }

    return 0;

}