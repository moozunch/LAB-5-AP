#include <iostream>
using namespace std;

int main(){
    system("cls");
    int x, *px;
    x = 25;
    px = &x;
    *px = x;
    if (x == *px){
        cout << "Benar, kedua pernyataan bernilai sama" << endl;
    } else {
        cout << "Salah, kedua pernyataan tidak bernilai sama" << endl;
    }


    return 0;
}