//
// Created by qkrtn on 2022-02-17.
// Link : https://www.acmicpc.net/problem/24183

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.precision(6);

    int c4 = 229*324, a3 = 297*420, a4 = 210*297, a, b, c;
    cin >> a >> b >> c;

    cout << (2 * a * c4 + 2 * b * a3 + c * a4) * 1e-6;

    return 0;
}