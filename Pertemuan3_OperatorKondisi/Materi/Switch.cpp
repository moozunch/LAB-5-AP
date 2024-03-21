#include <iostream>
using namespace std;

int main() {
    system("cls");
    int umur;
    cout << "Masukkan umur kamu: ";
    cin >> umur;
    if (umur < 0 ) {
        cout << "Kamu bukan Manusia" << endl;
    } else {
        switch (umur) {
            case 0 ... 4:
                cout << "Kamu masih balita" << endl;
                break;
            case 5 ... 17:
                cout << "Kamu masih remaja" << endl;
                break;
            case 18 ... 49:
                cout << "Kamu sudah dewasa" << endl;
                break;
            case 50 ... 69:
                cout << "Kamu sudah lansia" << endl;
                break;
            default:
                cout << "Panjang Umur orang panjang!" << endl;
                break;
        }
    }
    
    
    return 0;
}