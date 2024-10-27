// PFLAB5-TASK3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "ENTER A TABLE:";
    cin >> num;
    for (int i = 1; i <= 10; i++)
    {
        cout << num << "*" << i << "=" << num * i << endl;
    }
    return 0;
}