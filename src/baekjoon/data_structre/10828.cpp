//
// Created by tnsgud on 2021-11-18.
// Link : https://www.acmicpc.net/problem/10828

#include <iostream>
#include<string>
#include<stack>

using namespace std;

int main() {
    int length, result;
    string cmd;
    stack<int> stack1;

    cin >> length;

    while (length--) {
        cin >> cmd;

        if (cmd == "push") {
            cin >> result;
            stack1.push(result);
        } else if (cmd == "pop") {
            if (stack1.empty()) {
                result = -1;
            } else {
                result = stack1.top();
                stack1.pop();
            }

            cout << result << '\n';
        } else if (cmd == "size") {
            cout << stack1.size() << '\n';
        } else if (cmd == "empty") {
            cout << stack1.empty() << '\n';
        } else if (cmd == "top") {
            if (stack1.empty()) {
                result = -1;
            } else {
                result = stack1.top();
            }
            cout << result << '\n';
        }
    }

    return 0;
}