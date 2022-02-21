//
// Created by qkrtn on 2022-02-22.
// Link : https://www.acmicpc.net/problem/2480

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c;
    cin >> a >> b >> c;

    if (a == b && b == c) {
        cout << 10000 + a * 1000;
    } else if (a == b || b == c || a == c) {
        cout << 1000 + (a == b ? a : (b == c ? b : c)) * 100;
    } else {
        cout << (a > b ? a : (b > c ? b : c)) * 100;
    }

    return 0;
}