//
// Created by qkrtn on 2022-03-29.
// Link : https://www.acmicpc.net/problem/11943

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a[2], b[2];
    for (int &i: a) {
        cin >> i;
    }

    for (int &i: b) {
        cin >> i;
    }

    cout << min(a[0]+b[1], a[1]+b[0]);

    return 0;
}