//
// Created by qkrtn on 2021-12-29.
// Link : https://www.acmicpc.net/problem/17298

#include <iostream>
#include <stack>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    int *num = new int[N], *out = new int[N];
    stack<int> st1;

    for (int i = 0; i < N; ++i) {
        cin >> num[i];
    }

    for (int i = N - 1; i >= 0; --i) {
        while (!st1.empty() && st1.top() <= num[i]) {
            st1.pop();
        }

        if (st1.empty()) {
            out[i] = -1;
        } else {
            out[i] = st1.top();
        }

        st1.push(num[i]);
    }

    for (int i = 0; i < N; ++i) {
        cout << out[i] << ' ';
    }
    return 0;
}