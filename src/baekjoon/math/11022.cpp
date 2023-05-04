//
// Created by qkrtn on 2021-12-08.
// Link : https://www.acmicpc.net/problem/11022

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    for (int i = 0; i < T; ++i) {
        int a, b;
        cin >> a >> b;

        cout << "Case #" << i + 1 << ": " << a << " + " << b << " = " << a + b << '\n';
    }

    return 0;
}