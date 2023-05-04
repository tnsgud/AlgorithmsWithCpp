//
// Created by qkrtn on 2021-12-16.
// Link : https://www.acmicpc.net/problem/8958

#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N;
    cin >> N;
    string *q = new string[N];

    for (int i = 0; i < N; ++i) {
        cin >> q[i];

        int cnt = 0, sum = 0;
        for (int j = 0; j < q[i].size(); ++j) {
            if(q[i][j] == 'O') {
                cnt++;
            }else {
                cnt = 0;
            }
            sum += cnt;
        }

        cout << sum << '\n';
    }

    return 0;
}