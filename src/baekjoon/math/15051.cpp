//
// Created by qkrtn on 2022-04-25.
// Link : https://www.acmicpc.net/problem/15051

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a1, a2, a3;
    cin >> a1 >> a2 >> a3;

    cout << min(a2 * 2 + a3 * 4, min(a1 * 2 + a3 * 2, a1 * 4 + a2 * 2));

    return 0;
}