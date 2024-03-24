#include <iostream>
using namespace std;
#define pajak 0.05

int main() {
    system("cls");
    cout << "Program gaji \n";
    cout << "Masukkan nama anda: ";
    string nama;
    getline (cin, nama);
    int golongan;
    cout << "Masukkan Golongan anda (1, 2, 3): ";
    cin >> golongan;
    int gaji;
    switch (golongan) {
        //Pajak yang dikenakan 5% dari gaji pokok
        case 1 : 
            gaji = 5000000 - (5000000 * pajak) ;
            break;
        case 2 : 
            gaji = 3000000 - (3000000 * pajak);
            break;
        case 3 : 
            gaji = 2500000 - (2500000 * pajak);
            break;
    }
    //Hitungan tambahan -per anak
    int anak;
    cout << "Jumlah anak: ";
    cin >> anak;
    switch (anak) {
        case 0 :
            gaji = gaji;
            break;
        case 1 ... 2: 
            gaji = gaji + (500000 * anak);
            break;
        default:
            gaji = gaji + (750000 * anak);
            break;
    }

    cout << "Gaji Total: " << gaji<< endl;

    return 0;
}