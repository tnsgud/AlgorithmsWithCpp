//
// Created by soon on 2022-04-14.
// Link : https://www.acmicpc.net/problem/14264

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double a;
    cin >> a;

    cout.precision(10);
    cout << a * a * sqrt(3) / 4;

    return 0;
}