//
// Created by User on 2022-01-30.
// Link : https://www.acmicpc.net/problem/15439

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;

    cin >> N;

    cout << N * (N - 1) << '\n';

    return 0;
}