//
// Created by qkrtn on 2022-02-13.
// Link : https://www.acmicpc.net/problem/20254

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    cout << (a * 56) + (b * 24) + (c * 14) + (d * 6);

    return 0;
}