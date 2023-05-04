//
// Created by tnsgud on 2021-11-13.
// Link : https://www.acmicpc.net/problem/10430

#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    cout << (a+b)%c << '\n' << ((a%c) + (b%c))%c << '\n' << (a*b)%c << '\n' << ((a%c) * (b%c))%c;

    return 0;
}