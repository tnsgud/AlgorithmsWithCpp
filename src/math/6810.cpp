//
// Created by qkrtn on 2022-03-08.
// Link : https://www.acmicpc.net/problem/6810

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c;
    cin >> a >> b >> c;

    cout << "The 1-3-sum is " << 91 + a * 1 + b * 3 + c * 1;

    return 0;
}