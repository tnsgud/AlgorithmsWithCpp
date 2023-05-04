//
// Created by qkrtn on 2021-11-25.
// Link : https://www.acmicpc.net/problem/2884

#include <iostream>

using namespace std;

int main() {
    int H, M;

    cin >> H >> M;

    if(M < 45) {
        H = H == 0 ? 23 : H - 1;
        M += 15;
    }else {
        M -= 45;
    }

    cout << H << " " << M;

    return 0;
}