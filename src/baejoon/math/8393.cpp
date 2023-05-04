//
// Created by qkrtn on 2021-11-30.
// Link : https://www.acmicpc.net/problem/8393

#include <iostream>

using namespace std;

int main() {
    int N, sum=0;
    cin >> N;

    for (int i = 0; i < N; ++i) {
        sum += i+1;
    }

    cout << sum;

    return 0;
}