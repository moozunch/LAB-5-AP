#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string nama, nim;
    char kom;
    float ipk;

    system ("cls");
    cout << "Masukkan Nama anda: ";
    getline(cin, nama);
    cout << "Masukkan NIM anda: ";
    cin >> nim;
    cout << "Masukkan Kom anda: ";
    cin >> kom;
    cout << "Berapa IPK terakhir anda: ";
    cin >> ipk;
    cout << fixed << setprecision(2); // agar si ipk tetap ditampilkan belakang komanya, pakai lib iomanip
    kom = toupper(kom); //to uppercase
    
    cout << "\nData Mahasiswa\n" << "\nNama         : " << nama << "\nNIM          : " << nim << "\nKom          : " << kom << "\nIPK terakhir : " << ipk << endl; 

    return 0;
}