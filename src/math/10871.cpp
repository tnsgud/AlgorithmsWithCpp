//
// Created by qkrtn on 2021-12-10.
// Link : https://www.acmicpc.net/problem/10871

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, K;
    cin >> N >> K;

    for (int i = 0; i < N; ++i) {
        int a;
        cin >> a;
        if(a < K)
            cout << a << ' ';
    }

    return 0;
}