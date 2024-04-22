#include <iostream>
using namespace std;

int main() {
    system("cls");
    int panjang, lebar;
    cout << "Input panjang: ";
    cin >> panjang;
    cout << "Input lebar: ";
    cin >> lebar;
    for (int i = 0; i < lebar; i++){ //untuk vertikal
        for (int j = 0; j < panjang; j++) { //untuk horizontal
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}