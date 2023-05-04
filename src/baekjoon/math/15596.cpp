//
// Created by qkrtn on 2021-12-18.
// Link : https://www.acmicpc.net/problem/15596

#include <iostream>
#include <vector>

using namespace std;

long long sum(vector<int> &a) {
    long long ans = 0;
    for(auto num:a) {
        ans += num;
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    return 0;
}