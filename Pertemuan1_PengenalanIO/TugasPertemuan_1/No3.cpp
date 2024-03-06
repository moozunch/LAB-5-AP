#include <iostream>
using namespace std;

#define convertkm 0.001

int main() {
    int meter;
    system ("cls");
    cout << "Program Convert \n";
    cout << "Masukkan jarak (meter): ";
    cin >> meter;
    cout << "Jarak " << meter << " meter dalam kilometer adalah " << meter * convertkm << " kilometer" << endl;
    return 0;
}