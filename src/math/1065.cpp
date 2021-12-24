//
// Created by qkrtn on 2021-12-24.
// Link : https://www.acmicpc.net/problem/1065

#include <iostream>

using namespace std;

bool hansu(int n) {
    int d, a1, a2;

    d = n % 10 - (n / 10) % 10;


    while (true) {
        if (n < 10) {
            return true;
        }

        a1 = n % 10;
        a2 = (n / 10) % 10;

        if (d == a1 - a2) {
            n /= 10;
            continue;
        } else {
            return false;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, cnt = 0;
    cin >> N;

    for (int i = 1; i <= N; ++i) {
        if (hansu(i)) {
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}