//
// Created by 박순형 on 2024. 6. 23..
//
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N, M;
    cin >> N;
    cin >> M;

    vector<int> num(N, 0);

    for(int i = 0; i < N; i++) {
        cin >> num[i];
    }

    sort(num.begin(), num.end());

    int p1 = 0, p2 = N-1, count = 0;

    while(p1 < p2) {
        int n = num[p1] + num[p2];
        if(n < M) {
            p1++;
            continue;
        }

        if(n > M) {
            p2--;
            continue;
        }

        count++;
        p1++;
        p2--;
    }

    cout << count << '\n';

    return 0;
}

