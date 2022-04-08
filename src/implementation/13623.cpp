//
// Created by qkrtn on 2022-04-09.
// Link : https://www.acmicpc.net/problem/13623

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c;
    cin >> a >> b >> c;

    if (a == 1 && b == 0 && c == 0) {
        cout << 'A';
    } else if (a == 0 && b == 1 && c == 1) {
        cout << 'A';
    } else if (a == 0 && b == 1 && c == 0) {
        cout << 'B';
    } else if (a == 1 && b == 0 && c == 1) {
        cout << 'B';
    } else if (a == 0 && b == 0 && c == 1) {
        cout << 'C';
    } else if (a == 1 && b == 1 && c == 0) {
        cout << 'C';
    } else {
        cout << '*';
    }

    return 0;
}