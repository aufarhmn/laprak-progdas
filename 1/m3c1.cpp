/*
    Modul 3 Chekpoint 1
    By: Aufa N R
*/

#include "iostream"

using namespace std;

int main(){
    doWhileVer();
    forLoopVer();
}

int doWhileVer(){
    int i = 0;
    do {
        cout << i << endl;
        i += 4;
    } while(i <= 100);

    return 0;
}

int forLoopVer(){
    for(int i = 0; i <= 100; i += 4){
        cout << i << endl;
    }

    return 0;
}