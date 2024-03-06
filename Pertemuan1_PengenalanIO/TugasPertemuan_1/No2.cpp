#include <iostream>
#include <string>
using namespace std;

int main() {
    string nama;
    system ("cls");
    
    cout << "Menggunakan getline\n";
    cout << "Masukkan nama anda: ";
    getline(cin, nama); // getline membaca satu baris
    cout << "Nama yang diinput: " << nama << endl;

    cout << "\nMenggunakan cin\n";
    cout << "Masukkan nama anda: ";
    cin >> nama; // cin hanya membaca satu kata
    cout << "Nama yang diinput: " << nama << endl;

    return 0;
}