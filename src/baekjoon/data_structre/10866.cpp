//
// Created by tnsgud on 2021-11-17.
// Link : https://www.acmicpc.net/problem/10866

#include <iostream>
#include <string>
#include<deque>

using namespace std;

int main() {
    int length, num, result;
    deque<int> deque1;
    string cmd;

    cin >> length;

    while (length--) {
        cin >> cmd;

        if (cmd == "push_front") {
            cin >> num;
            deque1.push_front(num);
        } else if (cmd == "push_back") {
            cin >> num;
            deque1.push_back(num);
        } else if (cmd == "pop_front") {
            if (deque1.empty()) {
                result = -1;
            } else {
                result = deque1.front();
                deque1.pop_front();
            }

            cout << result << '\n';
        } else if (cmd == "pop_back") {
            if (deque1.empty()) {
                result = -1;
            } else {
                result = deque1.back();
                deque1.pop_back();
            }

            cout << result << '\n';
        } else if (cmd == "size") {
            if (deque1.empty()) {
                result = 0;
            } else {
                result = deque1.size();
            }

            cout << result << '\n';
        } else if (cmd == "empty") {
            cout << deque1.empty() << '\n';
        } else if (cmd == "front") {
            if (deque1.empty()) {
                result = -1;
            } else {
                result = deque1.front();
            }

            cout << result << '\n';
        } else if (cmd == "back") {
            if (deque1.empty()) {
                result = -1;
            } else {
                result = deque1.back();
            }

            cout << result << '\n';
        }
    }

    return 0;
}