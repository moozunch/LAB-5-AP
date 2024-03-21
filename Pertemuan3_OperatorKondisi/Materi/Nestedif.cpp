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
        if (umur > 0 && umur < 5) {
            cout << "Kamu masih balita" << endl;
        } else if (umur > 5 && umur < 18) {
            cout << "Kamu masih remaja" << endl;
        } else if (umur > 18 && umur < 50 ) {
            cout << "Kamu sudah dewasa" << endl;
        } else if (umur > 50 && umur < 70 ) {
            cout << "Kamu sudah lansia" << endl;
        } else {
            cout << "Panjang Umur orang panjang!" << endl;
        }
    }
    
    
    return 0;
}