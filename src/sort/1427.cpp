//
// Created by qkrtn on 2021-12-28.
// Link : https://www.acmicpc.net/problem/1427

#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> v1;

    int a;
    cin >> a;

    while (true) {
        if (a / 10 == 0 && a % 10 == 0)
            break;
        v1.push_back(a % 10);
        a /= 10;
    }

    for (int i = 0; i < v1.size(); ++i) {
        for (int j = i; j < v1.size(); ++j) {
            if (v1[i] < v1[j]) {
                swap(v1[i], v1[j]);
            }
        }
    }

    for (auto c: v1) {
        cout << c;
    }

    return 0;
}