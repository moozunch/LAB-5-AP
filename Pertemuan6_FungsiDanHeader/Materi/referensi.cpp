#include <iostream>
using namespace std;

//halaman 41 modul, tanpa and hanya membuat copy, tapi pakai and kita panggil benar benar variabel asli di program utaama


int sum(int num1, int& num2){
    num1 = 15; //ini hanya akan mengubah variabel lokal, tidak akan mengubah variabel di program utama
    num2 = 25; //si num2 ini bakal langsung ngubah ke dalam pointer alamat yang variabel itu jadi di porgram utama langsung berubah
    return num1 + num2;
}

int main() {
    system("cls");

    int num1 = 10, num2 = 20;
    cout << "Hasil: " << sum(num1, num2) << endl;

    cout << "Num1: " << num1 << endl; //tidak berubah
    cout << "Num2: " << num2 << endl; //ikut berubah kan, karena langsung ke alamtnya

    return 0;
}