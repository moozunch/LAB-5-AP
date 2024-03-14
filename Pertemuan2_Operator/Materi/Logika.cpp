#include <iostream>
using namespace std;

int main() {
    system("cls");
    //Logika
    bool a = true;
    bool b = false;
    cout << "a && b bernilai " << (a && b) << endl; //untuk and
    cout << "a and b bernilai " << (a and b) << endl; //untuk and, ingat casesensitif tidak boleh pakai huruf besar
    cout << "a || b bernilai " << (a || b) << endl; //untuk or
    cout << "a or b bernilai " << (a or b) << endl; //untuk or
    cout << "!a bernilai " << !a << endl; //untuk not

    // (|) satu aja untuk or bitwise, bitwisenya satu satu yang di or kan.

    return 0;
}