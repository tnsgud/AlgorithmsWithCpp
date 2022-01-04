//
// Created by qkrtn on 2022-01-05.
// Link : https://www.acmicpc.net/problem/1300

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, k;
    cin >> N >> k;

    int l = 1, r = k, m, result = 0;

    while (true) {
        if (l > r) break;
        m = (l + r) / 2;

        int cnt = 0;
        for (int i = 1; i <= N; ++i) {
            cnt += min(m / i, N);
        }

        if (k <= cnt) {
            result = m;
            r = m - 1;
        } else {
            l = m + 1;
        }
    }

    cout << result;

    return 0;
}