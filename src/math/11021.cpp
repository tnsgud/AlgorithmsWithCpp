//
// Created by qkrtn on 2021-12-04.
// Link : https://www.acmicpc.net/problem/11021

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N;
    cin >> N;
    for (int i = 0; i < N; ++i) {
        int a, b;
        cin >> a >> b;

        cout << "Case #" << i+1 << ": " << (a+b) << '\n';
    }
}