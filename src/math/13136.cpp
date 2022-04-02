//
// Created by qkrtn on 2022-04-02.
// Link : https://www.acmicpc.net/problem/13136

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long R, C, N;
    cin >> R >> C >> N;

    auto r = R / N + (R % N ? 1 : 0);
    auto c = C / N + (C % N ? 1 : 0);

    cout << r * c;

    return 0;
}