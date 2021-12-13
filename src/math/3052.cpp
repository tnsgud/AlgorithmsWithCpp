//
// Created by qkrtn on 2021-12-14.
// Link : https://www.acmicpc.net/problem/3052

#include <iostream>


using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);


    int arr[43] = {0,}, out = 0;

    for (int i = 0; i < 10; i++) {
        int a, idx;
        cin >> a;

        idx = a % 42;

        if (arr[idx] == 0) {
            arr[idx]++;
        }
    }

    for (auto a: arr) {
        if (a != 0) {
            out++;
        }
    }

    cout << out;
    return 0;
}