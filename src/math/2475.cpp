//
// Created by qkrtn on 2022-01-06.
// Link : https://www.acmicpc.net/problem/2475

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int num = 0;
    for (int i = 0; i < 5; ++i) {
        int t;
        cin >> t;
        num += t*t;
    }

    cout << num%10;

    return 0;
}