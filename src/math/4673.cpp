//
// Created by qkrtn on 2021-12-19.
// Link : https://www.acmicpc.net/problem/4673

#include <iostream>
#include <string>

using namespace std;

int nums[1000000] = {0,};

int d(int n) {
    int a = n;

    while (true) {
        if (n == 0) {
            break;
        }

        a += n % 10;
        n = n / 10;
    }

    return a;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    for (int i = 1; i <= 10000; ++i) {
        nums[d(i)]++;
    }

    for (int i = 1; i <= 10000; ++i) {
        if(nums[i] == 0) {
            cout << i << '\n';
        }
    }

    return 0;
}