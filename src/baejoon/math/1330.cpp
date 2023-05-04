//
// Created by tnsgud on 2021-11-03.
// Link : https://www.acmicpc.net/problem/1330

#include <iostream>

using namespace std;

int main() {
    int a, b;

    cin >> a >> b;

    if( a == b)
        cout << "==";
    else if(a < b)
        cout << "<";
    else if(b < a)
        cout << ">";

    return 0;
}