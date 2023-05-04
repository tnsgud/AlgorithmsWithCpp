//
// Created by qkrtn on 2021-12-27.
// Link : https://www.acmicpc.net/problem/2750

#include <iostream>

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

    for (int i = 0; i < N; ++i) {
        for (int j = i; j < N; ++j) {
            if(arr[j] < arr[i]) {
                int t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
        }
    }

    for (int i = 0; i < N; ++i) {
        cout << arr[i] << '\n';
    }

    return 0;
}