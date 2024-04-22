#include <iostream>
using namespace std;

int main() {
    system("cls");
    // diperiksa kondisi, harus boolean true / false
    
    int x = 3;
    while (x > 0) {
        cout << "Hello world" << x << endl;
        x--;
    }

    // baik digunakan untuk mengecek inputan, uts dan tugas tugas lainnya abang ini expect kita selalu pakai ini untuk pengecekan agar selalu dalam range

    int angka;
    cout << "Masukkan angka:";
    cin >> angka;
    while (angka < 1 || angka > 10) {
        cout << "Angka yang anda masukkan tidak valid\n"
        cout << "Masukkan angka:";
        cin >> angka;
    }
    return 0;
}