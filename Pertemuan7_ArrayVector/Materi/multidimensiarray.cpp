#include <iostream>
#include <array>
using namespace std;

int main() {
    system("cls");

    int nilai[2][2] = {{1, 2}, {3, 4}};
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++){
            cout << "Nilai[ " << i << "][" << j << "] = "<< nilai[i][j] << endl;
        }
    }
    
    //std, multidimensi tipe array

    array <array <int, 2>, 2> nilai2 = {{{1, 2}, {3, 4}}};
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++){
            cout << "Nilai2[  " << i << "][" << j << "] = "<< nilai2[i][j] << endl;
        }
    }
    
    return 0;                
} 