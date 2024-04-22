#include <iostream>
using namespace std;

int main() {
    system ("cls");
    int n;
    ulang:
    cout << "Maasukkan jumlah perulangan: ";
    cin >> n;
    while (n < 1){
        cout << "Error: inputan harus lebih dari 0" << endl;
        goto ulang;
    }
    cout << "H" << string(n, 'o') << "r" << string(n, 'e') << string(n, '!') << endl; //(n, 'o') o diulang sebanyak n kali 

    return 0;
}