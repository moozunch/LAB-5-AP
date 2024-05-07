#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

float efisiensi (int A, int B, int C){
    return sqrt((A*A) + (B*B) + (C*C));
}

int angka[3][3]; //variable global untuk nyimpan arraynya karena bakal dipakai 2 function outside main

void input(){
        for (int i = 0; i < 3; i++){
            for (int j = 0; j < 3; j++){
                cout << "Input angka indeks " << i + 1 << ", " << j + 1 << "  :  ";
                cin >> angka[i][j];
            }
    }
}

void tampilkan(){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout << angka[i][j] << " ";
        }
        cout << endl;
    }
}

int caribesar(int abc){
    int temp;
    temp = angka[abc][0];
    for (int j = 0; j < 3; j++){
        if (angka[abc][j] > temp){
            temp = angka[abc][j];
        }
    }
    return temp;
}




int main() {
    system("cls");

    input();
    tampilkan();
    int A = 0, B = 1, C = 2; //untuk baris 
    A = caribesar(A);
    B = caribesar(B);
    C = caribesar(C);

    cout << "Nilai Efisiensi: " << fixed << setprecision(1) << efisiensi(A, B, C);

    return 0;
}