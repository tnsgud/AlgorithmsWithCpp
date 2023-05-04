//
// Created by qkrtn on 2022-04-01.
// Link : https://www.acmicpc.net/problem/15726

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long a, b, c;
    cin >> a >> b >> c;

    long long n1 = (double)(a* b)/c;
    long long n2 = ((double)a/b) * c;

    cout << max(n1, n2);

    return 0;
}