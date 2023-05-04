//
// Created by User on 2021-12-13.
// Link : https://www.acmicpc.net/problem/2577

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int a, b, c, cnt[10] = {0,};

    cin >> a >> b >> c;

    string t = to_string(a * b * c);

    for(int i = 0; i < t.size(); i++ ) {
        cnt[t[i]-'0']++;
    }

    for(auto i:cnt) {
        cout << i << '\n';
    }
}