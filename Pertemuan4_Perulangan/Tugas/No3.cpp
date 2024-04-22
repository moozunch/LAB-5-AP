#include <iostream>
using namespace std;

int main(){
    system("cls");
    int tahun, interval;
    a:
    cout << "Masukkan Tahun: ";
    cin >> tahun;
    while (tahun <= 1000 || tahun >= 9000) {
        cout << "Error: Tahun harus dalam range (1000 <= Tahun <= 9000)\n";
        goto a;
    }
    b:
    cout  << "Masukkan Interval: ";
    cin >> interval;
    while (interval <= -tahun|| interval >= 9999 - tahun) {
        cout << "Error: Interval harus dalam range (-Tahun <= Interval <= 9999 - Tahun)\n";
        goto b;
    }
    
    int i = 0;

    if (interval >= 0){
        do {
            if (tahun % 4 == 0) {
                cout << tahun << " Kabisat\n";
                tahun += 1;
                i++;
            } else {
                cout << tahun << " bukan Kabisat\n";
                tahun += 1;
                i++;
            }
        } while (i <= interval);
    } else {
        do {
            if (tahun % 4 == 0) {
                cout << tahun << " Kabisat\n";
                tahun -= 1;
                i--;
            } else {
                cout << tahun << " bukan Kabisat\n";
                tahun -= 1;
                i--;
            }
        } while (i >= interval);
    }

    return 0;
}