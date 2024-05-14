#include <iostream>
using namespace std;

int main() {
    system("cls");
    //variabel biasa
    int angka = 10;
    cout << angka << endl;
    cout << &angka << endl; //refrence, atau sumber maka akan tampil alamat angka
    
    //pointer
    int *ptrAngka; //deklarasi pointer
    //cout << *ptrAngka << endl; //menampilkan nilai dari pointer
    //cout << ptrAngka << endl; //hanya menampilkan alamat pointer
    
    //pointer nggak bisa ngasih langsung value karena alamat, *ptrAngka = 22; tidak boleh
    ptrAngka = &angka; //tersambung melalui alamat
    cout << *ptrAngka << endl;

    angka = 11;
    cout << *ptrAngka << endl;

    char karakter[5];
    char *ptrKarakter;
    ptrKarakter = karakter; //menunujuk indeks pertama dari karakter
    cout << *ptrKarakter << endl;


    //subtitusi karakter awal string ke pointer
    char *ptrString = "Helloworld"; //padahal biasanya char itu hanya satu karakter, tapi dengan pointer bisa jadi string juga, karena dia akan dijadikan array, dan dikasih tempat yang terus bersebelahan sampai ketemu null terminator
    cout << ptrString << endl;
    cout << *ptrString << endl; //hanya satu karakter

    //(*ptr+2); //indeks 2 array, kalau (*ptr) itu ptr[0]

    //Pointer dalam Pointer
    int vina;
    int *wini;
    int **vera; //pointer ke pointer paling dalam ke 2
    vina = 23;
    wini = &vina; //pertama
    vera = &wini; //kedua
    cout << vina << endl;
    cout << *wini << endl;
    cout << **vera << endl; //ingat ambil nilai pointer pakai pointer yang sama saat di deklarasi
    //dapatin alamatnya
    cout << &vina << endl;
    cout << wini << endl;
    cout << *vera << endl; //dereference, supaya dapat alamatnya vera, sama macam wini kan supaya dapat alamatnya si * hilang satu.
    cout << vera << endl; //alamat yang ditunjuk vera yaitu wini
    cout << &vera << endl; //alamat vera

    vina =25;
    cout << vina << endl;
    cout << *wini << endl;
    cout << **vera << endl; //ingat ambil nilai pointer pakai pointer yang sama saat di deklarasi
    
    //Pointer pada array
    //sebagai paramter gunanya reference dan pointer jadi sama alamatnya karena pada umumnya jika parameter hanya dicopy aja valuenya
    
    return 0;
}