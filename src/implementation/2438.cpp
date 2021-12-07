//
// Created by qkrtn on 2021-12-08.
// Link : https://www.acmicpc.net/problem/2438

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    string a = "*";

    while(N--) {
        cout << a << '\n';
        a += "*";
    }

    return 0;
}