#include <iostream>
using namespace std;

int main() {
    system("cls");
    cout << "Input tinggi diamond (ganjil): ";
    int tinggi;
    cin >> tinggi;    
    for (int i = 0; i < tinggi; i++) {
        for (int j = 0; j < abs((tinggi / 2) - i); j++) {
            cout << "  ";
        }
        for (int k = 0; k < tinggi - 2 * abs((tinggi / 2) - i); k++) {
            cout << "* ";
        }
        for (int l = 0; l < abs((tinggi / 2) - i); l++) {
            cout << "  ";
        }
        cout << endl;
    }
    
    return 0;
}