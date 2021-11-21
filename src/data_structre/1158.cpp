//
// Created by qkrtn on 2021-11-21.
// Link : https://www.acmicpc.net/problem/1158

#include <iostream>
#include <queue>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N, K;

    cin >> N >> K;
    queue<int> Q;
    for (int i = 0; i < N; ++i) Q.push(i + 1);

    cout << "<";

    while(true) {

        for (int i = 1; i < K; ++i) {
            Q.push(Q.front());
            Q.pop();
        }

        cout << Q.front();
        Q.pop();

        if(!Q.empty())
            cout << ", ";
        else break;
    }

    cout << ">";

    return 0;
}