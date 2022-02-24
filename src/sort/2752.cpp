//
// Created by qkrtn on 2022-02-24.
// Link : https://www.acmicpc.net/problem/2752

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    auto in = new int[3];

    for (int i = 0; i < 3; ++i) {
        cin >> in[i];
    }

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if(in[i] < in[j]) {
                int tmp = in[j];
                in[j] = in[i];
                in[i] = tmp;
            }
        }
    }

    for (int i = 0; i < 3; ++i) {
        cout << in[i] << ' ';
    }

    return 0;
}