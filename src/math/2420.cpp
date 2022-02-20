//
// Created by qkrtn on 2022-02-20.
// Link : https://www.acmicpc.net/problem/2420

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long a, b;
    cin >> a >> b;

    cout << (a - b < 0 ? (a - b) * -1 : a - b);

    return 0;
}