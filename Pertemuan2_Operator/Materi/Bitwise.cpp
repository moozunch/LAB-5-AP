#include <iostream>
using namespace std;

int main() {
    system("cls");
    // dia melakukan operasi langsung ke binernya
    int a = 5; // 101
    int b = 10; // 1010
    // 5    = 0101
    // 10   = 1010
    // and  = 0000
    cout << "5 & 10  " << (a & b) << endl;  //and
    cout << "5 | 10  " << (a | b) <<  endl;   //or
    cout << "5 ^ 10  " << (a ^ b) << endl;    //xor
    cout << "5 << 10 " << (a << 1) << endl;   //shift left
    cout << "5 >> 10 " << (a >> 1) << endl;   //shift right
    cout << "~5      " << (~a) << endl;       //not atau negasi

    return 0;
}