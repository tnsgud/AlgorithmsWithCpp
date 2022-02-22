//
// Created by qkrtn on 2022-02-23.
// Link : https://www.acmicpc.net/problem/2530

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int h, m, s, i;
    cin >> h >> m >> s >> i;

    s += i;
    m += s / 60;
    s = s % 60;
    h += m / 60;
    m = m % 60;

    cout << h%24 << ' ' << m << ' ' << s;

    return 0;
}