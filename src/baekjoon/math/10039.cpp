//
// Created by qkrtn on 2022-03-11.
// Link : https://www.acmicpc.net/problem/10039

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int arr[5], sum = 0;
    for (int &i: arr) {
        cin >> i;
        if (i < 40) {
            sum += 40;
        } else {
            sum += i;
        }
    }

    cout << sum / 5;

    return 0;
}