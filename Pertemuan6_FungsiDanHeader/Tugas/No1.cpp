#include <iostream>
#include <typeinfo>
using namespace std;

int inglobal;

string fizzbuzz(int input){
    string result;
        if (input % 3 == 0 && input % 5 == 0){
            result = "FizzBuzz";
        } else if (input % 3 == 0){
            result = "Fizz";
        } else if (input % 5 == 0){
            result = "Buzz";
        } else {
            result = to_string(input);
        }
        return result;

}

string deretsegitiga(int input){
    string result = "";
    for (int i = 1; i <= input; i++){
            int deret = (i*(i+1));
            result += fizzbuzz(deret);
            if (i != input){
                result += ", ";
            }
            if (deret % 3 != 0 && deret % 5 != 0){
                inglobal = deret;
            }
        }
    return result;
}



int main() {
    system("cls");
    int input;
    do {
        cout <<  "Input angka: ";
        cin >> input;
        if (input < 3 || input >= 100) {
            cout << "Error: Invalid input, masukkan nilai rentang 3 - 100!\n";
        }
    } while (input < 3 || input >= 100);
    cout << deretsegitiga(input);
    cout << "\nTipe data " << inglobal << " adalah " << typeid(inglobal).name();

    return 0;
}