#include <iostream>
using namespace std;

int main(){
    system ("cls");
    int angka;
    bool hasil;
    ulang:
    cout << "Masukkan sebuah bilangan: "; 
    cin >> angka;
    while (angka < 1){
        cout << "Error: inputan harus lebih dari 0" << endl;
        goto ulang;
    }
    for (int i = 2; i <= angka/2; ++i){
        if (angka % i == 0){
            hasil = false;  
        } else {
            hasil = true;
        }
    }
    if (hasil){
        cout << "Prima";
    } else {
        cout << "Bukan Prima";
    }
    return 0;
}