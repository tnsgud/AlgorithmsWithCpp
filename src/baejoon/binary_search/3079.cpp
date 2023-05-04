//
// Created by qkrtn on 2021-12-28.
// Link : https://www.acmicpc.net/problem/3079

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;

    vector<int> times;
    times.resize(N);

    long long maxValue;

    for (int i = 0; i < N; ++i) {
        cin >> times[i];
        maxValue = max((long long) times[i], maxValue);
    }

    long long left = 0, right = maxValue * M, mid, ans = 0;

    while (left <= right) {
        long long cnt = 0;
        mid = (left + right) / 2;

        for (auto time: times) {
            cnt += mid / time;
        }

        if (M <= cnt) {
            ans = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    cout << ans;

    return 0;
}