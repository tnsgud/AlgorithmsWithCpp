//
// Created by tnsgud on 2021-11-09.
// Link : https://www.acmicpc.net/problem/2739

#include <iostream>

using namespace std;

int main() {
    int a;
    cin >> a;

    for (int i = 1; i < 10; ++i) {
        cout << a << " * " << i << " = " << a*i << '\n';
    }
}