//
// Created by qkrtn on 2022-03-25.
// Link : https://www.acmicpc.net/problem/1260

#include <iostream>
#include <vector>
#include <queue>
#include <functional>

using namespace std;

vector<int> arr[1001];

bool dfsVisible[1001];
bool bfsVisible[1001];


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M, V;
    cin >> N >> M >> V;

    arr->resize(N+1);

    for (int i = 0; i < M; ++i) {
        int n, m;
        cin >> n >> m;
        arr[n].push_back(m);
        arr[m].push_back(n);
    }

    for (int i = 0; i < arr->size(); ++i) {
        sort(arr[i].begin(), arr[i].end());
    }

    function<void(int)> dfs = [&](int a){
        dfsVisible[a] = true;

        cout << a << ' ';

        for (int i : arr[a]) {
            if(!dfsVisible[i]) {
                dfs(i);
            }
        }
    };

    function<void(int)> bfs = [&](int a) {
        queue<int> q;

        q.push(a);
        bfsVisible[a] = true;

        while(!q.empty()) {
            int tmp = q.front();
            q.pop();
            cout << tmp << ' ';

            for (int i = 0; i < arr[tmp].size(); ++i) {
                if(!bfsVisible[arr[tmp][i]]) {
                    q.push(arr[tmp][i]);
                    bfsVisible[arr[tmp][i]] = true;
                }
            }
        }
    };

    dfs(V);
    cout << '\n';
    bfs(V);

    return 0;
}