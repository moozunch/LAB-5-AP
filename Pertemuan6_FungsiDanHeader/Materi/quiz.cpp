#include <iostream>
using namespace std;

int pangkat(int angka, int power = 2){
    int hasil = 1;
    for (int i = 0; i < power; i++){
        hasil *= angka;
    }
    return hasil;

}

int main() {
    system("cls");

    cout << pangkat(3, 5) << endl;

    return 0;
}