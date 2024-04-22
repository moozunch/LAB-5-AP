#include <iostream>
using namespace std;

int main() {
    system("cls");
    string nama;
    cout << "Masukkan nama: ";
    cin >> nama;
    for (char c : nama) { //for each c in nama bakal disebutin
        if (c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o') {
            c = 'o';
        }
        cout << c << " ";
    }    

    return 0;
}