#include <iostream>
using namespace std;

int main(){
    system("cls");
    string kalimat;
    char karakter;
    cout << "Input sebuah kalimat: ";
    getline(cin, kalimat);
    cout << "Input sebuah karakter: ";
    cin >> karakter;
    int hapus = 0;
    //pakai for each
    for (char a : kalimat ) {
        if (a == karakter) {
            hapus += 1;
            continue;
        } else {
            cout << a;
        }
    }
    cout << "\nKarakter terhapus = " << hapus << endl; 

    return 0;
}