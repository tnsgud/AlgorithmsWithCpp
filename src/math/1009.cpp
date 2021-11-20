//
// Created by tnsgud on 2021-11-06.
// Link : https://www.acmicpc.net/problem/1009

#include<iostream>

using namespace std;

int main() {
    int index = 0, task = 0, a, b;

    cin >> index;

    for (int i = 0; i < index; ++i) {
        cin >> a >> b;

        task = a;

        for (int j = 0; j < b - 1; ++j) {
            task = task * a % 10;
        }

        cout << ((task % 10 == 0) ? 10 : task % 10) << '\n';
    }

    return 0;
}