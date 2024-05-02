#include <iostream>
using namespace std;

int main() {
    system("cls");
    int arrrayNilai[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (int i : arrrayNilai) {
        cout << "Address " << &i << " -> " << i << endl; 
    }
    //kelemahan for ini adalah karena dia ubah nilai arrraynilai dimasukkan satu satu ke i, jadi address nya tidak akan berubah (so bacially hanya ganti nilai bolak balik)
    

    for (int &i : arrrayNilai) { //pakai references, jadi ngubah langsung ke arraynya
        i *= 2;
    }
    cout << endl;

    for (int &i : arrrayNilai) {
        cout << "Address " << &i << " -> " << i << endl; 
    }
    
    
    return 0;
}