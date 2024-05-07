#include <iostream>
using namespace std;

int main() {
    system("cls");
    string str;
    do {
        cout << "Masukkan string yang terinfeksi (maks 100 character!): ";
        getline(cin, str); 
    } while (str.length() > 100 || str.length() < 1);

    int bagi = str.length() / 2;

    //dibagi 2 -> kiri dan kanan
    for (int i = bagi - 1; i >= 0; i--){ //kiri
        cout << str[i];
    }

    for (int i = str.length(); i >= bagi; i--){ //kanan
        cout << str[i];
    }

    return 0;
}