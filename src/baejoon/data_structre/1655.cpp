//
// Created by soon on 2022-04-19.
// Link : https://www.acmicpc.net/problem/1655

#include <iostream>
#include <queue>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    priority_queue<int> max;
    priority_queue<int, vector<int>, greater<>> min;
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;

        if (max.size() == min.size()) {
            max.push(a);
        } else {
            min.push(a);
        }

        if (!min.empty() && !max.empty() && max.top() > min.top()) {
            int maxVal, minVal;
            maxVal = max.top();
            minVal = min.top();
            max.pop();
            min.pop();
            max.push(minVal);
            min.push(maxVal);
        }

        cout << max.top() << '\n';
    }

    return 0;
}