#include <iostream>
using namespace std;

int main() {
    system("cls");
    int angka;
    ulang: 
    cout << "Masukkan angka: ";
    cin >> angka;
    while (angka == 0){
        cout << "0 bukanlah ganjil genap, dan tidak dapat dibagi dengan 3, 5, maupun 7\n Silahkan masukkan ulang angka";
        goto ulang;
    }

    if (angka % 2 == 0){
        cout << "Angka " << angka << " adalah bilangan genap\n";
    } else {
        cout << "Angka " << angka << " adalah bilangan ganjil\n";
    }
    //habis dibagi 3
    if (angka % 3 == 0){
        cout << "Angka " << angka << " habis dibagi 3\n";
    } else {
        cout << "Angka " << angka << " tidak habis dibagi 3\n";
    }
    //habis dibagi 5
    if (angka % 5 == 0){
        cout << "Angka " << angka << " habis dibagi 5\n";
    } else {
        cout << "Angka " << angka << " tidak habis dibagi 5\n";
    }
    //habis dibagi 3
    if (angka % 7 == 0){
        cout << "Angka " << angka << " habis dibagi 7\n";
    } else {
        cout << "Angka " << angka << " tidak habis dibagi 7\n";
    }

    
    return 0;
}