//
// Created by qkrtn on 2022-02-22.
// Link : https://www.acmicpc.net/problem/2525

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int h, m, i;
    cin >> h >> m >> i;

    m += i;
    h += m/60;
    m %= 60;

    cout << h%24 << ' ' << m;

    return 0;
}