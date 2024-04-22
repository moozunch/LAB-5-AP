#include <iostream>
using namespace std;

int main() {
    system("cls");
    //inisialisasi biasakan dari 0, karena array dari 0
    //kondisi
    //increment / decrement
    for (int i = 0; i < 5; i++){
        cout << "Hello world " << i << endl;
    }
    

    // kan string itu array char
    string nama = "Annisa";
    for (i = 0; i < nama.length(); i++){
        cout << nama[i] << endl;
    }
    
    //for each loop
    for (char c : nama) { //for each c in nama bakal disebutin
        cout << c << endl;
    }
    return 0;
}