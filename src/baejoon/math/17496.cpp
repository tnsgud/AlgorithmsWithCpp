//
// Created by qkrtn on 2022-02-10.
// Link : https://www.acmicpc.net/problem/17496

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, T, C, P;
    cin >> N >> T >> C >> P;

    cout << (N-1)/T*C*P;

    return 0;
}