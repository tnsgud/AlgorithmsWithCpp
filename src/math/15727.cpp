//
// Created by User on 2022-01-29.
// Link : https://www.acmicpc.net/problem/15727

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    int o = N / 5 + (N % 5 != 0 ? 1 : 0);
    cout << o;

    return 0;
}