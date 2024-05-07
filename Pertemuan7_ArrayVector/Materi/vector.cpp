#include <iostream>
#include <vector>
using namespace std;

//Vector: dynamic array(array kan static/tidak bisa diubah panjangnya), we don't need to know what's size to make vectors unlike array

int main() {
    // vector <data type> name={data inside}
    vector<int> vector1 = {1, 2, 3}; //index also goes from 0
    cout << vector1[0] << endl;
    cout << vector1[1] << endl;
    cout << vector1[2] << endl;
    cout << "Anggota paling depan: "<< vector1.front() << endl; //depan(1)
    cout << "Anggota paling belakang: "<< vector1.back() << endl; //back(3)

    vector1.push_back(9); //adding to the back, the capacity will increase by 2x of actual size
    cout << "size vector: "<< vector1.size() << endl; ///how many it actually hold
    cout << "Capacity vector: "<< vector1.capacity() << endl; ///how many capacity currently it hold especially after pushback etc.


    // now why double by two? because vector always playing it save in case they will need more space.
    //lets make it up to 6 element first to prove this, we need 2 more
    vector1.push_back(2);
    vector1.push_back(5);
    cout << "Capacity vector setelah actually up to 6: "<< vector1.capacity() << endl; //expect 6
    //disini capacity masih 6 karena belum ada lebih, tapi once aku nambah 1 maka dia lagi lagi akan double the size by two so 12
    vector1.push_back(7);
    cout << "Capacity vector setelah, more than 6: "<< vector1.capacity() << endl; //expect 12
    cout << "Size vector (capacity yang sudah terisi): "<< vector1.size() << endl; //expect 7

    //pop back
    vector1.pop_back(); //delete one from the back, di tanda kurung tidak perlu diisi
    cout << "capacity vector setelah di pop satu: " << vector1.capacity() << endl; //expect 12
    //walaupun kita decrease, the capacity will not change after we increase the capacity, the way to make the capacity to fit jadi bisa actual hemat/save a lot space
    vector1.pop_back();
    vector1.shrink_to_fit(); //expect 5
    cout << "vector capacity setelah di shrink to fit: " << vector1.capacity() << endl; //expect 5, not 12 or 6 anymore.


    return 0;
}