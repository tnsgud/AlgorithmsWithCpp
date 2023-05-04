//
// Created by qkrtn on 2022-03-30.
// Link : https://www.acmicpc.net/problem/11549

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, tmp, ans = 0;
    cin >> t;

    for (int i = 0; i < 5; i++) {
        cin >> tmp;
        if (t == tmp) {
            ans += 1;
        }
    }
    cout << ans;

    return 0;
}