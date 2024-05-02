#include <iostream>
using namespace std;

int main() {
    system("cls");

    //Array Built in

    //to initiate array using []
    int nilai[5] = {1, 2, 3, 4}; 
    nilai[4] = 10; 
    //indexing start from 0

    //checking address using references
    for(int i = 0; i < 5; i++){
        cout << "Alamat nilai[" << i << "] = " << &nilai[i] << " Nilai = " << nilai[i] << endl;
    }
    //remember 1 block int =  4 byte, so the next address will be 4 bytes

    //change array value - using pointer
    int *ptr = nilai; //without index, automatically start from 0
    *(ptr + 2) = 6; //nilai[2] = 6
    cout << *(ptr + 2) << endl;
    nilai[2] = 7;
    cout << nilai[2] << endl;

    //array doesn't have length method, instead manual with how mny bite usees
    cout << "Size of nilai = " << sizeof(nilai) << " byte" << endl;
    cout << "Length of nilai = " << sizeof(nilai) / sizeof(nilai[0]) << endl;
    
    
    
    return 0;
}