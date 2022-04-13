//
// Created by qkrtn on 2022-04-10.
// Link : https://www.acmicpc.net/problem/14038

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int cnt = 0;

    for (int i = 0; i < 6; ++i) {
        char s;
        cin >> s;
        if(s == 'W') {
            cnt++;
        }
    }

    if(cnt >4) {
        cout << 1;
    }else if(cnt > 2) {
        cout << 2;
    }else if(cnt > 0) {
        cout << 3;
    }else {
        cout << -1;
    }


    return 0;
}