#include <iostream>
using namespace std;

int main() {
    system("cls");
    int tinggi;
    cout << "Masukkan tinggi piramida: ";
    cin >> tinggi;
    for (int i = 0; i < tinggi; i++) { //buat tinggi
        for (int j = tinggi; j > i+1; j--) {
            cout << " ";
        }
        for (int x = 0; x <= i ; x++) {
            cout << "* ";
        }
        cout << endl;
    }
    
    // nnti uts logika ini bakal dipakai juga
    //pakai goto dan while untuk cek range soal quiz nomor 3, 5 jugak ada intervalnya
    return 0;
}