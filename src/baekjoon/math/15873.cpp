//
// Created by soon on 2022-04-07.
// Link : https://www.acmicpc.net/problem/15873

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, a = 0, b = 0;
    cin >> n;

    if (n / 10 > 10) {
        a = n/100;
        b = n%100;
    } else {
        a = n/10;
        b = n%10;
    }

    cout << a + b;

    return 0;
}