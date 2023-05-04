//
// Created by qkrtn on 2021-12-17.
// Link : https://www.acmicpc.net/problem/4344

#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout << fixed;
    cout.precision(3);

    int C;
    cin >> C;

    while (C--) {
        int N;
        double sum = 0, cnt = 0;
        cin >> N;
        auto *arr1 = new int[N];
        for (int i = 0; i < N; ++i) {
            cin >> arr1[i];
            sum += arr1[i];
        }

        double avr = sum / (double)N;

        for (int i = 0; i < N; ++i) {
            if (avr < arr1[i]) {
                cnt++;
            }
        }

        cout << (cnt / (double)N) * 100 << '%' << '\n';
    }
    return 0;
}