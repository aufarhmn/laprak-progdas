/*
    Modul 6 Chekpoint 2
    By: Aufa N R
*/

#include <iostream>

using namespace std;

double add(const double nums[], int n);
double avg(double sum, int n);

int main() {
    const int size = 3;
    double nums[size];
    double sum, average;

    cout << "Enter three numbers: ";
    for (int i = 0; i < size; i++) {
        cin >> nums[i];
    }

    sum = add(nums, size);

    average = avg(sum, size);

    cout << "Sum = " << sum << endl;
    cout << "Average = " << average << endl;

    return 0;
}

double add(const double nums[], int n) {
    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        sum += nums[i];
    }
    return sum;
}

double avg(double sum, int n) {
    return sum / n;
}