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
    cin >> N >> M;

    vector<vector<int>> num(N+1,vector<int>(N+1, 0));
    vector<vector<int>> s(N+1,vector<int>(N+1, 0));
    vector<int> answer(M, 0);

    for(int i = 1; i <= N; i++) {
        for(int j = 1; j <= N; j++) {
            cin >> num[i][j];
        }
    }

    // 합배열 만들기
    for(int i = 1; i <= N; i++) {
        for(int j = 1; j <= N; j++) {
            s[i][j] = s[i][j-1] + s[i-1][j] - s[i-1][j-1] + num[i][j];
        }
    }

    for(int i = 0; i < M; i++) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        answer[i] = s[x2][y2] - s[x2][y1-1] - s[x1-1][y2] + s[x1-1][y1-1];
    }

    for(auto ans : answer) {
        cout << ans << '\n';
    }

    return 0;
}
