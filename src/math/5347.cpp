//
// Created by tnsgud on 2021-11-08.
// Link : https://www.acmicpc.net/problem/5347

#include <iostream>

using namespace std;

long long int gcd(long long int num1, long long int num2) {
    if(num2 == 0) return num1;
    else return gcd(num2, num1 %num2);
}

int main() {
    long long int num1, num2, len;

    cin >> len;

    for (int i = 0; i < len; ++i) {
        cin >> num1 >> num2;

        cout << num1*num2/gcd(num1, num2) << '\n';
    }
}
