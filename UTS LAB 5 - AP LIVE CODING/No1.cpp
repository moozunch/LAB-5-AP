#include <iostream>
using namespace std;

int main() {
    system("cls");
    string kalimat;
    ulang:
    cout << "Masukkan Kalimat: ";
    getline(cin, kalimat);
    while (kalimat.length() == 0){
        cout << "Error: Masukkan kalimat minimal 1 karakter\n";
        goto ulang;
    }
    for (int i = kalimat.length(); i >= 0; i--){
        cout << kalimat[i] << endl;
    }

    return 0;
}