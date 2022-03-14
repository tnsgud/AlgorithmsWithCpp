//
// Created by qkrtn on 2022-03-14.
// Link : https://www.acmicpc.net/problem/8723

#include <iostream>
#include <math.h>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int arr[3];
    for (int & i : arr) {
        cin >> i;
    }

    sort(arr, arr+3);
    if(arr[0] == arr[1] && arr[0] == arr[2]) {
        cout << 2;
    }else if(pow(arr[0], 2)+pow(arr[1], 2) == pow(arr[2], 2)) {
        cout << 1;
    }else {
        cout << 0;
    }

    return 0;
}