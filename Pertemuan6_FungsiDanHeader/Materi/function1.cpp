#include <iostream>
using namespace std;

int varglobal = 10; //variabel global, bisa dipakai semua function, urutan matter


//menggunakan tipe data untuk return
int sum(int num1, int num2 = 10){ //default parameter, just in case parameter yang dimasukkan kurang bisa pakai itu
    return num1 + num2 + varglobal;
}

int min(int num1, int num2 = 10)

int main() {
    system("cls");
    int varlokal = 5; //variabel lokal, hanya bisa dipakai di function ini
    int hasil = sum(varlokal); //argument itu parameter aktual
    cout << hasil << endl;
    int hasil2 = min(varlokal);
    cout << hasil2 << endl;
    return 0; //kan program hanya akan membaca data sampai return 0, makanya function yang dibawah nggak bisa dibaca, kecuali udah di declared
}

//built in function - main
//user defined function - sum


int min(int num1, int num2 = 10){ //default parameter, just in case parameter yang dimasukkan kurang bisa pakai itu
    return num1 + num2 + varglobal;
}