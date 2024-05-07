#include <iostream>
#include <vector>
#include <sstream>
#include <iterator>
using namespace std;

int main() {
    system("cls");
    string strangka;
    do{ 
        cout << "Masukkan deretan angka: ";
        getline(cin, strangka);
    } while (strangka.length() < 1);

    //mengubah string ke vector dengan perulangan(iterator)
    stringstream ss(strangka);
    istream_iterator<int> begin(ss);
    istream_iterator<int> end;
    vector<int> angka(begin, end);

    //size sebelum
    cout << "Panjang vector : " << angka.size() << endl;

    //printing one by one lalu di erase satu satu
    for (auto it = angka.begin(); it != angka.end();) {
        cout << *it << endl;
        it = angka.erase(it);
    }

    //size sesudah
    cout << "Panjang vector : " << angka.size() << endl;
    
    return 0;
}