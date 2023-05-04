//
// Created by qkrtn on 2021-12-21.
// Link : https://www.acmicpc.net/problem/1152

#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int cnt = 1;
    string str1;

    getline(cin, str1);

    if (str1.empty()) {
        cnt = 0;
    } else {
        for (char i: str1) {
            if (i == ' ') {
                cnt++;
            }
        }
        if (str1[0] == ' ') {
            cnt--;
        }
        if (str1[str1.length() - 1] == ' ') {
            cnt--;
        }
    }

    cout << cnt;

    return 0;
}