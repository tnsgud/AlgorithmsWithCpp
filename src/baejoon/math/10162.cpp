//
// Created by qkrtn on 2022-03-18.
// Link : https://www.acmicpc.net/problem/10162

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c, t;
    cin >> t;

    if (t % 10 != 0) {
        cout << -1;
    } else {
        a = t / 300;
        b = (t % 300) / 60;
        c = (t % 300 % 60) / 10;
        cout << a << " " << b << " " << c;
    }

    return 0;
}