//
// Created by qkrtn on 2022-02-28.
// Link : https://www.acmicpc.net/problem/5543

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int min = 100000;
    int burgers[3], drinks[2];

    for (int i = 0; i < 5; ++i) {
        cin >> (i < 3 ? burgers[i]:drinks[i-3]);
    }

    for (auto burger:burgers) {
        for (auto drink:drinks) {
            if(burger+drink < min) {
                min = burger + drink;
            }
        }
    }

    cout << min - 50;

    return 0;
}