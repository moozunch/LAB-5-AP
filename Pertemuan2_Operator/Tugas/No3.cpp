#include <iostream>
#include <cmath>
//#include <iomanip>
using namespace std;

#define phi 3.14159

int main() {
    system("cls");
    char lanjut;
    do {
        cout << "Program Menghitung luas permukaan dan volume dari bangun ruang" << endl;
        cout << "1. Kerucut" << endl;
        cout << "2. Limas Segitiga" << endl; 
        cout << "3. Bola" << endl;
        cout << "4. Prisma" << endl;

        char pilihan;
        cout << "Masukkan pilihan(1-4): ";
        cin >> pilihan;

        double r, t, alas, tinggi, sisi, luas, volume;
        switch (pilihan) {
            case '1': {
                system("cls");
                cout << "Menghitung luas permukaan dan volume Kerucut" << endl;
                cout << "Masukkan jari-jari: ";
                cin >> r;
                cout << "Masukkan tinggi: ";
                cin >> t;
                luas = phi * r * (r + sqrt(r*r + t*t));
                volume = (1.0/3) * phi * r * r * t;
                //cout << fixed << setprecision(3);
                cout << "Luas permukaan kerucut = " << luas << endl;
                cout << "Volume kerucut = " << volume << endl;
                break;
            }
            case '2': {
                system("cls");
                cout << "Menghitung luas permukaan dan volume Limas Segitiga" << endl;
                cout << "Masukkan alas: ";
                cin >> alas;
                cout << "Masukkan tinggi: ";
                cin >> tinggi;
                cout << "Masukkan sisi: ";
                cin >> sisi;
                luas = (alas * tinggi) / 2 + 3 * sisi * sisi;
                volume = (alas * tinggi * sisi) / 6;
                cout << "Luas permukaan limas segitiga = " << luas << endl;
                cout << "Volume limas segitiga = " << volume << endl;
                break;
            }
            case '3': {
                system("cls");
                cout << "Menghitung luas permukaan dan volume Bola" << endl;
                cout << "Masukkan jari-jari: ";
                cin >> r;
                luas = 4 * phi * r * r;
                volume = (4.0/3) * phi * r * r * r;
                cout << "Luas permukaan bola = " << luas << endl;
                cout << "Volume bola = " << volume << endl;
                break;
            }
            case '4': {
                system("cls");
                cout << "Menghitung luas permukaan dan volume Prisma" << endl;
                cout << "Masukkan alas: ";
                cin >> alas;
                cout << "Masukkan tinggi: ";
                cin >> tinggi;
                cout << "Masukkan sisi: ";
                cin >> sisi;
                luas = 2 * alas * tinggi + 3 * alas * sisi;
                volume = alas * tinggi * sisi;
                cout << "Luas permukaan prisma = " << luas << endl;
                cout << "Volume prisma = " << volume << endl;
                break;
            }
            
        }
        cout << "Apakah anda ingin mengulang?(y/n): ";
        cin >> lanjut;
    } while (lanjut == 'y' || lanjut == 'Y');

    return 0;
}