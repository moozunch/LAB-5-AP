#include <iostream>
#include <vector> //pakai vector karena kita tidak tahu pastinya bakal ada berapa instead of array
using namespace std;

class Mahasiswa {

    public: //class member, bisa diakses dari luar class, other access modifier: private (default) can't be access outside class or any subclass, protected can be accessed from subclass but not from outside class.
        string Nama;
        string NIM;
        float IPK;

    Mahasiswa (string Nama, string NIM, float IPK) : Nama(Nama), NIM(NIM), IPK(IPK) {} //constructor, in Kotlin(this). It's basically a parameterized constructor with after (:) is the declare of parameter with member variable

    static void tambahDataMahasiswa(vector<Mahasiswa> &mahasiswa) { //this is called as method, basically a function inside of class. static method, can be called without creating an object of the class (bagusan pakai static ajalah pokoknya)
        string Nama;
        string NIM;
        float IPK;

        cout << "Input nama mahasiswa: ";
        cin.ignore();
        getline(cin, Nama);

        cout << "Input NIM mahasiswa: ";
        cin >> NIM;

        cout << "Input IPK mahasiswa: ";
        cin >> IPK;

        mahasiswa.emplace_back(Nama, NIM, IPK);
    }

    static void tampilkanSeluruhData(const vector<Mahasiswa> &mahasiswa) {
        if (mahasiswa.empty()) {
            cout << "Tidak ada data!";
        }

        for (const auto& mhs : mahasiswa) { //auto is a keyword that tells the compiler to infer the type of the variable from its initializer. In this case, it's a reference to a Mahasiswa object. (nggak perlu tipe data, otomatis karena ini tipe object)
            cout << "Nama: " << mhs.Nama << ", NIM: " << mhs.NIM << ", IPK: " << mhs.IPK << endl;
        }
    }

    static void hitungRataRataIPK(const vector<Mahasiswa> &mahasiswa) {
        if (mahasiswa.empty()) {
            cout << "Tidak ada data!";
        }

        float totalIPK = 0;

        for (const auto& mhs : mahasiswa) {
            totalIPK += mhs.IPK;
        }

        cout << "Rata-rata dari " << mahasiswa.size() << ": " << totalIPK/mahasiswa.size() << endl;
    }

    static void tampilkanIPKMahasiswaTertinggi(const vector<Mahasiswa> &mahasiswa) {
        if (mahasiswa.empty()) {
            cout << "Tidak ada data!";
        }

        const Mahasiswa* ptrMhs = &mahasiswa[0];

        for (const auto& mhs : mahasiswa) {
            if (mhs.IPK > ptrMhs -> IPK) { //arrow operator khusus untuk yang berhubungan dengan pointer, basically it's like a dot operator but for pointer, jadi dia bisa akses member dari pointer yang terhubung dengan object dari class
                ptrMhs = &mhs;
            }
        }

        cout << "Mahasiswa IPK tertinggi\n";
        cout << "Nama: " << ptrMhs -> Nama << ", NIM: " << ptrMhs -> NIM << ", IPK: " << ptrMhs -> IPK << endl;
        //kek yang ptrMhs -> Nama itu sama aja dengan (*ptrMhs).Nama, tapi untuk yang pointer si class member yang namanya "Nama" dari class Mahasiswa yang sudah dimasukkan ke *ptrMhs
    }

     void tampilkanIPKMahasiswaTerendah(const vector<Mahasiswa> &mahasiswa) {
        if (mahasiswa.empty()) {
            cout << "Tidak ada data!";
        }

        const Mahasiswa* ptrMhs = &mahasiswa[0];

        for (const auto& mhs : mahasiswa) {
            if (mhs.IPK < ptrMhs -> IPK) {
                ptrMhs = &mhs;
            }
        }

        cout << "Mahasiswa IPK terendah\n";
        cout << "Nama: " << ptrMhs -> Nama << ", NIM: " << ptrMhs -> NIM << ", IPK: " << ptrMhs -> IPK << endl;
    }
};

void MenuMahasiswa() {
    cout << "Menu\n";
    cout << "1. Tambah Data Mahasiswa\n";
    cout << "2. Tampilkan Seluruh Data Mahasiswa\n";
    cout << "3. Hitung Rata-rata IPK Mahasiswa\n";
    cout << "4. Mahasiswa dengan IPK Tertinggi\n";
    cout << "5. Mahasiswa dengan IPK Terendah\n";
    cout << "6. Keluar\n";
}

int main() {
    system("CLS");

    vector<Mahasiswa>mahasiswa;
    int pilihan;

    while(true) {
        MenuMahasiswa();
        cout << "Input pilihan: ";
        cin >> pilihan;

        switch (pilihan)
        {
        case 1:
            Mahasiswa::tambahDataMahasiswa(mahasiswa);
            break;
        case 2:
            Mahasiswa::tampilkanSeluruhData(mahasiswa);
            break;
        case 3:
            Mahasiswa::hitungRataRataIPK(mahasiswa);
            break;
        case 4:
            Mahasiswa::tampilkanIPKMahasiswaTertinggi(mahasiswa);
            break;
        case 5:
            Mahasiswa::tampilkanIPKMahasiswaTerendah(mahasiswa);
            break;
        case 6:
            return 0;
        default:
            cout << "Inputan tidak valid!\n";
            break;
        }
    }
    
    return 0;
}