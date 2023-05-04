//
// Created by qkrtn on 2021-12-05.
// Link : https://www.acmicpc.net/problem/14916

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N, ans, cnt;
    cin >> N;

    if (N < 5) {
        if (N % 2 != 0) {
            ans = -1;
        } else {
            ans = (N / 2);
        }
    } else {
        cnt = N / 5;
        N = N % 5;
        if (N % 2 == 0) {
            cnt += N / 2;
        } else {
            cnt += (N + 5) / 2 - 1;
        }

        ans = cnt;
    }

    cout << ans;
}