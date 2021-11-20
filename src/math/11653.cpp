//
// Created by tnsgud on 2021-11-07.
// Link : https://www.acmicpc.net/problem/11653

#include <iostream>

using namespace std;

int isPrime(int num) {
    if (num < 2) {
        return 0;
    } else {
        for (int i = 2; i * i <= num; ++i) {
            if (num % i == 0) return 0;
        }
    }

    return 1;
}

int main() {
    int num;

    cin >> num;

    while (num != 1) {
        for (int i = 2; i <= num; ++i) {
            if (num % i == 0 && isPrime(i)) {
                num = num / i;
                cout << i << '\n';
                break;
            }
        }
    }

    return 0;
}