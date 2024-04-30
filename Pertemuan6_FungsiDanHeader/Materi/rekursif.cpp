#include <iostream>
using namespace std;
//fungsi yang memanggil dirinya sendiri

int faktorial(int n){
    if (n == 0){
        return 1;
    } else {
        return n * faktorial(n - 1); //bakal terus memanggil dirinya sampai n == 0
    }
}

int main() {
    system("cls");
    
    cout << faktorial(5) << endl;
    
    return 0;
}
