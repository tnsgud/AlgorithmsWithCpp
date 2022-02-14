//
// Created by qkrtn on 2022-02-14.
// Link : https://www.acmicpc.net/problem/20492

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int price;
    cin >> price;

    cout << (int) (price * 0.78) << ' ' << (int) (price * 0.8 + price * 0.2 * 0.78);

    return 0;
}