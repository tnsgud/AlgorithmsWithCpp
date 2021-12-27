//
// Created by qkrtn on 2021-12-27.
// Link : https://www.acmicpc.net/problem/1789

#include <iostream>


using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long sum = 0, S, cnt = 1;
    cin >> S;

    while (true) {
        sum += cnt;

        if(S < sum) {
            cnt--;
            break;
        }

        cnt++;
    }

    cout << cnt;

    return 0;
}