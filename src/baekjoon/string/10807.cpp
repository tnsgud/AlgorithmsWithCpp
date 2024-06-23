//
// Created by 박순형 on 2024. 6. 14..
//
#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, nums[100], v, count = 0;

    cin >> N;

    for(int i = 0; i < N; i++) {
        cin >> nums[i];
    }

    cin >> v;

    for(int i = 0; i < N; i++) {
        if(nums[i] == v) count++;
    }

    cout << count;

    return 0;
}v
