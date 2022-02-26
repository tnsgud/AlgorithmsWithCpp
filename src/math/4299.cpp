//
// Created by qkrtn on 2022-02-26.
// Link : https://www.acmicpc.net/problem/4299

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int p, m;
    cin >> p >> m;

    if(p < m) {
        cout << -1;
        return 0;
    }

    int a = (p + m) / 2;
    int b = p - a;

    if (abs(a-b) != m) {
        cout << -1;
    } else {
        cout << max(a, b) << ' ' << min(a, b);
    }

    return 0;
}