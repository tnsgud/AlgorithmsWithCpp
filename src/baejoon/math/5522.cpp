//
// Created by qkrtn on 2021-12-30.
// Link : https://www.acmicpc.net/problem/5522

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        int t;
        cin >> t;
        sum += t;
    }

    cout << sum;

    return 0;
}