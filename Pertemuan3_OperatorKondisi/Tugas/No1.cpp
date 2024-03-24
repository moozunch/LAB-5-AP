#include <iostream>
using namespace std;

int main() {
    system("cls");
    cout << "Masukkan sebuah bilangan bulat: ";
    int x;
    cin >> x;
    if (x == 0) {
        cout << x << " Adalah bilangan nol" << endl;
    } else {
        if (x % 2 != 0) {
            cout << x << " Adalah bilangan ganjil" << endl;
        } else {
            cout << x << " Adalah bilangan genap" << endl;
        }
    }
    return 0;
}