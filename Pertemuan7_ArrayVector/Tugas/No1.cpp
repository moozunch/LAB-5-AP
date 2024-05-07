#include <iostream>
using namespace std;

// Fungsi untuk menghitung nilai kombinasi 
void pascal (int tinggi){

    for (int i = 1; i <= tinggi; i++){ //tinggi
        int satu = 1; //refresh value
        for (int j = tinggi; j >= i; j--){ //spasi
            cout << " ";
        }
        for (int k = 1; k <= i; k++){ //segitiga 
            cout << satu << " ";
            satu = satu * (i - k) / k;
        }
        cout << endl;
    }    
}

int cari (int x, int y){ //basically rumus yang sama hanya saja tidak perlu visualisasi
    int result;
    
    for (int i = 1; i <= x; i++){ //baris x
        int satu = 1; //refresh value
        for (int k = 1; k < y; k++){ //kolom y, kurang dari y karena satu dihitung 1
            satu = satu * (i - k) / k;
            result = satu; //akan terus terganti nilai sampai kondisi nilai terakhir alias yang kita cari indexs [x] dan [y]
        }
    }    
    return result;  
}

int main() {
    system("cls");

    int tinggi;
    do {
        cout << "Masukkan tinggi segitiga: ";
        cin >> tinggi;
    } while (tinggi < 1);
    pascal(tinggi);
    
    int x, y;

    do {
        cout << "Input dua buah bilangan x (baris) dan y (kolom) \n";
        cout << "note! (x >= 1, y <= 30 | y <= x): ";
        cin >> x >> y;

    } while (x < 1 && y > 30 || y > x);

    cout << "Nilai pada Indeks [" << x << "][" << y << "] = " << cari(x, y) << endl;
    

    
    return 0;
}