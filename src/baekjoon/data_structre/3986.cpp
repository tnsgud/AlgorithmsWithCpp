//
// Created by qkrtn on 2021-11-27.
// Link : https://www.acmicpc.net/problem/3986

#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
    int N, cnt=0;
    cin >> N;

    while (N--) {
        string input;
        stack<char> st;
        cin >> input;

        for (char a: input) {
            if (st.empty()) {
                st.push(a);
            } else {
                if (st.top() == a) {
                    st.pop();
                } else {
                    st.push(a);
                }
            }
        }
        if(st.empty()) {
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}