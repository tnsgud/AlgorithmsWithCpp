//
// Created by User on 2022-02-03.
// Link : https://www.acmicpc.net/problem/15964

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long a, b;

    cin >> a >> b;

    cout << (a + b) * (a - b);

    return 0;
}