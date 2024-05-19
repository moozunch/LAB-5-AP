#include <iostream>
using namespace std;

void tambah(int *a, int *b, int *hasil){
    *hasil = *a + *b;
}
void kurang(int *a, int *b, int *hasil){
    *hasil = *a - *b;
}
void kali(int *a, int *b, int *hasil){
    *hasil = *a * *b;
}
void bagi(int *a, int *b, int *hasil){
    *hasil = *a / *b;
}
void mod(int *a, int *b, int *hasil){
    *hasil = *a % *b;
}

int main(){
    system("cls");
    int a, b, hasil = 0;
    cout << "Masukkan nilai a : ";
    cin >> a;
    cout << "Masukkan nilai b : ";
    cin >> b;
    tambah(&a, &b, &hasil);
    cout << "Hasil penjumlahan "<< a << " + " << b << " = " << hasil << endl;
    kurang(&a, &b, &hasil);
    cout << "Hasil pengurangan "<< a << " - " << b << " = " << hasil << endl;
    kali(&a, &b, &hasil);
    cout << "Hasil perkalian "<< a << " * " << b << " = " << hasil << endl;
    bagi(&a, &b, &hasil);
    cout << "Hasil pembagian "<< a << " / " << b << " = " << hasil;
    mod(&a, &b, &hasil);
    cout << " dengan sisa pembagian " << hasil << endl;

return 0;}
