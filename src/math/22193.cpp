//
// Created by qkrtn on 2022-02-16.
// Link : https://www.acmicpc.net/problem/22193

#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    string a, b;
    cin >> a >> b;

    int result[100000];

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            int temp = (a[n - 1 - j] - '0') * (b[m - 1 - i] - '0');
            result[n + m - 1 - i - j] += temp;
        }
    }

    for (int i = n + m - 1; i > 0; i--) {
        result[i - 1] += result[i] / 10;
        result[i] %= 10;
    }

    bool check = false;
    for (int i = 0; i < n + m; i++) {
        if (!check) {
            if (result[i] != 0)
                check = true;
            else if (i == n + m - 1)
                cout << "0";
        }
        if (check)
            cout << result[i];
    }

    return 0;
}z