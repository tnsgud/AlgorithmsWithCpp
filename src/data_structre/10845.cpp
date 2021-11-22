//
// Created by qkrtn on 2021-11-22.
// Link : https://www.acmicpc.net/problem/10845

#include <iostream>
#include <string>
#include <queue>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N;
    string cmd;

    cin >> N;
    queue<int> Q;

    while(N--) {
        cin >> cmd;

        if(cmd == "push") {
            int x; cin >> x;
            Q.push(x);
        }else if(cmd == "pop") {
            if(!Q.empty()){
                cout << Q.front() << '\n';
                Q.pop();
            }else {
                cout << -1 << '\n';
            }
        }else if(cmd == "size") {
            cout << Q.size() << '\n';
        }else if(cmd == "empty") {
            cout << Q.empty() << '\n';
        }else if(cmd == "front") {
            if(!Q.empty()){
                cout << Q.front() << '\n';
            }else {
                cout << -1 << '\n';
            }
        }else if(cmd == "back") {
            if(!Q.empty()){
                cout << Q.back() << '\n';
            }else {
                cout << -1 << '\n';
            }
        }
    }

    return 0;
}