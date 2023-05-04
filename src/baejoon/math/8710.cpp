//
// Created by qkrtn on 2022-03-10.
// Link : https://www.acmicpc.net/problem/8710

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k, w, m, cnt = 0;
    cin >> k >> w >> m;

    while(k < w) {
        k += m;
        cnt++;
    }

    cout << cnt;

    return 0;
}