#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    system("cls");
    cout << "Program Body Mass Index (BMI) \n";
    cout << "Masukkan berat badan anda (kg): ";
    float berat;
    cin >> berat; 
    cout << "Masukkan tinggi anda (m): ";
    float tinggi;
    cin >> tinggi;
    float bmi =  (berat / pow(tinggi, 2));
    //cout << fixed << setprecision(2);
    cout << "BMI: " << fixed << setprecision(2) << bmi << endl;
    if (bmi < 18.5) {
        cout << "Berat badan kurang \n";
    } else if (bmi >=18.5 && bmi < 25) {
        cout << "Berat badan normal \n";
    } else if (bmi >= 25 && bmi < 30) {
        cout << "Berat badan berlebih \n";
    } else {
        cout << "Obesitas \n";
    }
    return 0;
}