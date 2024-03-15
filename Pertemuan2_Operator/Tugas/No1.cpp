#include <iostream>
using namespace std;

#define I 2
#define K 7
#define L 1
#define C 9
#define U 5
#define S 6

int main(){

    // a. 3 - 1 < I or K - 5 < 8 + 2 and L + 7 >= 9 + 3
    bool a = (3 - 1 < I) || ((K - 5 < 8 + 2) && (L + 7 >= 9 + 3));
    // 3 - 1 < 2 = false
    // 7 - 5 < 10 = true
    // 1 + 7 >= 12 = false
    // false or true and false = false or false = false 
    cout << "a. 3 - 1 < I or K - 5 < 8 + 2 and L + 7 >= 9 + 3 = " << a << endl;

    //b. (L % 3 > U) and (C/U<S or 3*I-K>0)
    bool b = ((L % 3 > U) && (C/U<S)) || (3*I-K>0);
    // 1 % 3 > 5 = false
    // 9/5 < 6 = true
    // 3*2-7 > 0 = false
    // false and true or false = false or false = false
    cout << "b. (L % 3 > U) and (C/U<S or 3*I-K>0) = " << b << endl;

    //c. I - 9 > K or L + 3 < 4 * C
    bool c = (I - 9 > K) || (L + 3 < 4 * C);
    // 2 - 9 > 7 = false
    // 1 + 3 < 4 * 9 = true
    // false or true = true
    cout << "c. I - 9 > K or L + 3 < 4 * C = " << c << endl;

    //d. I or K and L xor 3 shl 2 
    int d = (I | ((K & L) ^ (3 << 2)));
    // 3 << 2 = 12,  cek kebenaran cout << (3 << 2) << endl;
    // 7 & 1 = 1, cek kebenaran cout << (7 & 1) << endl;
    // 1 xor 12 = 13, cek kebenaran cout << (1 ^ 12) << endl;
    // 2 or 13 = 15, cek kebenaran cout << (2 | 13) << endl;
    cout << "d. I or K and L xor 3 shl 2 = " << d << endl;

    return 0;
}