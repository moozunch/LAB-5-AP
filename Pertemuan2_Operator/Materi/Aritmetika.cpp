#include <iostream>
using namespace std;

int main(){
    system("cls");

    // Unary Minus
    int bil1 = 5;
    bil1 = -5;
    cout << bil1 << endl;

    // Penjumlahan
    int bil2 = 5;
    int bil3 = 10;
    int hasil = bil2 + bil3;
    cout << "Penjumlahan " << bil2 << " + " << bil3 << " = " << hasil << endl;

    // Pengurangan
    hasil = bil2 - bil3;
    cout << "Pengurangan " << bil2 << " - " << bil3 << " = " << hasil << endl;

    // Perkalian
    hasil = bil2 * bil3;
    cout << "Perkalian " << bil2 << " * " << bil3 << " = " << hasil << endl;

    // Pembagian
    hasil = bil2 / bil3;
    cout << "Pembagian " << bil2 << " / " << bil3 << " = " << hasil << endl;

    // Modulo
    hasil = bil2 % bil3;
    cout << "Modulo " << bil2 << " % " << bil3 << " = " << hasil << endl;

    // carcep
    int angka = 5;
    angka += 10;
    cout << angka;

    return 0;
}