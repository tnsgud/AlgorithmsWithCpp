//
// Created by qkrtn on 2022-03-13.
// Link : https://www.acmicpc.net/problem/10101

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c;
    cin >> a >> b >> c;

    if(a+b+c > 180 || a+b+c < 180) {
        cout << "Error";
    }else if(a == b  && c == a) {
        cout << "Equilateral";
    }else if(a == b || c == a || b ==c ) {
        cout << "Isosceles";
    }else {
        cout << "Scalene";
    }

    return 0;
}