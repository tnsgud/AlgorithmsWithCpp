//
// Created by qkrtn on 2022-03-15.
// Link : https://www.acmicpc.net/problem/10156

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k, n, m;
    cin >> k >> n >> m;

    int a = k * n - m;

    if(a < 0) {
        cout << 0;
    }else {
        cout << a;
    }

    return 0;
}