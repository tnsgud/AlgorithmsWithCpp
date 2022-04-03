//
// Created by User on 2022-04-03.
// Link : https://www.acmicpc.net/problem/14924

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int S, T, D;
    cin >> S >> T >> D;

    cout << (D/(S*2)) * T;

    return 0;
}