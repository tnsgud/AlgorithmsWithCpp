//
// Created by qkrtn on 2022-01-16.
// Link : https://www.acmicpc.net/problem/8370

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n1, n2, k1, k2, sum = 0;
    cin >> n1 >> k1 >> n2 >> k2;

    for (int i = 0; i < n1; ++i) {
        sum += k1;
    }

    for (int i = 0; i < n2; ++i) {
        sum += k2;
    }

    cout << sum;

    return 0;
}