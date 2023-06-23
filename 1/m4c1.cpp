/*
    Modul 4 Chekpoint 1
    By: Aufa N R
*/

#include <iostream>

using namespace std;

struct Mahasiswa  {        
    char nama[40];        
    int angkatan;      
    };

int main()
{
    // Error 1: Mahasiswa, bukan mahasiswa
    Mahasiswa mhs;
    cout << "Masukkan Nama Mahasiswa :";
    cin.get(mhs.nama, 40);
    cout << "Masukkan Angkatan :";
    
    // Error 2: inisiasi angkatan ke instance yang udah dibuat
    cin >> mhs.angkatan;
    cout << "Data Mahasiswa" << endl;
    cout << "Nama :" << mhs.nama << endl;
    cout << "Angkatan :" << mhs.angkatan << endl;
    
    // Error 3: cout, bukan count, ada 3 baris yang gini
    cout << "Alokasi memori untuk elemen nama : " << &mhs.nama << endl;
    cout << "Alokasi memori untuk elemen angkatan : " << &mhs.nama << endl;

    // Error 4: sizeof diinisasi bisa pakai instance (mhs) atau Mahasiswa karena isinya union kebetulan jg cuman 1 jd hasilnya sama
    cout << "Ukuran dari variabel union : " << sizeof(Mahasiswa) << endl;
    return 0;
}