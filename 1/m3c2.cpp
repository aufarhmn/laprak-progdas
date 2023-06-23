/*
    Modul 3 Chekpoint 2
    By: Aufa N R
*/

#include "iostream"

using namespace std;

int main(){
    int n, x, y, num = 0;

    cout << "input number of rows ";
    cin >> n;

    for(x = 1; x <= n; x++){
        for(y = 1; y <= n; y++){
            cout << num << " ";
            num++;
        }
        cout << endl;
    }

    return 0;
}