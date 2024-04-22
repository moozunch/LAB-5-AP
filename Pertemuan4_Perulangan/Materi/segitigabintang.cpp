#include <iostream>
using namespace std;

int main() {
    system("cls");
    int tinggi;
    cout << "Masukkan tinggi segitiga: ";
    cin >> tinggi;
    
    for (int i = tinggi; i >= 1; i--) { //buat tinggi
        for (int j = i; j >= 1; j--) {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}