//
// Created by qkrtn on 2021-12-23.
// Link : https://www.acmicpc.net/problem/10872

#include <iostream>

using namespace std;

int factorial(int n) {
    if(n <= 1) {
        return 1;
    }else {
        return factorial(n-1) * n;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    cout << factorial(N);

    return 0;
}