#include <iostream>
using namespace std;

int main(){
    system("cls");
    ulang:
    cout << "Masukkan batas angka: ";
    int step, temp = 1;
    cin >> step;
    while (step < 1){
        cout << "Error: Inputan harus >= 1 \n";
        goto ulang;
    }
    for (int i = 1; i <= step; i++){
        if (i % 2 == 0) { //genap
            cout << temp << " ";
            temp += 3;
        } else {
            cout << temp << " ";
            temp += 5;
        }
    }

    return 0;
}