/*
    Modul 3 Chekpoint 3
    By: Aufa N R
*/

#include <iostream>

using namespace std;

int main() {
    int n, digit, rev = 0;

    cout << "Enter a number: ";
    cin >> n;

    // Kurang Code Blocks ini aja
    int num = n;

    while (num != 0) {
        digit = num % 10;
        rev = (rev * 10) + digit;
        num = num / 10;
    }

    if (rev == n) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}
