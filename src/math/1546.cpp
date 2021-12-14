//
// Created by qkrtn on 2021-12-15.
// Link : https://www.acmicpc.net/problem/1546

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N = 0;
    double sum = 0, max = 0;
    cin >> N;

    auto *arr = new double[N];
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];

        if (max < arr[i]) {
            max = arr[i];
        }
    }

    for (int i = 0; i < N; ++i) {
        arr[i] = (arr[i]/max)*100;
        sum += arr[i];
    }

    cout << sum/((double)N);

    return 0;
}