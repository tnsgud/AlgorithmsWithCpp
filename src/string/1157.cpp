//
// Created by qkrtn on 2021-12-26.
// Link : https://www.acmicpc.net/problem/1157

#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int cnt[26] = {0,}, idx = 0, max=0;

    string S;
    cin >> S;

    for (int i = 0; i < S.length(); ++i) {
        auto c = toupper(S.at(i));
        cnt[c-65]++;

        if (max <= cnt[c-65]) {
            max = cnt[c-65];
            idx = c-65;
        }
    }

    for (int i = 0; i < 26; ++i) {
        if (max == cnt[i] && idx != i) {
            cout << '?';
            break;
        }

        if(i == 25) {
            cout << (char)(idx+65);
        }
    }

    return 0;
}