/*
    Modul 6 Chekpoint 1 No. 2
    By: Aufa N R
*/

#include <iostream>

using namespace std;

// Error: kayaknya dia dianggap sebagai reserve word, kalo error bisa diganti nama variabelnya
const int ukuran = 3;

struct employee
{
    string name;
    int emp_no;
    float salary;
};

int main()
{
    // Error: buat instance emp
    employee emp[ukuran];  
    cout << "Masukkan Data Pegawai" << endl;

    // i is not initialized in the original code, corrected by initializing it.
    for (int i = 0; i < ukuran; i++)
    {
        cout << " Pegawai Nomor " << i + 1 << endl;
        cout << " Nama:" << endl;
        cin >> emp[i].name;
        cout << " Kode: " << endl;
        cin >> emp[i].emp_no;
        // accessing members
        cout << " Gaji:" << endl;
        cin >> emp[i].salary;
    }
    cout << "\n";
    cout << "Data Pegawai\n";
    cout << "No.\tNama\tKode\tGaji\n";

    // i is not initialized in the original code, corrected by initializing it.
    for (int i = 0; i < ukuran; i++)
    {
        cout << i + 1 << "\t" << emp[i].name << "\t" << emp[i].emp_no << "\t\t" << emp[i].salary << "\n";
    }
    
    return 0;
}
