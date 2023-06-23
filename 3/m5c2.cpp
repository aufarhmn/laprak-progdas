/*
    Modul 4 Chekpoint 1
    By: Aufa N R
*/

#include <iostream>
#include <cmath>

using namespace std;

void inputBola(double& diameter)
{
    cout << "Masukkan diameter bola: ";
    cin >> diameter;
}

void hitungBola(double diameter, double& luasPermukaan, double& volume)
{
    double jariJari = diameter / 2.0;
    luasPermukaan = 4 * M_PI * pow(jariJari, 2);
    volume = (4.0 / 3.0) * M_PI * pow(jariJari, 3);
}

void cetakBola(double diameter, double luasPermukaan, double volume)
{
    cout << "Diameter bola: " << diameter << endl;
    cout << "Luas permukaan bola: " << luasPermukaan << endl;
    cout << "Volume bola: " << volume << endl;
}

int main()
{
    double diameter, luasPermukaan, volume;
    
    inputBola(diameter);
    
    hitungBola(diameter, luasPermukaan, volume);
    
    cetakBola(diameter, luasPermukaan, volume);
    
    return 0;
}
