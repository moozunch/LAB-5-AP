#include <iostream>
#include <cmath> // untuk sqrt
using namespace std;

int main(){
    cout << "Mencari nilai X1 dan X2 dari persamaan kuadrat\nUntuk Ax^2 + Bx + C = 0" << endl;
    cout << "Masukkan nilai A: ";
    int A, B, C;
    cin >> A;
    cout << "Masukkan nilai B: ";
    cin >> B;
    cout << "Masukkan nilai C: ";
    cin >> C;
    double x1 = (-B + sqrt(B*B - 4*A*C)) / (2*A);
    double x2 = (-B - sqrt(B*B - 4*A*C)) / (2*A);
    cout << "Nilai x1 = " << x1 << endl;
    cout << "Nilai x2 = " << x2 << endl;

    return 0;
}