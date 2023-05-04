//
// Created by qkrtn on 2021-12-08.
// Link : https://www.acmicpc.net/problem/10773

#include <iostream>
#include <stack>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int K, sum = 0;
    cin >> K;

    stack<int> st;

    while (K--) {
        int k;
        cin >> k;

        if (k == 0) {
            sum -= st.top();
            st.pop();
        } else {
            sum += k;
            st.push(k);
        }
    }

    cout << sum;

    return 0;
}