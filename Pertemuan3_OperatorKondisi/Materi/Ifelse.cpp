#include <iostream>
using namespace std;

int main() {
    system("cls");

    char nilai;
    cout << "Berapa nilai kamu: ";
    cin >> nilai;
    if (nilai == 'A') {
        cout << "Nilai kamu bagus, pertahankan!" << endl;
    } else if (nilai == 'B') {
        cout << "Tingkatkan REK!!" << endl;
    } else if (nilai == 'C') {
        cout << "Kasihannyaa!" << endl;
    } else if (nilai == 'D') {
        cout << "Kasihannya EXTRA" << endl;
    } else if (nilai == 'E') {
        cout << "Apalah" << endl;
    } else {
        cout << "Error: Nilai yang kamu masukkan tidak valid!" << endl;
    }
    
    return 0;
}