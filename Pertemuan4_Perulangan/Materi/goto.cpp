#include <iostream>
using namespace std;

int main() {
    system("Cls");

    int angka;

    ulang:
    cout << "Masukkan angka:";
    cin >> angka;

    if (angka < 1 || angka > 10){goto ulang;}
    // tidak disarankan goto
    return 0;
}