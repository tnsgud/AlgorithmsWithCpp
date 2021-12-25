//
// Created by qkrtn on 2021-12-25.
// Link : https://www.acmicpc.net/problem/10809

#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string S;
    cin >> S;

    for (char i = 'a'; i <= 'z'; i++) {
        auto c = S.find(i);
        if (c == string::npos) {
            cout << -1 << ' ';
        } else {
            cout << c << ' ';
        }
    }

    return 0;
}