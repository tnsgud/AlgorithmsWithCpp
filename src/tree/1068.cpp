//
// Created by qkrtn on 2022-02-11.
// Link : https://www.acmicpc.net/problem/1068

#include <iostream>
#include <vector>

using namespace std;

int answer = 0, deleteNode;
vector<vector<int>> tree;

void dfs(int nowNode) {
    if (deleteNode == nowNode) return;

    int childCount = tree[nowNode].size();

    if (childCount == 0) {
        answer++;
        return;
    } else if (childCount == 1 && tree[nowNode][0] == deleteNode) {
        answer++;
    } else {
        for (int i = 0; i < childCount; ++i) {
            dfs(tree[nowNode][i]);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, root;
    cin >> N;
    tree.resize(N);

    for (int i = 0; i < N; ++i) {
        int num;
        cin >> num;

        if (num != -1) {
            tree[num].push_back(i);
        }else {
            root = i;
        }
    }

    cin >> deleteNode;
    dfs(root);

    cout << answer;
    return 0;
}