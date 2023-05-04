//
// Created by qkrtn on 2021-11-24.
// Link : https://www.acmicpc.net/problem/9012

#include <iostream>
#include <stack>

using namespace std;

string solve(string str) {
    stack<int> st;
    for (int i = 0; i < (int) str.size(); ++i) {
        if (str[i] == '(') {
            st.push('(');
        } else {
            if (st.empty()) return "NO";
            st.pop();
        }
    }

    if(st.empty()) return "YES";
    return "NO";
}

int main() {
    int len;

    cin >> len;

    while (len--) {
        string s;
        cin >> s;
        cout << solve(s) << '\n';
    }

    return 0;
}