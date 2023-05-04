//
// Created by qkrtn on 2022-03-02.
// Link : https://www.acmicpc.net/problem/5596

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int S = 0, T = 0;
    for (int i = 0; i < 2; ++i) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        (i < 1 ? S : T) = a + b + c + d;
    }

    cout << (S < T ? T : S);

    return 0;
}