//
// Created by qkrtn on 2022-03-19.
// Link : https://www.acmicpc.net/problem/10768

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int m, d;
    cin >> m >> d;

    if(m == 2  && d == 18) {
        cout << "Special";
    }else if (m < 2 || (m == 2 && d < 18)) {
        cout << "Before";
    }else if(m > 2 || (m==2 && d > 18)) {
        cout << "After";
    }

    return 0;
}