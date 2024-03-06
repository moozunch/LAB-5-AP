#include <iostream>
#include <string>
using namespace std;

#define pi 3.141 //constanta

int main () {
    system ("cls");
    cout << "Hello World!" << endl;
    // alt shift a multi line comment
    string nama;
    cout << "Masukkan nama anda: ";
    cin >> nama; //kalau namanya dipisahi spasi bakal cuma ke print satu
    cout << nama << "\n";
    
    cout << "Masukkan nama anda: ";
    getline(cin, nama);
    cout << nama;

    return 0;
}