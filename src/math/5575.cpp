//
// Created by qkrtn on 2022-03-01.
// Link : https://www.acmicpc.net/problem/5575

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    for (int i = 0; i < 3; ++i) {
        int startH, startM, startS, endH, endM, endS, h, m, s;
        cin >> startH >> startM >> startS >> endH >> endM >> endS;

        if (endS < startS) {
            s = endS + 60 - startS;
            endM--;
        } else {
            s = endS - startS;
        }

        if (endM < startM) {
            m = endM + 60 - startM;
            endH--;
        } else {
            m = endM - startM;
        }

        h = endH - startH;

        cout << h << ' ' << m << ' ' << s << '\n';
    }

    return 0;
}