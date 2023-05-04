//
// Created by tnsgud on 2021-11-19.
// Link : https://www.acmicpc.net/problem/18258

#include <iostream>
#include <string>
#include <queue>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int length;
    queue<int> queue1;
    cin >> length;

    while (length--) {
        string cmd;
        cin >> cmd;

        if (cmd == "push") {
            int x;
            cin >> x;
            queue1.push(x);
        } else if (cmd == "pop") {
            if (queue1.empty()) {
                cout << -1 << '\n';
            } else {
                cout << queue1.front() << '\n';
                queue1.pop();
            }
        } else if (cmd == "size") {
            cout << (int) queue1.size() << '\n';
        } else if (cmd == "empty") {
            cout << queue1.empty() << '\n';
        } else if (cmd == "front") {
            if (queue1.empty())
                cout << -1 << '\n';
            else
                cout << queue1.front() << '\n';
        } else if (cmd == "back") {
            if (queue1.empty())
                cout << -1 << '\n';
            else
                cout << queue1.back() << '\n';
        }
    }

    return 0;
}

