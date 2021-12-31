//
// Created by qkrtn on 2021-12-31.
// Link : https://www.acmicpc.net/problem/2751

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    int *arr = new int[N];

    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }

    sort(arr, arr+N);

    for (int i = 0; i < N; ++i) {
        cout << arr[i] << '\n';
    }

    return 0;
}