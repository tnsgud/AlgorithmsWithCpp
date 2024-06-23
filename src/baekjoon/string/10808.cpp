//
// Created by 박순형 on 2024. 6. 14..
//
#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    int cnt[26] = {0,};

    cin >> s;

    for(int i=0;i<s.length(); i++) {
        int index = s.at(i)-97;

        cnt[index]++;
    }

    for(int c: cnt) {
        cout << c << ' ';
    }

    return 0;
}