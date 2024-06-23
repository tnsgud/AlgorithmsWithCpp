//
// Created by 박순형 on 2024. 6. 23..
//
#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N, M;
    long answer = 0l;
    cin >> N >> M;

    vector<long> s(N+1, 0), c(M, 0);

    cin >> s[0];

    for(int i = 1; i < N; i++) {
        int num;
        cin >> num;

        s[i] = s[i-1] + num;
    }

    for(int i = 0; i < N; i++) {
        int num = s[i] % M;

        if(num == 0) {
            answer++;
        }

        c[num]++;
    }

    for(int i = 0; i < M; i++) {
        if(c[i] > 1) {
            answer += c[i] * (c[i] - 1) / 2;
        }
    }

    cout << answer;

    return 0;
}
