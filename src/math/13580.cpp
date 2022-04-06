//
// Created by soon on 2022-04-06.
// Link : https://www.acmicpc.net/problem/13580

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int arr[3];
    for (int &i: arr) {
        cin >> i;
    }

    sort(arr, arr + 3);
    if (arr[0] == arr[1] || arr[1] == arr[2] || arr[0] + arr[1] == arr[2]) {
        cout << "S";
    } else {
        cout << "N";
    }

    return 0;
}