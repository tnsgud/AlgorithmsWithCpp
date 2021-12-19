//
// Created by qkrtn on 2021-12-20.
// Link : https://www.acmicpc.net/problem/11720

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N, sum = 0;
    cin >> N;

    char *nums_char = new char[N];
    cin >> nums_char;

    for (int i = 0; i < N; ++i) {
        sum += nums_char[i]-'0';
    }

    cout << sum;

    return 0;
}