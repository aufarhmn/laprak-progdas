/*
    Modul 5 Chekpoint 1 No. 2
    By: Aufa N R

    Notes: aku kurang tau tujuan code ini buat apa tp kalo mau diperbaiki bisa pakai tipe data string yang notabene lebih fleksibel
*/

#include <iostream>
// Include library cstring untuk manipulasi char
#include <cstring>

using namespace std;

int main()
{
    char s1[10], s2[20], s3[20];
    int i;
    cout << "Masukkan string pertama untuk mengetahui panjang string tersebut: ";
    cin >> s1;
    cout << "String yang dimasukkan: " << s1 << endl;
    cout << "Panjang string tersebut adalah: " << strlen(s1) << endl;

    cout << "Masukkan string kedua untuk mengetahui panjang string tersebut: ";
    cin >> s2;
    cout << "String yang dimasukkan: " << s2 << endl;
    cout << "Panjang string tersebut adalah: " << strlen(s2) << endl;

    strcpy(s3, s2);
    cout << "Salin string kedua ke dalam string ketiga" << endl;
    cout << "String ketiga adalah: " << s3 << endl;

    cout << "Sambungkan string pertama dan kedua:" << endl;
    strcat(s1, s2);
    cout << "Hasil penyambungan string pertama dan kedua adalah: " << s1 << endl;

    cout << "Bandingkan string pertama dan kedua:" << endl;
    i = strcmp(s1, s2);
    if (i == 0)
        cout << "Both strings are equal" << endl;
    else if (i < 0)
        cout << s1 << " is less than " << s2 << endl;
    else
        cout << s1 << " is greater than " << s2 << endl;

    cout << "Bandingkan string kedua dan ketiga:" << endl;
    i = strcmp(s2, s3);
    if (i == 0)
        cout << "Both strings are equal" << endl;
    else if (i < 0)
        cout << s2 << " is less than " << s3 << endl;
    else
        cout << s2 << " is greater than " << s3 << endl;

    return 0;
}
