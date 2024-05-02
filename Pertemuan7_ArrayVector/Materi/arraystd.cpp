#include <iostream>
#include <array> //see all function in the documentation
using namespace std;

//With standart library array


int main() {
    system("cls");
    
    //  Initialize value
    array <int, 5> nilai; //<type, size>
    for (int i = 0; i < 5; i++){
        nilai[i] = i;
        cout << "Nilai [" << i << "] = " << nilai[i] << endl;
        cout << "Adress [" << i << "] = " << &nilai[i] << endl;
    }

    //check length with function
    cout << "Ukuran / Length: " << nilai.size() << endl;
    cout << "Address awal: " << nilai.begin() << endl; //just try out all function

    cout << "Nilai Index[2]: " << nilai.at(2) << endl;
    
    return 0;
}