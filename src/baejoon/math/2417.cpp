//
// Created by qkrtn on 2022-01-05.
// Link : https://www.acmicpc.net/problem/2417

#include <iostream>
#include <math.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long N, q;
    cin >> N;

    q = sqrt(N);

    if((q*q) < N) {
        ++q;
    }

    cout << q;

    return 0;
}