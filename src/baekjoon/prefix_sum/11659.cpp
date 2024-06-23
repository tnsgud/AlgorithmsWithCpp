//
// Created by 박순형 on 2024. 6. 20..
//
#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    // 입력
    int N, M,  s[100001] = { 0 };

    cin >> N >> M;
    for(int i = 1; i <= N; i++) {
        int num;
        cin  >> num;

        s[i] = s[i-1] + num;
    }

    for(int i = 0; i < M; i++) {
        int n1, n2;

        cin >> n1 >> n2;

        cout << s[n2] - s[n1-1] << '\n';
    }

    return 0;
}
