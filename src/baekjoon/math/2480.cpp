//
// Created by qkrtn on 2022-02-22.
// Link : https://www.acmicpc.net/problem/2480

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int d1, d2, d3;

    cin >> d1 >> d2 >> d3;

    if(d1 == d2 && d2 == d3) {
        cout << 10000 + d1 * 1000;
        return 0;
    }

    if(d1 == d2 && d1 != d3) {
        cout << 1000 + d1 * 100;
        return 0;
    }

    if(d2 == d3 && d1 != d2) {
        cout << 1000 + d2 * 100;
        return 0;
    }

    if(d1 == d3 && d1 != d2) {
        cout << 1000 + d1 * 100;
        return 0;
    }

    if(d2 < d1 && d3 < d1)  {
        cout <<  d1 * 100;
        return 0;
    }

    if(d1 < d2 && d3 < d2) {
        cout << d2 * 100;
        return 0;
    }

    if(d1 < d3 && d2 < d3)  {
        cout << d3 * 100;
        return 0;
    }

    return 0;
}