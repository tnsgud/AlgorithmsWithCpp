//
// Created by qkrtn on 2022-03-26.
// Link : https://www.acmicpc.net/problem/2667

#include <iostream>
#include <vector>
#include <functional>

using namespace std;

string map[25];
bool visited[25][25];
int dx[4] = {0, 1, 0, -1};
int dy[4] = {-1, 0, 1, 0};
vector<int> answer;
int N, cnt;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    function<void(int, int)> dfs = [&](int x, int y) {
        visited[y][x] = true;
        cnt++;

        for (int k = 0; k < 4; ++k) {
            int newX = x + dx[k];
            int newY = y + dy[k];

            if (newX >= 0 && newX < N && newY >= 0 && newY < N) {
                if (map[newY][newX] == '1' && !visited[newY][newX]) {
                    dfs(newX, newY);
                }
            }
        }
    };

    cin >> N;

    for (int i = 0; i < N; ++i) {
        cin >> map[i];
    }

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if(map[i][j]=='1' && !visited[i][j]) {
                cnt = 0;
                dfs(j, i);
                answer.push_back(cnt);
            }
        }
    }

    sort(answer.begin(), answer.end());

    cout << answer.size() << '\n';
    for (int i: answer) {
        cout << i << '\n';
    }

    return 0;
}