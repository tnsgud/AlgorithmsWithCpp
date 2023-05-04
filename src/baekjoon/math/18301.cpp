//
// Created by qkrtn on 2022-02-12.
// Link : https://www.acmicpc.net/problem/18301

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c;

    cin >> a >> b >> c;

    cout << (a + 1) * (b + 1) / (c + 1) - 1;

    return 0;
}