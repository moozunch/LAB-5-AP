#include <iostream>
using namespace std;

void garis (int banyakKarakter){
//    for (int i = 0; i < banyakKarakter; i++){
//        cout << "=";
//    }
//    cout << endl;
    cout << string(banyakKarakter, '=') << endl; //another way to for, fungsi bawaan string
}


int main() {
    system("cls");
    
    garis(10);
    cout << "Program Fungsi tanpa nilai kembalian \n";
    garis(10);

    return 0;
}