//
// Created by qkrtn on 2022-02-19.
// Link : https://www.acmicpc.net/problem/1712

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c;
    cin >> a >> b >> c;

    if (b < c) {
        cout << a / (c - b) + 1;
    } else {
        cout << -1;
    }

    return 0;
}