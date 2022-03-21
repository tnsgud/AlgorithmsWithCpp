//
// Created by qkrtn on 2022-03-21.
// Link : https://www.acmicpc.net/problem/2110

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int size, num;
    cin >> size >> num;

    int *arr = new int[size];
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    sort(arr, arr+size);

    int start = 1, end = arr[size-1], answer = -1;
    while(start<=end) {
        int mid = (start+end)/2;
        int cnt=1, last = arr[0];

        for (int i = 1; i < size; ++i) {
            if(arr[i]-last >= mid) {
                cnt++;
                last = arr[i];
            }
        }

        if(cnt >= num) {
            answer= mid;
            start = mid +1;
        }else {
            end = mid -1;
        }
    }

    cout << answer;

    return 0;
}