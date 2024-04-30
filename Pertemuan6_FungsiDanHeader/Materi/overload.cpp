#include <iostream>
using namespace std;


//when they have the same name of function
int operasi1(int num1, int num2){
    return num1*num2;
}
float operasi1(float num1, float num2){
    return num1/num2;
}

int main() {
    system("cls");
    int x = 5, y = 4;
    float n = 5.5, m = 4.4;
    
    cout << "Hasil perkalian = " << operasi1(x, y) << endl;
    cout << "Hasil perkalian = " << operasi1(n, m) << endl; //dia melihat argumennya mana yang masuk ke float dan mana yang integer
    
    return 0;
}