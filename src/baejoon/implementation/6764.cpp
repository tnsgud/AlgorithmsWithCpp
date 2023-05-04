//
// Created by qkrtn on 2022-03-06.
// Link : https://www.acmicpc.net/problem/6764

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if (a < b && b < c && c < d) {
        cout << "Fish Rising";
    } else if (a > b && b > c && c > d) {
        cout << "Fish Diving";
    } else if (a == b && b == c && c == d) {
        cout << "Fish At Constant Depth";
    } else {
        cout << "No Fish";
    }

    return 0;
}