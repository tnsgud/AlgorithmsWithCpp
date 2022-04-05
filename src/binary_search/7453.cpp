//
// Created by User on 2022-04-05.
// Link : https://www.acmicpc.net/problem/7453

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> a, b;
    long long ans = 0;
    int N, arr[4001][4];
    cin >> N;

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < 4; ++j) {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            a.push_back(arr[i][0] + arr[j][1]);
            b.push_back(arr[i][2] + arr[j][3]);
        }
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    for (int i : a) {
        int B_pre = lower_bound(b.begin(), b.end(), -i) - b.begin();
        int B_end = upper_bound(b.begin(), b.end(), -i) - b.begin();

        ans += (B_end - B_pre);
    }

    cout << ans;

    return 0;
}