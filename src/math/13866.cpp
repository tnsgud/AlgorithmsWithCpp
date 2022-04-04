//
// Created by User on 2022-04-04.
// Link : https://www.acmicpc.net/problem/13866

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    cout << abs((a+d)-(b+c));

    return 0;
}