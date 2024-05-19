#include <iostream>
using namespace std;


int main(){
    system("cls");
    int angka[10], *ptrangka;
    for (int i = 0; i < 10; i++){
        angka[i] = ((i+1)*2) - 1;
    }
    ptrangka = angka;
    for (int i = 0; i < 10; i++){
        cout << "Angka ganjil "<< angka[i];
        cout << " Memiliki alamat: " << &ptrangka[i] << endl; //menggunakan reference untuk menampilkan alamat
    }

return 0;}