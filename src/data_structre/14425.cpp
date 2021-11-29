//
// Created by qkrtn on 2021-11-29.
// Link : https://www.acmicpc.net/problem/14425

#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    int N, M, cnt=0;

    cin >> N >> M;

    map<string, string> m;
    while(N--) {
        string key;
        cin >> key;
        m.insert(make_pair(key, "s"));
    }

    m.insert(make_pair("end", "s"));

    while(M--) {
        string s;
        cin >> s;
        auto it = m.find(s);
        if(it != m.end()) {
            cnt++;
            continue;
        }
    }

    cout << cnt;

    return 0;
}
