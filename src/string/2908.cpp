//
// Created by qkrtn on 2021-12-27.
// Link : https://www.acmicpc.net/problem/2908

#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int out[2];
    string in[2];
    cin >> in[0] >> in[1];

    for (int i = 0; i < 2; ++i) {
        string tmp;
        for (int j = 2; 0 <= j; --j) {
            tmp += in[i].at(j);
        }
        out[i] = stoi(tmp);
    }

    cout << (out[0] < out[1] ? out[1] : out[0]);

    return 0;
}