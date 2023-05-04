//
// Created by qkrtn on 2021-12-30.
// Link : https://www.acmicpc.net/problem/5430

#include <iostream>
#include <string>
#include <sstream>
#include <deque>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int n, idx = 0, li;
        bool flag = false, error = false;
        string cmd, items, token;
        cin >> cmd >> n >> items;

        items = items.substr(1, items.length() - 2);
        istringstream iss(items);

        deque<int> deque1;

        while (getline(iss, token, ',')) {
            deque1.push_back(stoi(token));
        }

        li = n - 1;

        for (auto c: cmd) {
            if (c == 'R') {
                flag = !flag;
                swap(idx, li);
            } else if (c == 'D') {
                if ((flag && idx < li) || (!flag && li < idx)) {
                    error = true;
                    break;
                } else {
                    if (flag) {
                        idx--;
                    } else {
                        idx++;
                    }
                }
            }
        }

        if (error) {
            cout << "error\n";
        } else {
            cout << '[';

            if (flag) {
                for (int i = idx; li <= i; --i) {
                    cout << deque1[i];
                    if (i != li) {
                        cout << ',';
                    }
                }
            } else {
                for (int i = idx; i <= li; ++i) {
                    cout << deque1[i];
                    if (i != li) {
                        cout << ',';
                    }
                }
            }

            cout << "]\n";
        }
    }

    return 0;
}