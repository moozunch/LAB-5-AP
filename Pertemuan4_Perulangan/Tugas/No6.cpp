#include <iostream>
using namespace std;

int main(){
    system("cls");
    int angka;
    cout << "Masukkan sebuah angka untuk dijumlahkan semua kuadrat dari angka genap tersebut: ";
    cin >> angka;

    int sum = 0;
    if (angka >= 1){
        for (int i = 2; i <= angka; i+=2){
            sum += i*i;
        }
    } else if (angka < 1){
        for (int i = -2; i >= angka; i-=2){
            sum += i*i;
        }
    } else {
        cout << "Error: O bukan genap dan tidak dapat dijumlahkan" << endl;
    }
    
    cout << sum << endl;

    return 0;
}