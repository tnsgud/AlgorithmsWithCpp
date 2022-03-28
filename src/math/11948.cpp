//
// Created by qkrtn on 2022-03-28.
// Link : https://www.acmicpc.net/problem/11948

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int s[4], m[2];

    for (int & i : s)
        cin >> i;
    sort(s, s+4);
    for (int & i : m)
        cin >> i;
    sort(m, m + 2);
    cout << s[1] + s[2] + s[3] + m[1]<<'\n';

    return 0;
}