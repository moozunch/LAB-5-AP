#include <iostream>
using namespace std;

int main(){
    system("cls");
    const char *kata= "K O M P U T E R";


    // cara panjang
    char tanpaSpasi[10];
    int j = 0;
    for (int i = 0; kata[i] != '\0'; i++) {
        if (kata[i] != ' ') {
            tanpaSpasi[j] = kata[i];
            j++;
        }
    }
    tanpaSpasi[j] = '\0'; // akhiri string

    cout << "Karakter ke-5 dari 'K O M P U T E R' adalah " << tanpaSpasi[4] << endl;

    //cara cepat
     kata += 8; // langsung ke karakter ke-8 tanpa hilang spasi - tidak efektif kalau pakai kata yang lain
     cout << "Karakter ke-5 dari 'K O M P U T E R' adalah " << *kata << endl;

    return 0;
}
