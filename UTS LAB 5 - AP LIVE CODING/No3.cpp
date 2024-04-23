#include <iostream>
using namespace std;

int main() {
    system("cls");
    int angka;
    ulang:
    cout << "Masukkan sebuah bilangan bulat: ";
    cin >> angka;
    while (angka <= 0){
        cout << "Error: Bukan merupakan bilangan prima, silahkan masukkan ulang \n";
        goto ulang;
    }
    bool prima;

    for (int i  = 1; i <= angka/2; i++){
        if (angka == 2){
            prima = true; //exception

        } else if (angka % i == 0){
            prima = false;
        } else {
            prima = true;
        }
    }

    if (prima){
        cout << angka << " adalah bilangan prima";
    } else {
        cout << angka << " adalah bukan bilangan prima";
    }
    
    
    
    return 0;
}